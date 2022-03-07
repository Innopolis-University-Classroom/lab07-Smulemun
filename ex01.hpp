#include <bits/stdc++.h>
using namespace std;

template<typename T>
void multiples(T& sum, T x, int n){
    sum += 1;
    for(int i = 2; i <= n; i++){
        sum += i * x;
    }
}
