#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    map< string, int  > m;
    string goru,gadha;

    while( cin >> goru)
    {
        if( goru == "moro" )
            break;
        m[ goru ] ++;
        cout << goru <<" ase " << m[ goru ] << " ta :D " << endl;
    }
}
