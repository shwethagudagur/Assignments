#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee{
public:
	int empcode;
	string name;
	float salary;

	Employee(int a, string b, float c){
	empcode=a;
	name=b;
	salary=c;
	}
	void display(){
	cout<<"Emp code:"<<empcode<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"salary:"<<salary<<endl;
	}
	};
	fstream file;
	void appendToFile(){
	Employee e(123,"shwetha",10000);
	file.open("emp.dat",ios::out);
	if(!file){
	cout<<"error in creating file\n";
	exit(0);
	}
	file.write(reinterpret_cast<char *>(&e),sizeof(e));
	file.close();
	cout<<"Record added"<<endl;
	}
	
	void displayall(){
	Employee e(123,"shwetha",1000);
	file.open("emp.dat",ios::in);
	if(!file){
	cout<<"File not opened"<<endl;
	exit(0);
	}	
	file.read(reinterpret_cast<char *>(&e),sizeof(e));
	cout<<"employee details\n";
	e.display();
	file.close();
}

	int main(){

	appendToFile();
	displayall();

	}
