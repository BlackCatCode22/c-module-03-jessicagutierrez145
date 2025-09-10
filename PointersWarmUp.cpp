//
// Created by Jessica Gutierrez Argueta on 9/10/25.
//

#include <iostream>
using namespace std;

int main() {

    int n = 8;
    cout << n << '\n';
    int* ptr = &n;
    cout << ptr << endl;

    cout << *ptr;
    *ptr = 9;
    cout << ptr << endl;


    return 0;


}