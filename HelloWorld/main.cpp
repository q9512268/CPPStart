//
//  main.cpp
//  HelloWorld
//
//  Created by Christian Lütticke on 13.08.20.
//  Copyright © 2020 Christian Lütticke. All rights reserved.
//

#include <iostream>
#include<string>

//#include "Log.h"

void Log(const char* message);


//static
//inline

int Multiply(int a, int b)
{
    Log("Multiply");
    int result = a * b;
    //Log(std::to_char((result)));
    return a * b;
}


int main(int argc, const char * argv[])
{
    // insert code here...
    Log("Hello, World!");
    int a = 5;
    int b = 10;
    int result = Multiply(a, b);
    std::cout << result << std::endl;
    return 0;
}
