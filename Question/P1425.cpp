#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<c-a-(d<b?1:0)<<" "<<d-b+(d<b?60:0);
    return 0;
}
