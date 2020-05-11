//
// Created by linzyjx on 2020/05/12.
//

#ifndef COMPUTE_STACK_H
#define COMPUTE_STACK_H

#include<iostream>

using namespace std;

const int SIZE = 20;

template<class T>
class Stack {
private:
    T stck[SIZE];//数组用于存放栈中数据
    int tos;       //栈顶位置（数组的下标）

public:
    Stack();

    void push(T ch); //函数声明向栈中中压入数据fuction
    T pop();       //声明从堆栈中弹出数据fuction
    T top();

    bool empty();
};

#include "stack.cpp"    //模板类需要显式包含
#endif //COMPUTE_STACK_H
