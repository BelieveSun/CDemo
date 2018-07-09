//
// Created by gj on 18-7-9.
//
#include <iostream>
#include <algorithm>
#include <regex>

using namespace std;

void demo5();

void demo6();

/**
 * b的内存地址不一样
 * @return
 */
int main() {
    int x = 56;
    int &a = x;
    int &r = a;
    int b = x;
    cout << "x =" << x << " , &x=" << &x << ",a=" << a << ", &a=" << &a << ",r=" << r << " ,&r=" << &r
         << " ,b=" << b << ",&b=" << &b << endl;
    r = 25;
    cout << "x =" << x << " , &x=" << &x << ",a=" << a << ", &a=" << &a << ",r=" << r << " ,&r=" << &r
         << " ,b=" << b << ",&b=" << &b << endl;
    demo5();
    demo6();
    return 0;
}



void demo5() {
    typedef double array[10];
    array a = {12, 34, 56, 78, 90, 98, 76, 85, 64, 43};
    array &b = a;
    a[2] = 100;
    for (int i = 0; i < 10; i++) {
        cout << b[i] << " ";
    }
}

void demo6() {
    double a[] = {1.1, 4.4, 3.3, 2.2}, b[4];
    copy(a, a + 4, ostream_iterator<double>(cout, " "));
    cout << endl;
    reverse_copy(a, a + 4, ostream_iterator<double>(cout, " "));
    cout << endl;
    copy(a, a + 4, b);
    copy(b, b + 4, ostream_iterator<double>(cout, " "));
    cout << endl;
    sort(a, a + 4);
    copy(a, a + 4, ostream_iterator<double>(cout, " "));
    cout << endl;
    reverse_copy(a, a + 4, b);
    copy(b, b + 4, ostream_iterator<double>(cout, " "));
    cout << endl;
}