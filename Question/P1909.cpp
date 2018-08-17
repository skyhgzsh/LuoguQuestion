#include<iostream>
using namespace std;
int main() 
{
	int arr[6]={0},n=0,ans=0,a,b,c;
	cin>>n;
	for(int i=0;i<6;i++)
	{
		cin>>arr[i];
	}
	a=((n-1)/arr[0]+1)*arr[1];
	b=((n-1)/arr[2]+1)*arr[3];
	c=((n-1)/arr[4]+1)*arr[5];
	ans=(c>(a>b?b:a)?(a>b?b:a):c);
	cout<<ans;
	return 0;
}
