# 栈实现表达式求值，C++

工程使用C++实现了简单的栈模板类，并实现了表达式计算功能。

## 编译方法
需要CMake环境

```shell script
mkdir build
cd build
cmake ..
make
```

直接使用g++编译也可
```shell script
g++ main.cpp compute.cpp compute.h stack.h
```

## 使用方法

```shell script
12+5#
17

1/5#
0.2

1+(2+3)*4-6/2#
18
```

## 引用来源

[栈实现表达式求值（C++)](https://blog.csdn.net/qq_37616069/article/details/80278746)

[顺序栈的基本运算](https://www.huweihuang.com/data-structure-notes/stack/sqstack.html)