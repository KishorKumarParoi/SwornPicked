//|[a:b:|]
//
#include<bits/stdc++.h>
using namespace std;
int main()
{


    return 0;
}
/*Remove the prefix of the string until the position of leftmost '[' character. If there is no such character, print -1;
Remove the prefix of the string until the position of leftmost ':' character. If there is no such character, print -1;
Reverse the string;
Remove the prefix of the string until the position of leftmost ']' character. If there is no such character, print -1;
Remove the prefix of the string until the position of leftmost ':' character. If there is no such character, print -1;
Print the number of '|' characters in the remaining string plus four.*/
/*/*input
|[a:b:|]


/*
#include <bits/stdc++.h>
using namespace std;
int n;
char st[1000006];
int getC(int s, char ch)
{
	for(int i = s; i<n; i++)
		if(st[i]==ch) return i;
	return -1;
}

int getCR(int s, char ch)
{
	for(int i = s; i>=0; i--)
		if(st[i]==ch) return i;
	return -1;
}
void ex()
{
	printf("-1\n");
	exit(0);
}
int main()
{
	scanf("%s", st);
	// cout << st << endl;
	n = strlen(st);
	int a = getC(0, '[');
	// cout << a  << endl;
	if(a == -1) ex();
	int b = getCR(n-1, ']');
	if(b==-1) ex();
	a = getC(a+1, ':');
	if(a == -1) ex();
	b = getCR(b-1, ':');
	if(b == -1) ex();
	if(a >= b) ex();
	int cnt = 4;
	for(int i = a+1; i < b; i++)
		if(st[i]=='|') cnt++;
	printf("%d\n", cnt);
	return 0;
}
*/
