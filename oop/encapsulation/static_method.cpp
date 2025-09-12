#include <iostream>
using namespace std;
class A {
	int x;
    public:
        A(){
        cout << "A's constructor called " << endl;
        }
};
class B {
	static A a;
    public:
        B(){
        cout << "B's constructor called " << endl;
        }
        static A getA(){
        return a;
        }
};
// Definition of a
A B::a;
// Driver code
int main(){
    // static member 'a' is accessed
    // without any object of B
    A a = B::getA();
    return 0;
}




