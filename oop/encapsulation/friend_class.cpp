#include <iostream>
using namespace std;
class Myclass {
    private:
        int value;
    public:
        Myclass(int data): value(data) {}
        friend void display(Myclass& obj){
            int value = obj.value;
            cout<<"value of private data member: "<<value;
        }
};
int main() {
    Myclass myObj(98);
    display(myObj);
 return 0;
}


