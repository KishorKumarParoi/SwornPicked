#include<sstream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

  //int to string
   stringstream ss;
   int a=1234;
   ss<<a;
   string s1;
   ss>>s1;
   cout<<s1<<endl;

   //string to int
   ss.clear();
   string s = "1234";
   ss<<s;
   int num;
   ss>>num;
   cout<<num<<endl;

   //char* to string
   ss.clear();
   char somchars[10]="ruet cse";
   ss<<somchars;
   string somstrings;
   ss>>somstrings;
   cout<<somstrings<<endl;

  //string to char*
  ss.clear();
  somstrings  = "ruet cse";
  ss<<somstrings ;
  ss>>somchars;
  cout<<somchars<<endl;

  return 0;
}
