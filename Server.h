//
// Created by WML on 2018/9/26.
//

#ifndef BUAA_MATHEMATICALMODELING_SERVER_H
#define BUAA_MATHEMATICALMODELING_SERVER_H


#include "type.h"

class Server {
private:
    double ServeTime;
public:
    Server(double time);
    double serve(Customer tag);
    double serve(double t);
};


#endif //BUAA_MATHEMATICALMODELING_SERVER_H
