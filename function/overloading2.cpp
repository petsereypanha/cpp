#include"header.h"
int OverLoad(int x){
    return x;
}
int OverLoad(int x,int y){
    return (x/y);
}
float OverLoad(int x,float y){
    return (x*y);
}
double OverLoad(double x,double y,double z){
    return ((x*z) - y);
}
int main(){
    int a = 24,b = 55;
    float c = 55.6F;
    double d = 77.4,e = 99.4,f =22.3;
    int funOne = OverLoad(a);
    int funTwo = OverLoad(b,a);
    float funThree;
    funThree = OverLoad(a,c);
    double funFour;
    funFour = OverLoad(d,e,f);
    cout << endl << "Function One   :" << funOne <<endl;
    cout << "Function Two   :" << funTwo <<endl;
    cout << "Function Three :" << funThree <<endl;
    cout << "Function Four  :" << funFour <<endl;
    return 0;
}