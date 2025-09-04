#include"header.h"
int main(){
   // if else if
    int  id,hour;
    string name;
    char* gender; // char gender[10];
    float salary,tax,rate,total;
    double Income;
    // Input Data
    cout << endl << "Input ID       : "; cin >> id;
    cout << "Input Name     : "; cin.ignore();getline(cin,name);
    gender = new char[10];  // 1    charater = 1byte
    cout << "Input Gender   : "; cin.ignore();cin.getline(gender,20);
    cout << "Input Salary   : "; cin >> salary;
    cout << "Input Rate     : "; cin >> rate;
    cout << "Input Hour     : "; cin >> hour;
    total = salary + (rate * hour);
    if(total >= 100 && total < 300){    // 100$ -> 299.99$
        tax = 0.5;  // 0.5%
    }
    else if(total >= 300 && total < 500){  // 300$ -> 499.99$
        tax = 1;    // 1%
    }
    else if(total >= 500 && total < 1000){  // 500$ -> 999.99$
        tax = 2;  // 2%
    }
    else{
        if(total >= 1000){ // 1000$ -> ...
            tax = 5;    // 5%
        }else if (total > 0 && total < 100) {   // 1$ -> 99$
            tax = 0;    // 0%
        }
    }
    Income = total - (total*tax)/100;
    // Header
    cout << endl << setw(10) << "ID" << setw(10) << "Name" << setw(10) << "Gender"
         << setw(11) << "Salary" << setw(10) << "Tax" << setw(12) << "Income\n" << endl;
    // Output Data
    cout << setw(10) << id << setw(10) << name << setw(10) << gender
         << setw(10) << salary << "$" << setw(10) << tax << setw(10) << Income << "$" << endl;
    return 0;

}

/*
if(100$ -> 299$){
    return tax;
}else if(300$ -> 499$){
    return tax;
}

*/

 /*
    operater and(&&)
    1 && 1  -> true
    1 && 0  -> false
    0 && 1  -> false
    0 && 0  -> false
 */


//   old  Home Work

// Persion
//    int  id,hour
//    string name
//    char gender[]
//    float salary,tax,rate,total
//    double Income = total - (total*tax);

//  new Home Work

//  student

/*
    int id;
    char grade;
    char *name;
    string gender;
    float  C,C++,C#,JavaScript,Python,PHP,Network;
    double total;
    if(total >= 90 && total <= 100) grade = A
    else if(total >= 80 && total < 90) grade = B
    else if(total >= 70 && total < 80) grade = C
    else if(total >= 60 && total < 70) grade = D
    else if(total >= 50 && total < 60) grade = E
    else {
        if(total >= 0 && total <50){
            grade = F;
        }
    }
*/