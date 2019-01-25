//
//  Template.cpp
//  DQObjectCMaster
//
//  Created by wondertek on 2018/12/29.
//  Copyright © 2018年 deqing. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

template <typename T>
class A {
public:
    A(T t) {
        this->t = t;
    }
    
    T &getT() {
        return t;
    }
    
    void out() {cout<< t << endl;}
protected:
    T t;
};

class B: public A<int>
{
public:
    B(int a, double x):A<int>(a){y=x;}
    
    void out() {
        A<int>::out();
//        cout<<y<<endl;
    }
protected:
double y;
};

int main() {
    A<int> a(100);
    a.getT();
}

