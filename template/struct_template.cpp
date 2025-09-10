#include<iostream>
using namespace std;
template<typename T>
struct Struct_Template{
    T h;
    T w;
    T l;

    T getDataDisplay(){
        return (h*w*l);
    }
    T getDataDisplay(T _h,T _w,T _l){
        h = _h;
        w = _w;
        l = _l;
        return (h*w*l);
    }
};
int main(){
    system("clear");
    Struct_Template<long> obj_one;
    obj_one.h = 34;
    obj_one.w = 20;
    obj_one.l = 3;
    cout << "Display Object Integer : " << obj_one.getDataDisplay() << endl;
    Struct_Template<double> obj_two;
    cout << "Diplay Object Double   : " << obj_two.getDataDisplay(23.4,36.2,2.5) << endl;
    return 0;
}



/*
    Home Work

    struct Data{
        T x;
        T y;
        T SumData();
        T SumData(T _x,T _y);
    }
*/