//
// Created by WML on 2018/9/26.
//

#include <cstdlib>
#include "Server.h"
#include "type.h"

Server::Server(double time) {
    ServeTime = time;
}

double Server::serve(Customer tag) {
    return tag.time+ServeTime * 2 * rand() / double(RAND_MAX);
}
