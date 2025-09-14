#include"../index.h"
// @Abstract Class
class Base{
    private:
        int code;
        string name,gender;
        float salary;
    public:
        Base();
        Base(int code,string name,string gender,float salary);
        // @Abstract Methods
        virtual void Input() = 0;
        virtual void Output() = 0;
        virtual double Income() = 0;
};
class Persion: public Base {
    private:
        float hour,rate;
    public:
        Persion();
        Persion(int code,string name,string gender,float salary,float rate,float hour);
        friend void Header();
        // @Overriding Methods
        void Input();
        void Output();
        double Income();
};
int main(){
    system("clear");

    return 0;
}