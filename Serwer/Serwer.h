#pragma once 
#include <netdb.h>
#include <poll.h>
#include <vector>


struct  ClientCon : public pollfd
{

};



class Serwer{

public:
    Serwer(){};

    int get_listener_socket(const char * port);
private:
    int  listenSocket;
    std::vector<ClientCon> conections;
};