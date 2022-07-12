#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	map<int,string> mp;
	char ch;
	int no;
	string name;
	do
	{
		cout<<"\n Enter Roll No:";
		cin>>no;
		cin.get();
		cout<<"\n Enter name:";
		getline(cin,name);
		mp[no]=name;
		cout<<"\n do you want to  continue (y or n):";
		cin>>ch;
		}
		while(ch!='n');
		cout<<"\n Values in the map";
		map<int,string>::iterator it=mp.begin();
		while(it != mp.end())
		{
		cout<<"\n RNO="<<it->first<<"\t"<<"Name="<<it->second;
		it++;
		}
	cout<<"\n Enter roll number whose name is to be found"<<endl;
	cin>>no;
	
	if(mp.count(no))
	{
	name=mp[no];
	cout<<"\n name of student:"<<name<<endl;
	}
	else
	{
	cout<<"\n Invalid no"<<endl;
	}
	}
