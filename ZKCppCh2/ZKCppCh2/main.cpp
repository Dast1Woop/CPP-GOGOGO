//
//  main.cpp
//  ZKCppCh2
//
//  Created by LongMa on 2021/1/11.
//

#include <iostream>
using namespace std;
#include "Triangle.hpp"

int main(int argc, const char * argv[]) {
    
    float a,b,c;
    cin >> a >> b >> c;
    
    Triangle tri;
    tri.setSideLen1(a);
    tri.setSideLen2(b);
    tri.setSideLen3(c);
    tri.description();
    
    return 0;
}

