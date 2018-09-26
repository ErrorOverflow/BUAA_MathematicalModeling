//
// Created by WML on 2018/9/26.
//

#include "Queue.h"
#include "cstdlib"
#include <malloc.h>
#include <iostream>
#include "type.h"

Queue::Queue(int num, double time, int length) {
    Head = NULL;
    CustomerNum = num;
    AverageTime = time;
    MaxLength = length;
    Length = 0;
}

int Queue::QueueGenerate() {
    Customer *p = Head;
    if (CustomerNum == 0) {
        return -1;
    }
    while (Length < MaxLength && CustomerNum > 0) {
        if (p == NULL) {
            p = (Customer *) malloc(sizeof(Customer));
            p->next = NULL;
            p->tag = 0;
            p->time = AverageTime * 2 * rand() / double(RAND_MAX);
            Length++;
            CustomerNum--;
        } else if (p->next == NULL) {
            Customer *q = (Customer *) malloc(sizeof(Customer));
            q->next = NULL;
            q->tag = ++Length;
            q->time = AverageTime * 2 * rand() / double(RAND_MAX) + p->time;
            p->next = q;
            p = q;
            CustomerNum--;
        } else {
            p = p->next;
        }
    }
    return 0;
}

Customer Queue::serve() {
    if (Head == NULL) {
        std::cout << "queue is empty" << std::endl;
    } else {
        std::cout << "#" << Head->tag << "customer is starting being served" << std::endl;
        Head = Head->next;
        Length--;
    }
}