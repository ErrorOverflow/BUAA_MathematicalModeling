//
// Created by WML on 2018/9/26.
//

#ifndef BUAA_MATHEMATICALMODELING_QUEUE_H
#define BUAA_MATHEMATICALMODELING_QUEUE_H

#include "type.h"

class Queue {

private:
    Customer *Head;
    double AverageTime;
    int CustomerNum;
    int MaxLength;
    int Length;

public:
    Queue(int num,double AverageTime,int MaxLength);

    void QueueGenerate();

    void serve();
};


#endif //BUAA_MATHEMATICALMODELING_QUEUE_H
