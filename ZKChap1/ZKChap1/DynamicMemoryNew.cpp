//
//  DynamicMemoryNew.cpp
//  ZKChap1
//
//  Created by LongMa on 2021/1/8.
//

#include "DynamicMemoryNew.hpp"
#include <iostream>
using namespace std;

void dynamicMemoryNewTest(){
    int n = 5;
    int *p;
    
    //new 与 delete 必须成对使用，否则会 内存泄露；delete数组时，必须加 []
    p = new int[n];
    
    p[0] = 11;
    
    //越界不崩溃！😓
    p[-1] = -44;
    p[69] = 4;
    cout << p[0] << " " << p[69] << " " << p[-1] << endl;
    
    delete [] p;
}
