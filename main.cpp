
#include<iostream>     //输入的表达式要以'#'结尾，如‘5+6*3/(3-1)#’
#include<cstring>
#include<cstdio>
#include<cctype>

#include "compute.h"

using namespace std;

int main() {
    string str;
    cin >> str;
    double ans = getAnswer(str);
    cout << ans << endl << endl;
    getchar();

    return 0;
}
