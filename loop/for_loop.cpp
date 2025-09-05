#include"header.h"
int main(){
    system("clear");
    int i,j;
    for(i=0;i<5;i++){
        cout << i << endl;
    }
    cout << "\nLoop J" << endl;
    for(j=3;j<11;j=j+2){
        cout << j << endl;
    }
    // i++ == i=i+1; j=j+2

    int n;
    cout << "\nInput Number : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Wellcome To NIT School" << endl;
    }


    for (int i =10 ; i > 0; i--){
        cout << i <<"Wellcome To NIT School" << endl;
    }

    /* i=10;10>0;i--    @ i-- == i=i-1
       i=9;9>0;i--
       .
       .
       .
       i=0;0>0;i-- x
    */

    return 0;
}


/*
    for(i = 0;i < 5;i++){ // 6

    }

    i = 0; 0<5 ;i++ @loop 1
    i = 1; 1<5 ;i++ @loop 2
    i = 2; 2<5 ;i++ @loop 3
    i = 3; 3<5 ;i++ @loop 4
    i = 4; 4<5 ;i++ @loop 5
    i = 5; 5<5 ;i++ @loop 6

    @ 0 -> 5

    for(j=3;j<11;j=j+2)

    j = 3 ;
    => j = 3+2
    j = 5
    => j = 5+2
    j = 7
    => j = 7+2
    j = 9
    => j = 9+2
    j = 11

    @ 3->11
*/