//
//  StringRelated.cpp
//  ZKChap1
//
//  Created by LongMa on 2021/1/8.
//

#include "StringRelated.hpp"
#include <iostream>
#include <string>

using namespace std;

void stringOperate(){
    string str;
    if (str.empty()) {
        cout << "str为空" << endl;
    }else{
        cout << "str为:"  << str << endl;
    }
    
    str.append("abcdefg");
    cout << "str is" << str << ",size:" << str.size() << endl;
    
    const char *p = str.c_str();
    cout << "p = " <<  p << endl;
    
    //单引号：字符；双引号：字符串
    cout << "find " << str.find("de",0) << endl;
    cout << "find " << str.find('d',3) << endl;
    cout << "find " << str.find("d",4) << endl;
    
    cout  << "sub:" << str.substr(0,3) << endl;
    
    string str1 = str.insert(4, "123");
    cout << str1 << endl;
}


/*log:
 same
 s1:C++语言程序设计
 size=21  ,length=21
 sizeS2=12  ,lengthS2=12
 s1:J++语言程序设计
 str=语言
 s1:J++语言程序设计
 s2:程序设计
 s1:程序设计
 s2:J++语言程序设计
 9
 **/
void stringOperate1(){
    
    //单字符size为 1，单汉字size 为 3（教材上写每个汉字体长度为 2，不同编译器表现不同！）
    string s1 = "C++语言";
    string s2 = "程序设计";
    string s3 = s1 + s2;
    string s4;
    
    //注意：append后，s1已经包含s2的内容了！
    s4 = s1.append(s2);
    
    if (s3 == s4) {
        cout << "same" << endl;
    }else{
        cout << "not same" << endl;
    }
    
    unsigned long size = s1.size();
    int length = (int)s1.length();
    cout << "s1:" << s1 << endl;
    cout << "size=" << size << "  ,length=" << length << endl;
    
    unsigned long sizeS2 = s2.size();
    int lengthS2 = (int)s2.length();
    cout << "sizeS2=" << sizeS2 << "  ,lengthS2=" << lengthS2 << endl;
    
    s1[0] = 'J';
    cout << "s1:" << s1 << endl;
    
    
    //教材写的是 substr(3,4)，但是Xcode此时log为 str=语\350。用 substr(3,6)才能截取 两个字
//    string s5 = s1.substr(3,4);
    string s5 = s1.substr(3,6);
    char str[20];
    strcpy(str, s5.c_str());
    cout << "str=" << str << endl;

    //swap
    cout << "s1:" << s1 << endl
         << "s2:" << s2 << endl;
    s1.swap(s2);
    cout << "s1:" << s1 << endl
         << "s2:" << s2 << endl;
    
    //find
    cout <<  s2.find(s1) << endl;
}

