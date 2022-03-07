#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Calculator{
public:
    T a, b;

    Calculator(T a, T b){
        this.a = a;
        this.b = b;
    }

    T add(){
        return a + b;
    }

    T subtraction(){
        return a - b;
    }

    T multiplication(){
        return a * b;
    }

    T division(){
        return a / b;
    }
};