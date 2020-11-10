//
//  main.cpp
//  cpp20_1110
//
//  Created by LongMa on 2020/11/10.
//

#include <iostream>
using namespace::std;

void funcTest();
int max_of_four(int a, int b, int c, int d);
int max_of_two(int a, int b);

void pointerTest();
void sumAndMinus(int *a, int *b);

int main(int argc, const char * argv[]) {
    
    //max of 4
//    funcTest();
    
    pointerTest();
    
    return 0;
}

void sumAndMinus(int *a, int *b){
    int sum = *a + *b;
    *b = abs(*a - *b);
    *a = sum;
}

void pointerTest(){
    int m, n;
    cout << "input m,n pls:" << endl;
    cin >> m >> n;
    
    sumAndMinus(&m, &n);
    cout << "sum = " << m << ",minus = " << n << endl;
}



void funcTest(){
    int a, b, c, d;
    cout << "input 4 nums pls:" << endl;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("max:%d\n", ans);
}

int max_of_four(int a, int b, int c, int d){
    int num1 = max_of_two(a, b);
    int num2 = max_of_two(c, d);
    return max_of_two(num1, num2);
}

int max_of_two(int a, int b){
    return a > b ? a : b;
}
