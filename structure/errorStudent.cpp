#include"head.h"
typedef struct Worker{
	int id;
	string name;
	struct Money{
		float salary,rate,hour;
		double income;
	}obj;
}Object;
void Header();
void Input(Object *wk,int index);
void Display(Object *wk,int index);
int SearchID(Object *wk,int param,int n);
int SearchName(Object *wk,char* param,int n);
int main(){
	system("cls");
	Object *wk;
	Object arr[10];
	int op,n,opn,sid;
	char sname[20];
	wk = (Object *)malloc(n*sizeof(*wk));
	//wk = new Object[10];
	if(wk == NULL){
		cout << "Create Location Error..!" << endl;
		exit(0);
	}
	do{
		cout << endl << "============|MENU|=============" << endl;
		cout << " 1. Input" << endl;
		cout << " 2. Output" << endl;
		cout << " 3. Search" << endl;
		cout << " 4. Insert" << endl;
		cout << " 5. Sort" << endl;
		cout << " 6. Exits" << endl;
		cout << "Please Select One Option : ";cin >> op;
		if(op == 1){
			cout << endl << "Input Number Of Worker : ";cin >> n;
			for(int i =0;i <n;i++){
				//Input(arr,i);
				Input(wk,i);
			}
		}
		if(op == 2){
			Header();
			for(int i =0;i <n;i++){
				//Display(arr,i);
				Display(wk,i);
			}
		}
		if(op == 3){
			do{
				cout << endl << "=============| MENU |=============" << endl;
				cout << " 1. Search By ID" << endl;
				cout << " 2. Search BY Name" << endl;
				cout << " 3. Exit" << endl;
				cout << "Please Select One Option : ";
				cin >> opn;
				if(opn == 1){
					cout << endl << "Input Search BY ID : ";cin >> sid;
					int index = SearchID(wk,sid,n);
					if(index == -1){
						cout << endl << "Search Is Found..!" << endl;
					}else{
						Header();
						Display(wk,index);
						cout << endl << "Search BY ID Is Successful..!" << endl;
					}
				}
				if(op == 2){
					cout << endl << "Input Search BY Name : ";cin >> sname;
					int index = SearchName(wk,sname,n);
					if(index == -1){
						cout << endl << "Search Is Found..!" << endl;
					}else{
						Header();
						Display(wk,index);
						cout << endl << "Search BY Name Is Successful..!" << endl;
					}
				}
			}while(opn != 3);
		}
	}while(op != 6);
	free(wk);
	return 0;
}
void Header(){
	cout << endl << "ID" << setw(10) << "Name" << setw(10) << "Salary"
		 << setw(10) << "Rate" << setw(10) << "Hour"
		 << setw(10) << "Income" << endl;
}
void Input(Object *wk,int index){
	cout << endl << "Input ID		: ";cin >> (wk+index)->id;
	cout << "Input Name		: ";cin.ignore();getline(cin, (wk+index)->name);
	cout << "Inout Salary		: ";cin >> (wk+index)->obj.salary;
	cout << "Input Rate		: ";cin >> (wk+index)->obj.rate;
	cout << "Input Hour		: ";cin >> (wk+index)->obj.hour;
	(wk+index)->obj.income = ((wk+index)->obj.salary + ((wk+index)->obj.rate
								* (wk+index)->obj.hour));
}
void Display(Object *wk,int index){
	cout << (wk+index)->id << setw (10) << (wk+index)->name
		 << setw(9) << (wk+index)->obj.salary << "$" << setw(10) << (wk+index)->obj.rate
		 << setw(10) << (wk+index)->obj.hour << setw(9) << (wk+index)->obj.income << "$"
		 << endl;
}
int SearchID(Object *wk,int param,int n){
	int index = -1;
	for(int i =0;i <n;i++){
		if(param == (wk+i)->id){
			index = i;
		}
	}
	return index;
}
int SearchName(Object *wk,char* param,int n){
	int index = -1;
	for(int i = 0;i <n;i++){
		if(param == (wk+i)->name){
			index = i;
		}
	}
	return index;
}
