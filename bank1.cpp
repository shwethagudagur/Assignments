  #include <iostream>
   #include <cstring>
   #include <string>
   using namespace std;
   class Bank{
   protected:
       string  name;
       int accountno;
       string accounttype;
      long balance;
  public:
      Bank(){}
      Bank(string n, int accno, string at, long ab)
      {
      name=n;
      accountno=accno;
      accounttype=at;
      balance=ab;
      }
 
      void Deposit()
      {
      long amt;
      cout<<"Enter Amount you want to deposit: "<<endl;
      cin>>amt;
      balance=balance + amt;
      cout<<"Balance After the Deposit: "<<balance<<endl;
      }
  };
      class Account: public Bank{
      public:
      Account(string n, int accno, string at, long ab):Bank(n,accno,at,ab){
      }
      void Withdraw()
      {
      long amt;
      cout<<"Enter amount you want to withdraw: "<<endl;
      cin>>amt;
      if(amt <= balance)
      balance=balance-amt;
      else
      cout<< "Insufficient balance"<<endl;
      cout<<"Balance after the withdraw: "<<balance<<endl;
      }
      void Display()
      {
      cout<<"Coustmer name: "<<name<<endl;
      cout<<"Account no: "<<accountno<<endl;
      cout<<"Balance: "<<balance<<endl;
      cout<<"Account typr: "<<accounttype<<endl;
      }
  };
  int main()
  {
  Account b("shweta",34543,"savings",1000);
  b.Deposit();
  b.Withdraw();
  b.Display();
  return 0;
 }
