#include <gtest/gtest.h>
#include "lib/person.pb.h"
#include "Serwer/Serwer.h"

class TestPb : public ::testing::Test {
protected:
    Person in;
    Person out;
};


TEST_F(TestPb,TestingPersonPB){
    in.set_age(10);
    in.set_name("Kamil");
    in.set_favoritething("Kobitki");

    std::string data;
    in.SerializeToString(&data);

    out.ParseFromString(data);
    

    ASSERT_EQ(in.age(),out.age());
    ASSERT_EQ("Kobitki",out.favoritething());
}



class TestSerwer : public ::testing::Test {
protected:
    Serwer srw;
};

TEST_F(TestSerwer,GetSocketTest){
    auto p = srw.get_listener_socket("8089");
    ASSERT_TRUE(p != -1);
}



