#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
  string str = "I Love Bangladesh";
  stack<char> stack1;

  for (int i = 0; i<str[i]; i++)
  {
    stack1.push(str[i]);
  }
  str.clear();

  while (!stack1.empty())
  {
    str += stack1.top();
    stack1.pop();
  }

  cout << str;
}

/*void shiftbyk(char s[],char shifteds[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        int idx = (i+k)%n;
        shifteds[idx]=s[i];
    }
    shifteds[N] = '\0';
}
*/
