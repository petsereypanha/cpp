#include"head.h"
struct Book{
    int id;
    string name;
    float price;
};
int main(){
    system("clear");
    Book obj[10];
    int n,i;
    cout << "Input Element Of Product : ";
    cin >> n;
    for(i = 0;i < n; i++){
        cout << endl << "Input ID    : "; cin >> obj[i].id;
        cout << "Input Name  : "; cin >> obj[i].name;
        cout << "Input Price : "; cin >> obj[i].price;
    }
    cout << endl;
    for(i = 0;i < n; i++){
        cout << obj[i].id << "\t" << obj[i].name << "\t" << obj[i].price << endl;
    }
    return 0;
}



// Home Work

// struct worker{
//     id,name,gender,salary,hour,rate
// }
// function:
//     Input
//     Output
//     Search
//     ...
//     Add

// Space *{
//         Bonus:{
//             40 < hour , bonus = 10%(salary);
//             40 = hour , bonus = 0;
//             40 > hour , bous = -5%(salary);
//         }
//         Total: {
//             សរុបលុយទាំងអស់
//         }
//         Tax: {
//             Total > 3000$. tax = 20%(total)
//             Total > 1000$. tax = 10%
//             Total > 500$.  tax = 5%
//             Total > 200$.  tax = 3%
//             Total < 200$.  tax = 0;
//         }
//         Income: {
//             ចំណូលសរុប
//         }

//     }