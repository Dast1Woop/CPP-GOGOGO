//
//  funcRelated.hpp
//  ZKChap1
//
//  Created by LongMa on 2021/1/7.
//

#ifndef funcRelated_hpp
#define funcRelated_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

inline void simpleFunc(){
    cout << "简单的函数才需要声明为内联函数,空间换时间，有switch或循环的函数不适合" << endl;
}

////函数重载
int bigger(int, int);
float bigger(int, float);
float bigger(float, int);
float bigger(float, float);
double bigger(double, double);


#endif /* funcRelated_hpp */
