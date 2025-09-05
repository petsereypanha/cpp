#include"header.h"
int main(){
    system("clear");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < i; j++){
            cout <<"i :"<< i << " , j :"<< j << endl;
        }
        cout << endl;
    }
    return 0;
}
