#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

///https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem
vector<int> parseInts(string str) {
    // Complete this function
    stringstream ss(str);
    
    int num;
    char ch;
    vector<int> v;
    
    for (int i = 0; ; i++) {
        int j = i % 2;
        if (0 == j) {
            ss >> num;
            v.push_back(num);
        }else{
            ss >> ch;
            if (ss.fail()) {
                break;
            }
        }
    }
    return v;
}

int main() {
    string str;
    cout << "input pls:";
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
