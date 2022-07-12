#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Wordset{
private:
	string s1,s2;
	vector<string> vlist;
public:
     Wordset(string a, string b){
	 s1=a;
	 s2=b;
	 }
public:
	int addmember(){
	vlist.push_back(s1);
	vlist.push_back(s2);
	return 0;
	}
	void display(){
	for(auto i: vlist){
	cout<<i<<endl;

	}
	cout<<"the size of vector is: "<<vlist.size()<<endl;
	}
	};
	int main(int argc, char* argv[]){
	Wordset w(argv[1],argv[2]);
	w.addmember();
	w.display();
	
	return 0;
	}
