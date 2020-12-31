//
//  main.cpp
//  cpp201231_struct
//
//  Created by LongMa on 2020/12/31.
//

#include <iostream>
using namespace std;

struct Student {
    int age;
    string firstName;
    string lastName;
    int standard;
};

int main(int argc, const char * argv[]) {
    // insert code here...

    Student stu = Student();
    cin >> stu.age >> stu.firstName >> stu.lastName >> stu.standard;
    
    cout << stu.age << " " << stu.firstName << " " << stu.lastName << " " << stu.standard;
    
    return 0;
}
