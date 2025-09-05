#include"header.h"
int main(){
    system("clear");
    int n,i=0,value;
    cout << "\nInput Number  : ";cin >> n;
    do{
        cout << "\nInput Value " << i <<" : "; cin >> value;
        cout << "Output Value " << i << " : " << value <<endl;
        i++;
    }while(i < n);
    return 0;
}