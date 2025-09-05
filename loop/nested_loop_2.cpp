#include"header.h"
int main(){
    system("clear");
    int n ;
    cout << "Input Number : "; cin >> n;
    for(int i = n; i > 0; i--){
        for(int j = n; j > i; j--){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            if(i %2 == 0){
                cout << "*";
            }else{
                cout << "@";
            }
        }
        cout << endl;
    }
    return 0;
}


/*
 *****
  @@@@
   ***
    @@
     *
*/

pow(2,n);
sqrt(4) = 2