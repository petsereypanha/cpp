#include"header.h"
int Sum(int x,int y){
    // cout << "Inter Parameter " << endl;
    return (x+y);
}
float Sum(float x,float y){
    // cout << "Float Parameter " << endl;
    return (x+y);
}
int main(){
    int a=10,b=40;
    float c=30,d=50;
    cout << endl << "Sum Int   :" << Sum(a,b) << endl;
    cout << endl << "Sum Float :" << Sum(c,d) << endl;
    return 0;
}