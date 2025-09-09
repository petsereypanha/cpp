#include"header.h"
int main(){
    int *p,number;
    long allData = 1;

    cout << "Input number of element : ";
    cin >> number;
    p = (int*)calloc(number,sizeof(int));
    // if(!p){
    if(p == NULL){
        cout << "Error ..!" <<endl;
        exit(0);
    }
    for(int i = 0; i <number; i++){
        cout << "Input Element Of Pointer : ";
        cin >> *(p + i);
        allData *= *(p + i);
    }
    cout << "\nAll Data  : " << allData << endl <<endl;
    for(int i = 0; i <number; i++){
        cout << "Output " << i+1 <<" Pointer : " << *(p+i) <<endl;
    }
    free(p);
    return 0;
}