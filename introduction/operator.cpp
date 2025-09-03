#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int sum = 0;
    cout << "Sum     : " << sum << endl;
    a = 10;
    b = 30;
    sum = a + b;  //. 40
    cout << "A + B   : " << sum << endl;
    sum = b - a;  //. 20
    cout << "B - A   : " << sum << endl;
    sum = a * b;  // 300
    cout << "A * B   : " << sum << endl;
    sum = b / a;   // 3
    cout << "B / A   : " << sum << endl;
    double sum1;
    int c = 37;
    sum1 = c % a;   // 7
    cout << "C / A   : " << sum1 << endl;

    int i = 0;
    cout << "I  : " << i << endl;
    i++;// i = i +1;
    cout << "I  : " << i << endl;
    int j = 0;
    ++j;
    cout << "J  : " << j << endl;
    int k = 2;
    k--;  // k = k - 1;
    cout << "K  : " << k << endl;
    int k1 = 5;
    --k1;
    cout << "K1  : " << k1 << endl;

    int T;
    T += i; // T = T + i;
    T -= i; // T = T - i;
    T *= i; // T = T * i;
    T /= i; // T = T / i;
    T %= i; // T = T % i;
    /*
        @ sum = sum + 3;   sum = 3;
        @ sum = 3 + 3;     sum = 6;
        @ sum = 6 + 3;
        ...

        @ sum = sum * 5;   sum = 5;
        @ sum = 5 * 5;     sum = 25;
        @ sum = 25 * 5;    sum = 125
        ...
    */
    return 0;
}