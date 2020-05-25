const int N = 1005;
vector<pair<int,int>>ans;
vector<int>g[N];
int main()
{
    int n , m , k;
    cin >> n >> m >> k;

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            int c;
            cin >> c;
            g[i].push_back(c);
        }
    }
    if(k == 0){
        cout << (m * (m - 1))/2 << "\n";
        for(int i = 1;i <= m;i++){
            for(int j = i + 1;j <= m;j++){
                cout << i << " " << j << "\n";
            }
        }
    }else{
        cout << (m * (m - 1))/2 << "\n";
        for(int i = 1;i <= m;i++){
            for(int j = i + 1;j <= m;j++){
                cout << m - i + 1 << " " << m - j + 1 << "\n";
            }
        }
    }

}
