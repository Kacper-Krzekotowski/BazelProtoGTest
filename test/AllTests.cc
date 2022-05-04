#include <gtest/gtest.h>
#include "lib/person.pb.h"

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


