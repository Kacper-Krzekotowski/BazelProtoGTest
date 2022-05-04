#include <iostream>
#include <sys/time.h>

#include "lib/person.pb.h"

int main(int argc, char const *argv[])
{
    std::cout<<"test\n\n\n";

    Person mess;
    mess.set_age(21);
    mess.set_name("Stefan");


    return 0;
}
