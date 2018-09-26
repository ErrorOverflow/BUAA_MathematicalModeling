//
// Created by WML on 2018/9/25.
//
#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    int CustomerNum;
    double ArriveTime;
    double ServeTime;
    int MaxLength;

    cin >> CustomerNum >> ArriveTime >> ServeTime >> MaxLength;

    Queue queue(CustomerNum, ArriveTime, MaxLength);
    return 0;
}