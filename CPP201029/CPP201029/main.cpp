//
//  main.cpp
//  CPP201029
//
//  Created by LongMa on 2020/10/29.
//  Copyright © 2020 ht. All rights reserved.
//

#include <iostream>
using namespace std;

typedef  enum {
    KSeason_Spring,
    KSeason_Summer,
    KSeason_Autumn,
    KSeason_Winter,
}KSeason;

enum KWuXing{
    KWuXing_Gold,
    KWuXing_Wood,//此处，值依旧为1
    KWuXing_Water = 8,//赋值后只影响后面的枚举值
    KWuXing_Fire,
    KWuXing_Earth
};

void zd_cpp1stDemo();
int cinAndCoutTest();
int cinAndCoutTest2();

int main(int argc, const char * argv[]) {
    
    // insert code here...
    std::cout << "input pls:\n";
    
//    zd_cpp1stDemo();
//    cinAndCoutTest();
    cinAndCoutTest2();
    return 0;
}

void zd_cpp1stDemo(){
    cout << "wow\n";
    //    for (;;){}
    
    int age;
    cout << "input a age please:\n";
    cin >> age;
    cout << "you " << "are:" << age << endl;
    
    ///< 把内容左移到 cout 去输出
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    
    typedef int feet;
    feet lNum = 5;
    cout << lNum << endl;
    
    KSeason lSea = KSeason_Summer;
    cout << lSea << endl;
    
    KWuXing lWood = KWuXing_Wood;
    cout << "wood:" << lWood << endl;
    
    KWuXing lWater = KWuXing_Water;
    cout << "water:" << lWater << endl;
    
    KWuXing lFire = KWuXing_Fire;
    cout << "fire:" << lFire << endl;
}

int cinAndCoutTest() {
    int a,b,c;
    while(1){
        cin >> a >> b >> c;
        if(a < 1 || a > 1000){
            cout << "a输入不合法，请重新输入3个1-1000的数字" << endl;
            continue;
        }
        
        if(b < 1 || b > 1000){
            cout << "b输入不合法，请重新输入3个1-1000的数字" << endl;
            continue;
        }
        
        if(c < 1 || c > 1000){
            cout << "c输入不合法，请重新输入3个1-1000的数字" << endl;
            continue;
        }
        
        cout << a + b + c << endl;
        break;
    }
    return 0;
}

int cinAndCoutTest2(){
    int a;
    long int b;
    char c;
    float d;
    double e;
    
    cin >> a >> b >> c >> d >> e;
    cout << a << endl << b << endl << c << endl;
    
    //cout 不能指定打印类型。需要指定打印类型时（如%.3f），只能用printf
//    << "%.3f",d << endl << "%.6f",e << endl;
    
    printf("%.3f\n", d);
    printf("%.9f\n", e);
    return 0;;
}

