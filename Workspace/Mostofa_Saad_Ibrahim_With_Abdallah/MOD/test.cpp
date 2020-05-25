#include <cstdio>
#include <string>
#include <iostream>
#define CONST 34943
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    string line;
    getline(cin, line);
    while(line != "#")
    {
        long long sum = 0;
        for(size_t t = 0; t < line.size(); ++t)
        {
            sum*=256;
            sum+=line[t];
            sum%=CONST;
        }

        // Leave room for the 2 byte CRC
        sum <<= 16;
        sum %= CONST;
        int hexa = (CONST - sum) % CONST;
        printf("%02X %02X\n", hexa / 256, hexa % 256);
        getline(cin, line);
    }
    return 0;
}
