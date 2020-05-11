
#include"stack.h"

//构造函数,初始化栈的实现

template <class T>
Stack<T>::Stack() {
    tos = 0;
    stck[SIZE] = 0;
}

//向栈中压入数据函数的实现
template <class T>
void Stack<T>::push(T ch) {
    if (tos == SIZE) {
        cout << "Stack is full!\n";
        return;
    }
    stck[tos] = ch;
    tos++;
}

//从栈中弹出数据函数的实现
template <class T>
T Stack<T>::pop() {
    if (0 == tos) {
        cout << "Stack is empty!\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

//显示栈顶数据函数的实现
template <class T>
T Stack<T>::top() {
    if (0 == tos) {
        cout << "Stack is empty!\n";
        return 0;
    }
    return stck[tos-1];
}

//判断栈空函数的实现
template <class T>
bool Stack<T>::empty(){
    if(0==tos){
        return true;
    } else{
        return false;
    }
}