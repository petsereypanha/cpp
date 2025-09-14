#include"../index.h"
class Operator{
    private:
        float data;
        float value;
    public:
        Operator();
        Operator operator+(const Operator& o);
        void setData(float data);
        void setValue(float value);
        void operator ++();
        void operator --();
        void Display();
        void Display_Clone();
};
Operator::Operator(): data(20.33){};
Operator Operator::operator+(const Operator& param){
    Operator object;
    object.data = this->data + param.data;
    object.value = this->value + param.value;
    return object;
}
void Operator::Display(){
    cout << "Output Data : " << data << endl;
}
void Operator::Display_Clone(){
    cout << "Output Data : " << data  << " Value  : " << value << endl;
}
void Operator::setData(float data){
    this->data = data;
};
void Operator::setValue(float value){
    this->value = value;
};
void Operator::operator ++(){
    data += 66.5;
}
void Operator::operator --(){
    data -= 26.5;
}
int main(){
    system("clear");
    Operator obj;
    ++obj;
    obj.Display();
    --obj;
    obj.Display();

    Operator obj_one,object_two,obj_three;

    obj_one.setData(23.44);
    obj_one.setValue(99.22);
    cout << endl << "Object One " <<endl;
    obj_one.Display_Clone();

    object_two.setData(11.22);
    object_two.setValue(55.66);
    cout << endl << "Object Two " <<endl;
    object_two.Display_Clone();

    obj_three = obj_one + object_two;
    cout << endl << "Object Three " <<endl;
    obj_three.Display_Clone();
    return 0;
}