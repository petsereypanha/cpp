#include"../index.h"
class DataOne{
    protected:
        double value_one,value_two;
    public:
        DataOne();
        DataOne(double value_one,double value_two);
        virtual void Output();
};
class DataTwo: public DataOne{
    protected:
        double value_three;
    public:
        DataTwo();
        DataTwo(double value_one,double value_two,double value_three);
        void Output();
};
class DataThree: public DataOne{
    protected:
        double value_four;
    public:
        DataThree();
        DataThree(double value_one,double value_two,double value_four);
        void Output();
};
// Class Data One
DataOne::DataOne(){
    value_one = 22.33;
    value_two = 55.55;
}
DataOne::DataOne(double value_one,double value_two){
    this->value_one = value_one;
    this->value_two = value_two;
}
void DataOne::Output(){
    cout << endl << "Base Class One" << endl;
    cout << "Value One : " << value_one << "\t Value Two : " << value_two << endl;
}
// Class Data Two
DataTwo::DataTwo(){
    value_one = 44.33;
    value_two = 66.55;
    value_three = 99.88;
}
DataTwo::DataTwo(double value_one,double value_two,double value_three){
    this->value_one = value_one;
    this->value_two = value_two;
    this->value_three = value_three;
};
void DataTwo::Output(){
    cout << endl << "Base Sub Class Two" << endl;
    cout << "Value One : " << value_one
         << "\t Value Two : " << value_two
         << "\t Value Three : " << value_three << endl;
}
// Class Data Three
DataThree::DataThree(){
    value_one = 14.33;
    value_two = 26.55;
    value_four = 39.88;
}
DataThree::DataThree(double value_one,double value_two,double value_four){
    this->value_one = value_one;
    this->value_two = value_two;
    this->value_four = value_four;
};
void DataThree::Output(){
    cout << endl << "Base Sub Class Three" << endl;
    cout << "Value One : " << value_one
         << "\t Value Two : " << value_two
         << "\t Value Four : " << value_four << endl;
}
int main(){
    system("clear");
    DataOne *obj_1;
    DataTwo obj_2;
    DataThree obj_3;
    obj_1 = &obj_2;
    obj_1->Output();
    obj_1 = &obj_3;
    obj_1->Output();
    DataTwo obj_1p(41.1,53.2,25.3);
    DataThree obj_2p(23.4,53.3,94.2);
    obj_1 = &obj_1p;
    obj_1->Output();
    obj_1 = &obj_2p;
    obj_1->Output();
    return 0;
}