//
// Created by WML on 2018/9/25.
//
#include <iostream>
#include <ctime>
#include "Queue.h"
#include "Server.h"
#include "Clock.h"

using namespace std;

int main() {
    int CustomerNum;
    double ArriveTime;
    double ServeTime;
    int MaxLength;

    cin >> CustomerNum >> ArriveTime >> ServeTime >> MaxLength;

    Queue queue(CustomerNum, ArriveTime, MaxLength);
    Server server(ServeTime);
    Clock clock;

    while (queue.QueueGenerate()) {
        double t = queue.serve();
        if (t >= clock.getTime()) {
            clock.setTime(server.serve(t));
        } else {
            clock.setTime(server.serve(clock.getTime()));
        }
        cout << clock.getTime() << endl;
    }
    cout << "END" << endl;
    return 0;
}