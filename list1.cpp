 1 #include <iostream>
  2 #include <string>
  3 #include <list>
  4 using namespace std;
  5 int main(int argc, char* argv[]){
  6     char ch;
  7     string str;
  8     int i;
  9     list<string> ll;
 10     list<string>::iterator itr=ll.begin();
 11     for(i=1;i<argc;i++){
      str=argv[i];
      ll.push_front(str);
 
      }
      itr=ll.begin();
      ll.unique();
      cout<<"List contents are...\n";
      while(itr != ll.end())
      {
          cout<<"\n"<<*itr++;
          }
          }