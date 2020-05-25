#include<bits/stdc++.h>
using namespace std;
int main()
{
    double base,num;
    while(scanf("%lf\n%\lf",&base,&num)!=EOF)
    {
        double i=(1.0)/base;
        //printf("%lf\n",i);
        double res = pow(num,i);
        printf("%.0lf\n",res);
    }
  return 0;
}
