#include <iostream.h>
class Base{
    protected : float data;
    public:
        Base(float d = 0.0) : data(d) {}
        float Square(){
            return data * data;
        }
        float HalfSquare(){
            return Square() / 2;
        }
};
class Derived : public Base {
    private :
        float exData;
    public:
        Derived(float d = 0.0, float exd = 0.0): Base(d), exData(exd) {}
        float Square(){
            return (data + exData) * (data + exData);
        }
};

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
    Base B(5.0);
    Derived D(4.0, 3.0);
    Base *pB;
    pB = &D;

    cout << "\nObject B\n";
    cout << "Square = " << B.Square() << endl;
    cout << "Half Square = " << B.HalfSquare() << endl;
    cout << "\nObject D\n";
    cout << "Square = " << D.Square() << endl;
    cout << "Half Square = " << D.HalfSquare() << endl;
    cout << "\nObject pointed to by pB\n";
    cout << "Square = " << pB->Square() << endl;
    cout << "Half Square = " << pB->HalfSquare() << endl;
}