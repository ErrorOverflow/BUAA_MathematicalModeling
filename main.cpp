//
// Created by WML on 2018/9/25.
//
#include <iostream>
#include "Queue.h"
#include "Server.h"

using namespace std;

int main() {
    int CustomerNum;
    double ArriveTime;
    double ServeTime;
    int MaxLength;

    cin >> CustomerNum >> ArriveTime >> ServeTime >> MaxLength;

    Queue queue(CustomerNum, ArriveTime, MaxLength);
    Server server(ServeTime);

    while (queue.QueueGenerate()) {
        cout << server.serve(queue.serve()) << endl;
    }
    cout << "end" << endl;
    return 0;
}