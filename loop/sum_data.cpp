#include"header.h"
int main(){
    system("clear");
    int sum = 0,n;
    // 2 + 4 + 6 + 8 + ... + 2n+2
    cout << endl << "Input Number  : "; cin >> n;
    for(int i = 0; i < n; i++){
        // sum = sum + (2*i+2);
        sum += 2*i + 2;
        /*
            sum = 0 + 2*0 +2 = 2;
            sum = 2 + 2*1 + 2 = 6
        */
    }
    cout << endl << "Output Sum  : " << sum << endl;
    return 0;
}