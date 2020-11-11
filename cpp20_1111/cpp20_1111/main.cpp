//
//  main.cpp
//  cpp20_1111
//
//  Created by LongMa on 2020/11/11.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace::std;

void arrTest();
void variableSizedArray();
void vertorSort();

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "input pls:\n";
    
//    arrTest();
//    variableSizedArray();
    vertorSort();
    
    return 0;
}


void arrTest(){
    int lCount;
    cin >> lCount;
    int arr[lCount];
    
//    cout << "input num into arr：" << endl;
    for (int i = 0; i < lCount; i++) {
        cin >> arr[i];
    }
    
    //reverse print
    for (int i = lCount - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}



/// https://www.hackerrank.com/challenges/variable-sized-arrays/problem?h_r=next-challenge&h_v=zen
void variableSizedArray(){
    int arrLength, queryTimes;
    cin >> arrLength >> queryTimes;
    vector<vector<int>> arr(arrLength);
   
    //输入，建立二维可变尺寸数组
    for (int i = 0; i < arrLength; i++) {
        int len;
        cin >> len;
        vector<int> subArr(len);
        
        for (int j = 0; j < len; j++) {
            cin >> subArr[j];
        }
        arr[i] = subArr;
    }
    
    //记录查询输入
    vector<vector<int>> arr4QueryInfo(queryTimes, vector<int>(2));
    for (int k = 0; k < queryTimes; k++) {
        cin >> arr4QueryInfo[k][0] >> arr4QueryInfo[k][1];
    }
    
    //输出查询对应的元素
    for (int i = 0; i < queryTimes; i++) {
        int lIndexLvl = arr4QueryInfo[i][0];
        int lIndexLv2 = arr4QueryInfo[i][1];
        cout << arr[lIndexLvl][lIndexLv2] << endl;
    }
}

//指针方法难理解，且运行失败😓，改用上面矢量法实现
//void variableSizedArray(){
//    int arrLength, queryTimes;
//
//    cin >> arrLength >> queryTimes;
//
//    int** arr = new int* [arrLength];
//    for (int i = 0; i < arrLength; i++) {
//        int subArrLen;
//        cin >> subArrLen;
//        int* lArr = new int [subArrLen];
//        for (int j = 0; j < subArrLen; j++) {
//            cin >> lArr[j];
//        }
//        arr[i] = lArr;
//    }
//
//    int** lQueryArr = new int* [queryTimes];
//    for (int k = 0; k < queryTimes; k++) {
//        int lArrTemp[2];
//        cin >> lArrTemp[0] >> lArrTemp[1];
//        lQueryArr[k] = lArrTemp;
//    }
//
//    //output
//    for (int i = 0; i < queryTimes; i++) {
//        int* lsubArr = lQueryArr[i];
//        int index0 = lsubArr[0];
//        int index1 = lsubArr[1];
//        cout << arr[index0][index1] << endl;
//    }
//
//}


/// https://www.hackerrank.com/challenges/vector-sort/problem?h_r%5B%5D=next-challenge&h_r%5B%5D=next-challenge&h_v%5B%5D=zen&h_v%5B%5D=zen
void vertorSort(){
    int lCount;
    cin >> lCount;
    
    vector<int> v(lCount);
    for (int i = 0; i < lCount; i++) {
        cin >> v[i];
    }
    
    //执行sort方法
    sort(v.begin(), v.end());
    
    //output
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
