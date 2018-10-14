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
    static double freetime=0;
    static double waitime=0;
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
            freetime += (t - clock.getTime());
            clock.setTime(server.serve(t));
        } else {
            waitime+=(clock.getTime()-t);
            cout << "(waiting) ";
            clock.setTime(server.serve(clock.getTime()));
        }
        cout << clock.getTime() << endl;
    }
    cout << "free rate: " << freetime / clock.getTime() << endl;
    cout << "total wait time: " << waitime << endl;
    cout << "END" << endl;
    return 0;
}