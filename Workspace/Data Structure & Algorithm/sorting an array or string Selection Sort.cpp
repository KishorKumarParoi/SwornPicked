#include<bits/stdc++.h>
using namespace std;
#define MAX_LEN 100
void selectionSort(char arr[][MAX_LEN],int n)
{
    int i,j,min_index;
    char minStr[MAX_LEN];
    for(i=0;i<n-1;i++)
    {
        int min_index = i;
        strcpy(minStr,arr[i]);
        for(j=i+1;j<n;j++)
        {
            if(strcmp(minStr,arr[j])>0)
            {
                strcpy(minStr,arr[j]);
                min_index = j;
            }
        }
        if(min_index!=i)
        {
            char temp[MAX_LEN];
            strcpy(temp,arr[i]);
            strcpy(arr[i],arr[min_index]);
            strcpy(arr[min_index],temp);
        }
    }

}
int main()
{
    char arr[][MAX_LEN]={"GeeksforGeeks","Practice.GeeksforGeeks", "GeeksQuiz" };
    int n=sizeof(arr)/sizeof(arr[0]);
    int i;
    pritf("Given Array is \n");
    for(i=0;i<n;i++)
        printf("%d:   %s\n",i,arr[i]);
    selectionSort(arr,n);
    printf("Sorted Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d :  %s \n",i,arr[i]);
    }
    return 0;
}
