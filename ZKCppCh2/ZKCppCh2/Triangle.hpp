//
//  Triangle.hpp
//  ZKCppCh2
//
//  Created by LongMa on 2021/1/12.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>

class Triangle{
private:
    float a, b, c;
public:
    
    //类中只适合声明，如果实现方法，则方法为inline方法！！！
    void setSideLen1(float);
    float getSideLen1();
    
    void setSideLen2(float len);
    float getSideLen2();
    
    void setSideLen3(float len);
    float getSideLen3();
    
    //cal methods
    //周长
    float getPerimeter();
    
    //面积
    float getArea();
    
    void description();
};//c++ 的类必须以分号结尾！



#endif /* Triangle_hpp */

