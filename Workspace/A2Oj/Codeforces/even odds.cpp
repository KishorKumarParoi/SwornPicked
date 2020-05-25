#import"iostream"
int main()
{
    long long n,k;
    std::cin>>n>>k;
    n=(n+1)/2;
    std::cout<<(k>n?2*(k-n):2*k-1);

}
