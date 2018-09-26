//
// Created by WML on 2018/9/26.
//

#include "Queue.h"
#include "cstdlib"
#include <malloc.h>

Queue::Queue(int num, double time, int maxlength) {
    Head = NULL;
    CustomerNum = num;
    AverageTime = time;
    MaxLength = maxlength;
}

void Queue::QueueGenerate() {
    int i;
    Customer *p = Head;
    for (i = 0; i < MaxLength; i++) {
        if (p == NULL) {
            p = (Customer *)malloc(sizeof(Customer));
            p->next=NULL;
            p->tag=0;
            p->time=
        }
    }
}

void Queue::serve() {

}