//
// Created by steins_xin on 23-10-1.
//

#include "Outpost_Kalman.h"

void Outpust_KalmanFilter::Initial() {

    // 初始化观测矩阵
    H << 1, 0, 0, 0, 0, 0,
         0, 1, 0, 0, 0, 0,
         0, 0, 1, 0, 0, 0;


    R <<  0.001, 0, 0,
          0, 0.001, 0,
          0, 0.0, 0.001;


    Q <<  1, 0, 0, 0, 0, 0,
          0, 1, 0, 0, 0, 0,
          0, 0, 1, 0, 0, 0,
          0, 0, 0, 1, 0, 0,
          0, 0, 0, 0, 1, 0,
          0, 0, 0, 0, 0, 1;


    P <<1, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0,
        0, 0, 1, 0, 0, 0,
        0, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 1;
}

/**
 *  函数名: setF
 *  传入: double dt           (两帧间隔时间差)
 *  传出: 无
 *  功能: 通过传入时间差,更新状态转移矩阵
 */
void Outpust_KalmanFilter::setF(double dt) {
    F <<1, 0, 0, dt, 0, 0,
        0, 1, 0, 0, dt, 0,
        0, 0, 1, 0, 0, dt,
        0, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 1;
}

/**
 *  函数名: setPosAndSpeed
 *  传入: Vector3d position Vector3d speed  (世界坐标系,速度)
 *  传出: 无
 *  功能: 设置卡尔曼的初始状态
 */
void Outpust_KalmanFilter::setPosAndSpeed(Eigen::Vector3d position, Eigen::Vector3d speed) {
    x_post << position[0], position[1], position[2], speed[0], speed[1], speed[2];
}

/**
 *  函数名: predict
 *  传入: 无
 *  传出: VectorXd x_pre        (预测的矩阵)
 *  功能: 预测下一时刻的值,更新协方差
 */
Eigen::Matrix<double, 6, 1> Outpust_KalmanFilter::predict() {
    // 预测下一时刻的值
    x_pre = F * x_post;             //x的先验估计由上一个时间点的后验估计值和输入信息给出

    //求协方差
    P = F * P * F.transpose() + Q;  //计算先验均方差 p(n|n-1)=F^2*p(n-1|n-1)+q

    x_post = x_pre;

    return x_pre;
}

/**
 *  函数名: update
 *  传入: Vector3d z_k                        (世界坐标系)
 *  传出: Matrix<double, 6, 1> x_post         (校正之后的矩阵)
 *  功能: 通过传入观测世界坐标,更新卡尔曼增益
 */
Eigen::Matrix<double, 6, 1> Outpust_KalmanFilter::update(Eigen::Vector3d z_k) {
    //计算kalman增益
    K = P * H.transpose() * (H * P * H.transpose() + R).inverse();  //Kg(k)= P(k|k-1) H’ / (H P(k|k-1) H’ + Q)

    //修正结果，即计算滤波值
    x_post = x_pre + K * (z_k - H * x_pre);  //利用残余的信息改善对x(t)的估计，给出后验估计，这个值也就是输出  X(k|k)= X(k|k-1)+Kg(k) (Z(k)-H X(k|k-1))

    //更新后验估计
    P = (Eigen::MatrixXd::Identity(6, 6) - K * H) * P;   //计算后验均方差  P[n|n]=(1-K[n]*H)*P[n|n-1]

    return x_post;
}




