#include<iostream>
#include<iomanip>
using namespace std;
void Time(float x , float y,string Type){
    float payment,end_time,time_start,total_time;
    string t1,t2;
        cout << "  Input Time Start   : "; cin >> time_start;
        cout << "  Input Time End     :"; cin >> end_time;
        total_time = end_time - time_start;
        t2 = (end_time >=12 && end_time <24) ? "pm" : "am";
        t1  = (time_start >=0 && time_start <12) ? "am" : "pm";
        total_time = end_time - time_start;
        payment = (end_time > 6 && end_time <=11) ? x : y;
        cout << endl << setw(11) << "Type" << setw(20) << "Time_Start" << setw(18) << "End_Time" << setw(20) << "Total_Time" << setw(17) << "Payment" << endl;
        cout << endl << setw(11) << Type << setw(16) << time_start << t1 << setw(18) << end_time << t2 << setw(16) << total_time << "Hour" << setw(16) << payment << "KHR" << endl;
}
int main(){
    int hour;
    string op;
    do{
        cout << endl <<  " A. Bicycle Type" << endl;
        cout << " B. Motor   Type" << endl;
        cout << " C. Car     Type" << endl;
        cout << " D.  Exit " << endl;
        cout << " Please Select One Option  :";
        cin >> op;
        switch (op[0]){
            case 'a':
            case 'A':{
                Time(300,500,"Bicycle");
            }break;
            case 'b':
            case 'B':{
                Time(500,1000,"Motor");
            }break;
            case 'c':
            case 'C':{
                Time(2000,5000,"Car");
            }break;
            case 'd':
            case 'D':{
                exit(0);
            }break;
        }
    }while(getchar()==10);
    return 0;
}