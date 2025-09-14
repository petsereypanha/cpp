#include"../index.h"
class Menu{
    public:
        virtual ~Menu(){};
        virtual void Input() = 0;
        virtual void Output() = 0;
        virtual float Area() = 0;
};
class Circle: public Menu {
    private:
        float R;
    public:
        Circle(){};
        Circle(float R){this->R = R;};
        virtual void Input();
        virtual void Output();
        virtual float Area();
};
class Triangle: public Menu {
    private:
        float A,B,C;
    public:
        Triangle(){};
        Triangle(float A,float B,float C){this->A=A;this->B=B;this->C=C;};
        void Input();
        void Output();
        float Area();
};
class Rectangle: public Menu{
    private:
        float L,W;
    public:
        Rectangle(){};
        Rectangle(float L,float W){this->L = L; this->W = W;};
        virtual void Input();
        void Output();
        float Area();

};
// @Class Circle
void Circle::Input(){
    cout << endl << "Input R    : "; cin >> R;
}
void Circle::Output(){
    cout << endl << "Circle R   : " << R
         << ",  Area    : " << Area() << endl;
}
float Circle::Area(){
    return (
        // pow(R,2) * 3.14;
        R * R * 3.14
    );
}
// @ Class Triangle
void Triangle::Input(){
    cout << endl << "Input A    : "; cin >> A;
    cout << endl << "Input B    : "; cin >> B;
    cout << endl << "Input C    : "; cin >> C;
}
void Triangle::Output(){
    cout << endl << "Triangle A  :" << A
                 << ", B  :" << B
                 << ", C  :" << C
                 << ", Area  : " << Area() <<endl;
}
float Triangle::Area() {
    float data = (A+B+C)/2;
    float value = data*(data-A)*(data-B)*(data-C);
    // cout << "Value : " << value ;
    return (
        sqrt(value)
    );
}
// @ Class Rectangle
void Rectangle::Input(){
    cout << endl << "Input L    : "; cin >>L;
    cout << "Input W    : "; cin >>W;
}
void Rectangle::Output(){
    cout << endl << "Rectangle L  : " << L
                 << ",  W   : " << W
                 << ", Area : " << Area() << endl;
}
float Rectangle::Area(){
    return(
        L*W
    );
}
int main(){
    Menu *obj[3] = {
        new Circle(8),new Triangle(6,7,8.3F),new Rectangle(15.2F,4.2F)
    };
    /*
        Menu *obj[] = new Circle(8);
        Menu *obj[] = new Triangle(4.5F,2.3F,8.3F);
         Menu *obj[] = new Rectangle(15.2F,4.2F);
    */
    for(int i = 0; i < 3; i ++){
        // obj[i].Input();
        obj[i]->Output();
    }
    for(int i = 0; i < 3; i ++){
        delete obj[i];
    }
    return 0;
}