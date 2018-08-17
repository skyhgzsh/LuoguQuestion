#include<iostream>
using namespace std;
int main()
{
    long m,n,i;
    cin>>m>>n;
    long ans=(m*n-m-n);
    if(m==1||n==1||m*n==6)
    {   
        ans=1;
    }
    cout<<ans;
    return 0;
}
