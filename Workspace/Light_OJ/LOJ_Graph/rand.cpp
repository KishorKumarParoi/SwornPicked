#include<bits/stdc++.h>
#include<time.h>

using namespace std;

int main()
{
    int arr[500];
    ofstream myfile;
    myfile.open("input.txt");
    for(int i=0;i<500;i++)
    {
        arr[i]=rand()%999;
    }
    for(int i=0;i<500;i++)
    {
        myfile<<arr[i]<<endl;
    }
    myfile.close();
    return 0;
}
