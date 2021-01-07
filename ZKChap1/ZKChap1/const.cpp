//
//  const.cpp
//  ZKChap1
//
//  Created by LongMa on 2021/1/7.
//

#include "const.hpp"
#include <iostream>
using namespace std;

//const 与指针共同使用时：const 优先修饰 左边 的内容
void testConst(){
    int const a = 1;
//    a = 2;
    
    int b = 2;
    int b1 = 5;
    
    //const 不在 * 左边，表示数据是常量。数据不能通过本指针改变（！但是可以通过其他方式改变）；指针是变量，可以指向其他内存单元。
    int const * c = &b;
    b = 3;
//    *c = 4;
    c = &b1;
    cout << b << endl;
    cout << *c << endl;
    
    //const左边是 * 号，表示指针是常量。指针不能充当左值。但是数据可以被改变。
    int e0 = 6;
    int *const e = &e0;
//    int e1 = 7;
//    e = &e1;
    *e = 8;
    cout << e0 << endl;
    
    //* 左右各一个 const 时，表示数据和指针都是常量：既无法通过指针修改数据，又无法修改指针。但依旧可以通过其他方法修改数据。
    int f0 = 9;
    int f1 = 10;
    int const * const f = &f0;
//    *f = 10;
//    f = &f1;
    
    f0 = 11;
    cout << f0 << endl;
}
