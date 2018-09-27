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
        Customer *p = NULL;
        *p = queue.serve();
        if (p->time >= clock.getTime()) {
            cout << server.serve(*p) << endl;
        } else {

        }
    }
    cout << "END" << endl;
    return 0;
}