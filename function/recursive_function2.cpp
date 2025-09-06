#include<iostream>
using namespace std;
double SumData(double data){
    if(data <= 0){
        return 0;
    }else{
        return  ((2*data) + SumData(data -1));
    }
}
int main(){
    system("clear");
    double data = 5.5;
    double sum = SumData(data);
    cout << endl << "Sum Data : " << sum << endl;
    return 0;
}

/*
    double SumData(5.5){
        return  ((2*5.5) + SumData(5.5-1));
    }
=>
    double SumData(4.5){
        return  ((2*4.5) + SumData(4.5-1));
    }
=>
    double SumData(3.5){
        return  ((2*3.5) + SumData(3.5-1));
    }
=>
    double SumData(2.5){
        return  ((2*2.5) + SumData(2.5-1));
    }
=>
    double SumData(1.5){
        return  ((2*1.5) + SumData(1.5-1));
    }
=>
    double SumData(0.5){
        return  ((2*0.5) + SumData(0.5-1));
    }
=>
    double SumData(-0.5){
        if(data <= 0){
            return 0;
        }
    }
*/

/*
    float sum = 0;

    for(int i = 0; i < n; i++){
        sum = sum + (i*2);
    }

*/