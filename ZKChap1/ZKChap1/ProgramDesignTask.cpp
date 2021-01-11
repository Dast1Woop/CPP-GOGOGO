//
//  ProgramDesignTask.cpp
//  ZKChap1
//
//  Created by LongMa on 2021/1/11.
//

#include "ProgramDesignTask.hpp"
#include <iostream>
using namespace std;

void programDesignTask(){
    int n;
    cout << "请输入计划输入字符串个数:" << endl;
    cin >> n;
    string *A = new string[n];
    
    cout << "请输入" << n << "个字符串:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    string maxLenStr, minLenStr = A[0];
    int lengthSum = 0;
    for (int i = 0; i < n; i++) {
        string lStr = A[i];
        int lLen = (int)lStr.length();
        if (lLen > maxLenStr.length()) {
            maxLenStr = lStr;
        }
        if (lLen < minLenStr.length()) {
            minLenStr = lStr;
        }
        lengthSum += lLen;
        cout << lStr << '\t';
        if (i == n - 1) {
            cout << endl;
        }
    }
    float lengthAvg = 1.0 * lengthSum / n;
    
    //输出最长和最短字符串，计算所有字符串的平均长度
    cout << "最长字符串：" << maxLenStr << endl;
    cout << "最短字符串：" << minLenStr << endl;
    cout << "字符串平均长度：" << lengthAvg << endl;
    
    delete [] A;
}
