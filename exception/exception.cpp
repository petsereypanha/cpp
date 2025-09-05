#include <iostream>
using namespace std;
class Number {
    private:
        int a, b;

    public:
        Number(int x, int y) {
            a = x;
            b = y;
        }

        int gcd() {
            while (a != b) {
                (a > b) ? (a = a - b) : (b = b - a);
            }
            return a;
        }

        bool isPrime(int n) {
            if (n <= 1)
                return false;

            for (int i = 2; i < n; i++) {
                if (n % i == 0)
                    return false;
            }
            return true;
        }
};

class CoolPrimeException {};

int main() {
    int x = 13, y = 56;
    Number num1(x, y);
    cout << "Calculating the Coolest GCD..." << endl;
    cout << "GCD(" << x << ", " << y << ") = " << num1.gcd() << endl;
    cout << "Checking Prime Status..." << endl;
    if (num1.isPrime(x))
        cout << x << " is a prime number. Cool!" << endl;
    if (num1.isPrime(y))
        cout << y << " is a prime number. Cool!" << endl;
    cout << "Throwing a CoolPrimeException..." << endl;
    if (num1.isPrime(x) || num1.isPrime(y)) {
        try {
            throw CoolPrimeException();
        } catch (CoolPrimeException t) {
            cout << "Caught a CoolPrimeException! That's really cool!" << endl;
        }
    }

    return 0;
}