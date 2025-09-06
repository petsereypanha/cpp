#include"header.h"
int temp;
void ChangeData(int x, int y){
    temp = x;
    x    = y;
    y    = temp;
    cout << "\n Output X in Function : " << x << endl;
    cout << " Output Y in Function : " << y << endl;
}
int main(){
    int x = 49,y = 90;
    ChangeData(x,y);
    cout << "\n Output X in Main : " << x << endl;
    cout << " Output Y in Main : " << y << endl;
    return 0;
}