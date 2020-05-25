#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{

    string S;
    cin >> S;
    S[0] = toupper(S[0]);
    cout << S << endl;
    return 0;
}
