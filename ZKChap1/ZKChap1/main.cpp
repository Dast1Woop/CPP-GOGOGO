//
//  main.cpp
//  ZKChap1
//
//  Created by LongMa on 2021/1/4.
//

//c++中，头文件不再以 .h结尾
#include <iostream>

//using  std::cin;
using namespace std;

void const_castTest();
int twoMultiply(int* a);

//带默认值的函数如果有声明:1.必须在声明中指定默认值；2.声明可省略形参名；3.带默认值的参数必须放在最右
int max(int a, int b){
    return a > b ? a : b;
}

//int不赋值时，默认为0
int c ,d;
void funcTest(int , int b = 2, int c = 3);
//形参默认值赋值时，右侧也可以是表达式。
void funcTest2(int , int y = max(c,d), int z = c-d);


int main(int argc, const char * argv[]) {
    
//   ioTest()
//    const_castTest();
    
    //没有默认值的参数，必须传入值
//    funcTest();
//    funcTest(1);
//    funcTest(7);
//    funcTest(7,8);
//    funcTest(7,8,9);
    
    funcTest2(1);
    c = 4;
    d = 9;
    funcTest2(1);
    
    return 0;
}

void funcTest2(int x, int y, int z){
    cout << x << "," << y << "," << z << endl;
}

void funcTest(int a, int b, int c){
    cout << a << "," << b << "," << c << endl;
}

void ioTest(){
    int num0, num1;
    char str[20];
    char ch;
    double douNum;
    string lStr;
    
    cout << "请输入数字，字符，数字，字符串，浮点数" << endl;
    
    cin >> num0 >> ch >> num1 >> str >> douNum;
    
    lStr = str;
    
    // \: 输出内容太多，需要写在多行时用
    cout << "输入的\
    数字1：\t" << num0 << endl
    << "输入的字符：\t" << ch << endl
    << "输入的数字2：\t" << num1 << endl
    << "输入的字符串：\t" << lStr << endl
    << "输入的浮点数：\t" << douNum << endl;
}

void const_castTest(){
    const int a = 10;
    const int *p = &a;
    int *q = const_cast<int *>(p);
    *q = 20;
    
    cout << "a地址：\t" << &a << endl
    << "p：\t" << p << endl
    << "q：\t" << q << endl
    << "a：\t" << a << endl
    << "*p：\t" << *p << endl
    << "*q：\t" << *q << endl;
    
    //No matching function for call to 'twoMultiply'
//    twoMultiply(p);
    //必须用 const_cast转化一下
    twoMultiply(const_cast<int *>(p));
}


//对于参数是指针的函数，传入的实参如果为 const 类型，需要转换为非 const 类型传入，用 const_cast 转换
int twoMultiply(int* a){
    return 2 * *a;
}