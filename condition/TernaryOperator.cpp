#include"header.h"
int main(){
    int id;
    char grade;
    char *name;
    string gender;
    float  C,CPP,CS,JavaScript,Python,PHP,Network;
    double total;
    cout << "Input ID       : ";cin >> id;
    name = new char[20];
    cout << "Input Name     : ";cin.ignore();cin.getline(name,20);
    cout << "Input Gender   : ";cin >> gender;
    cout << "Input C        : ";cin >> C;
    cout << "Input C++      : ";cin >> CPP;
    cout << "Input C#       : ";cin >> CS;
    cout << "Input JS       : ";cin >> JavaScript;
    cout << "Input Python   : ";cin >> Python;
    cout << "Input PHP      : ";cin >> PHP;
    cout << "Input Network  : ";cin >> Network;
    total = (C+CPP+CS+JavaScript+Python+PHP+Network)/7;
    // condition grad
    grade = (total >= 90 && total <= 100)? 'A':(total >= 80 && total < 90)? 'B'
            :(total >= 70 && total < 80)? 'C': (total >= 60 && total < 70)? 'D'
            :(total >= 50 && total < 60)? 'E': 'F';
    // Header
    cout << endl << setw(10) << "ID" << setw(10) << "Name" << setw(10) << "Gender"
         << setw(10) << "C" << setw(10) << "C++" << setw(10) << "C#" << setw(10) << "JS"
         << setw(10) << "Python" << setw(10) << "PHP" << setw(10) << "Network"
         << setw(10) << "Total" << setw(10) << "Grad\n" << endl;
    // Output
    cout << endl << setw(10) << id << setw(10) <<name << setw(10) << gender
         << setw(10) << C << setw(10) << CPP << setw(10) << CS << setw(10) << JavaScript
         << setw(10) << Python << setw(10) << PHP << setw(10) << Network
         << setw(10) << total << setw(10) << grade << endl;
    return 0;
}
//  student

/*
    int id;
    char grade;
    char *name;
    string gender;
    float  C,C++,C#,JavaScript,Python,PHP,Network;
    double total;
*/


/*
(condition)? true : false;
----
if(condition){ (true)
    stament
}else{ (false)
    stament
}
----

(condition)? statment(true):
(condition)? statment(true):
(condition)? statment(true):
statment(false);

Ex: input n = 200
@ (n = 1 -> 99)
(n>=1 && n<100)? statment1:
@ (n = 100 -> 199)
(n>=100 && n<200)? statment2:
@ (n = 200 -> 299)
(n>=200 && n<300)? statment3:
@ (n = 300 -> ....)
statment4;

----
if(condition){ (true)
    statment
}else if(condition){ (true)
    statment
}else if(condition){
    statment
}else {  (false)
    statment
}

*/


/*
    Home Work

@   Product

    int code,qty;
    char * name;
    float price,tax,discount,total;
    double payment;
    input(1%->10%) tax = %;

    total = (qty*price) + (qty*price*tax)/100;

    discount(1$->100$) = 1%
    discount(100$->500$) = 3%
    discount(500$->1000$) = 5%
    discount(1000$->2000$) = 7%
    discount(2000$ -> ...) = 10%

    payment = total - (total*dicount)/100;


*/

