#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    long long int n,k,i,m,t;
    scanf("%lld",&t);
    while(t--)
    {
        cin>>n>>a;

        if(n==2)
        {
            if(a[0]<a[1])
            {
                printf("YES\n2\n");
                cout<<a[0]<<" "<<a[1]<<endl;
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("YES\n2\n");
            cout<<a[0]<<" ";
            for(i=1;i<n;i++)
                cout<<a[i];
            cout<<endl;
        }


    }
    return 0;
}
/*

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int q;
	scanf("%d", &q);
	while(q--){
		int n;
		string s;
		cin >> n >> s;
		if ( n == 2 ) {
			if ( s[0] < s[1] ) {
				printf("YES\n2\n");
				cout << s[0] << " " << s[1] << endl;
			}
			else{
				printf("NO\n");
			}
		}
		else{
			printf("YES\n2\n");
			cout << s[0] << " ";
			for ( int i = 1; i < n; i++ ) cout<<s[i];
			cout << endl;
		}
	}
	return 0;
}*/
