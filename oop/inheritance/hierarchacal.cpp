#include<../index.h>
class Base{
    private:
        int number;
    public:
        Base();
        Base(int number);
        void Input();
        void Output();
        friend void Header_Base();
};
class Chaid_One: public Base {
    private:
        int age;
        string name;
        string gender;
    public:
        Chaid_One();
        Chaid_One(int age,string name,string gender);
        void Input();
        void Output();
        friend void Header_Chaid_One();
};
class Chaild_Two: public Base {
    private:
        long phone;
        string address;
    public:
        Chaild_Two();
        Chaild_Two(long phone,string address);
        void Input();
        void Output();
        friend void Header_Chaid_Two();
}
class Chaild_Three: public Base {
    private:
        float s1,s2,s3,s4,s5;
    public:
        Chaild_Three();
        Chaild_Three(float s1,float s2,float s3,float s4);
        void Input();
        void Output();
        friend void Header_Chaid_Three();
}
int main(){

    return 0;
}