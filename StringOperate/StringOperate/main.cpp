//
//  main.cpp
//  StringOperate
//
//  Created by LongMa on 2020/12/25.
//

#include <iostream>
using namespace std;

void stringOperate();
int main(int argc, const char * argv[]) {
    // insert code here...
    
    stringOperate();
    return 0;
}

void stringOperate(){
    string str1, str2, strCombined, strTemp;
    do {
        cin >> str1 >> str2;
    } while (0 == str1.length() || 0 == str1.length());
    
    unsigned long str1Len = str1.length();
    unsigned long str2Len = str2.size();

    strCombined = str1 + str2;
    strTemp = str1;
    str1[0] = str2[0];
    str2[0] = strTemp[0];
    cout << str1Len << " " << str2Len << endl;
    cout << strCombined << endl;
    cout << str1 << " " << str2 << endl;
}




