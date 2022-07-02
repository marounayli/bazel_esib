#include <iostream>
#include <string>
#include "greet.h"
#include "gtest/gtest.h"



int main (int argc, char ** argv){
    if(argc>1){
        std::cout << greet(argv[1]) << std::endl;
    }
    else{
        std::cout << "Hello anonymouss" << std::endl;
    }

}