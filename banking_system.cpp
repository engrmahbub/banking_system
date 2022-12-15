#include<iostream>
using namespace std;

class Account{

    string Acname;
    int Acnumber;
    double acbalance;

public:

 Account (string x, int y, double z){
 Acname=x;
 Acnumber=y;
 acbalance=z;

 cout<<"Account Name : "<<Acname<<endl;
 cout<<"Account Number : "<<Acnumber<<endl;
 cout<<"Initial Ac balance  ="<<acbalance<<endl;

 }

 ~Account(){
cout<<"object is deleted";
}





 void deposit(double amount){


   cout<< "deposit amount : "<<amount <<endl;
 if (amount>0){
    acbalance += amount;

    cout<<"Current balance after deposit: "<<acbalance<<endl;

 }
 }

 void withdraw(double amount){
  cout<< "withdrawn amount : "<<amount <<endl;

 if (amount>0 && amount <acbalance){
    acbalance -= amount;

    cout<<"Current balance after withdraw: "<<acbalance<<endl;

 }

 }

 void getBalance(){
 cout<<"Current Balance : "<<acbalance<<endl;

 }




};




int main(){
Account obj("mahbub", 1374546464536, 500);


obj.deposit(500);
obj.withdraw(200);

obj.getBalance();



 return 0;
}



