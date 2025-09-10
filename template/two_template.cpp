#include<iostream>
using namespace std;
template <typename Type> Type FunOne(Type param1,Type param2){
    return (param1+param2);
}
template<typename Y> Y FunTwo(Y param1,Y param2,Y param3){
    return (param1+param2+param3);
}
int main(){
    system("clear");
    cout << "FunOne : " << FunOne<long>(123,44) << endl;
    cout << "FunTwo : " << FunTwo<float>(33.4F,88.2F,12.4F) <<endl;
    return 0;
}