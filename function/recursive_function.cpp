#include"header.h"
// int func(int n){
//     if(n==1){
//         return 1;
//     }else{
//         return (n * func(n -1));
//     }
// }
int func(int n){
    if(n==1){
        return 1;
    }
    return (n * func(n -1));
}
/*
    int func(int 3){
    if(n==1){
        return 1;
    }else{
        return (3 * func(2));
    }
    =>
    int func(int 2){
    if(n==1){
        return 1;
    }else{
        return (2 * func(1));
    }
    =>
    int func(int 1){
    if(n==1){
        return 1;
    }else{
        return (n * func(n-1));
    }
}
*/
int main(){
    int a = 3;
    int data = func(a);
    cout << "Recursive Function : " << data << endl;
    return 0;
}