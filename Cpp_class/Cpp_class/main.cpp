//
//  main.cpp
//  Cpp_class
//
//  Created by LongMa on 2020/12/31.
//

#include <iostream>
//#include <sstream>
using namespace std;

class Student{
private:
    int age, standard;
    string firstName, lastName;
public:
    
    //@warning：参数和属性最好不要同名，否则需要用this->访问属性，否则’age = age;‘赋值会失败
    void set_age(int ageAr){
//        this->age = age;
        age = ageAr;
    }
    int get_age(){
        return age;
    }
    
    void set_first_name(string first_name){
        firstName =first_name;
    }
    string get_first_name(){
        return firstName;
    }
    
    void set_last_name(string last_name){
        lastName = last_name;
    }
    string get_last_name(){
        return lastName;
    }
    
    void set_standard(int standardAr){
        standard = standardAr;
    }
    int get_standard(){
        return standard;
    }
    
    string to_string(){
        string str = ::to_string(get_age()) + "," + get_first_name()+ "," + get_last_name() + "," + ::to_string(get_standard());
        return str;
    }
};

int main(int argc, const char * argv[]) {
    int age, standard;
    string first_name, last_name;
    cout << "input:";
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
