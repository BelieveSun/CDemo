//
// Created by gj on 18-7-9.
//
#include <iostream>

using namespace std;

int main() {
    double * p;
    p = new double[3];
    cout << "请输入：三个数字：";
    for (int i = 0; i < 3; i++) {
        cin >> * (p + i);
    }
    for (int i = 0; i < 3; i++) {
        cout << * (p + i) << " ";
    }
    delete p;
    return 0;
}

