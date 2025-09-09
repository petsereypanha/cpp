#include"header.h"
double *Data(double *value_1,double *value_2){
    double *min_Value = NULL;
    min_Value = (*value_1 < *value_2)? value_1 : value_2;
    return (min_Value);
}
int main(){
    double data_1=390,data_2=599.55;
    double *min_Data = NULL;
    min_Data = Data(&data_1,&data_2);
    cout << "Display Function pointer : "<< *min_Data <<endl;
    return 0;
}