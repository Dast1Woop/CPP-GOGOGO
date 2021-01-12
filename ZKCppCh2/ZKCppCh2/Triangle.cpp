//
//  Triangle.cpp
//  ZKCppCh2
//
//  Created by LongMa on 2021/1/12.
//

#include "Triangle.hpp"
#include <iostream>
using namespace std;

//类外实现 成员函数
void Triangle::setSideLen1(float len){
    a = len;
}
float Triangle::getSideLen1(){
    return a;
}

void Triangle::setSideLen2(float len){
    b = len;
}
float Triangle::getSideLen2(){
    return b;
}

void Triangle::setSideLen3(float len){
    c = len;
}
float Triangle::getSideLen3(){
    return c;
}

//cal methods
//周长
float Triangle::getPerimeter(){
    return a + b + c;
}
//面积
float Triangle::getArea(){
    float p = this->getPerimeter()/2;
    float s = sqrt(p * (p-a) * (p-b) * (p-c));
    return s;
}

void Triangle:: description(){
    cout << "三边长为：" << a << "," << b << "," << c << endl
    << "周长为：" << this->getPerimeter() << endl
    << "面积为：" << this->getArea() << endl;
}
