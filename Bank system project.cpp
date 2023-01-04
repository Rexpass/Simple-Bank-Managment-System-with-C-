#include<iostream>
#include<windows.h>
using namespace std;
void showMenu(){
	system("Color B5");
	cout<<"\n\t|__ ****Welcome To Dashen Bank**** __|"<<endl;
	cout<<"\n\t    |__**Always One Step Ahead**__|"<<endl;
	cout<<"\n\t1 . Create Account"<<endl;
	cout<<"\n\t2 . View Account"<<endl;
	cout<<"\n\t3 . Check Balance"<<endl;
	cout<<"\n\t4 . Deposit"<<endl;
	cout<<"\n\t5 . Withdraw"<<endl;
	cout<<"\n\t6 . Exchange Information"<<endl;
	cout<<"\n\t7 . About Us"<<endl;
	cout<<"\n\t8 . Exit"<<endl;
    
}
struct addr{
	char city[20];
};
struct user{
	double balance;
	char fname[20];
	char lname[20];
	addr address;
};
user holder;
int main(){
	int option,acc_no,phone_no;
	double acctype,withdrawamount,depositamount;
	do{
		showMenu();
		cout<<"\n choose an option:";
		cin>>option;
		system("cls");
		switch(option){
			case 1:cout<<"\n\t Create Account"<<endl<<endl;
	        cout<<"Enter First Name:";
	        cin>>holder.fname;
	        cout<<"Enter last Name:";
	        cin>>holder.lname;
	        cout<<"Enter Account Number:"; 
	        cin>>acc_no;
	        cout<<"Enter Phone Number:"; 
	        cin>>phone_no;
        	cout<<"Enter City:";
	        cin>>holder.address.city;
        	cout<<"Enter Amount to Initialize:";
        	cin>>holder.balance;
        	cout<<"Congratulation! Account Created Successfully!"<<endl;
			break;
			case 2:cout<<"\n\t View Account"<<endl;
			cout<<"First Name:"<<holder.fname<<endl;
			cout<<"Last Name:"<<holder.lname<<endl;
			cout<<"Account Number:"<<acc_no<<endl;
	        cout<<"Phone Number:"<<phone_no<<endl;
			cout<<"City:"<<holder.address.city<<endl;
			cout<<"Initialized Balance:"<<holder.balance<<endl;
			break;
			case 3:cout<<"\n\t Check Balance"<<endl<<endl;
			cout<<"Your Current Balance is:"<<holder.balance<<"$"<<endl;
			break;
			case 4:cout<<"\n\t Deposit"<<endl<<endl;
			cout<<"Enter Deposit Amount:";
			cin>>depositamount;
			holder.balance=(depositamount+holder.balance);
			cout<<"Amount Deposited!"<<"Your Current Balance is:"<<holder.balance<<"$"<<endl;
			break;
			case 5:cout<<"\n\t Withdrawn"<<endl<<endl;
			cout<<"Enter Withdraw Amount:";
			cin>>withdrawamount;
			if(withdrawamount<=holder.balance){
				 holder.balance-=withdrawamount;
				 cout<<"Amount Withdrawn!"<<"Your Current Balance is:"<<holder.balance<<endl; 
			}
			else{
				cout<<"Not Enough Money"<<endl;
			}
			break;
			case 6:cout<<"\n\t Exchange Information"<<endl;
            cout<<"\n\t 1 AMERICAN DOLLAR = 51.3301 ETHIOPIAN BIRR "<<endl;
            cout<<"\n\t 1 POUND STERLING = 66.5302 ETHIOPIAN BIRR "<<endl;
            cout<<"\n\t 1 EURO = 58.7319 ETHIOPIAN BIRR "<<endl;
            break;
            case 7:cout<<"\n\t About Us"<<endl;
            cout<<"\n\t Welcome To Dashen Bank Online Banking System.Thanks For Banking With Us!"<<endl;
        	cout<<"\n\t Copyright 2022.Developed By Robel Effa "<<endl;
        	break;
		}
	}
	while(option!=8);
	return 0;
}
