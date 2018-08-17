#include<iostream>
using namespace std;
int main() 
{
	int arr[13]={0},money,mama;
	for(int i=1;i<=12;i++)
	{
		cin>>arr[i];
		money+=300;
		money-=arr[i];
		if(money<0&&arr[0]==0)
		{
			arr[0]=i;
		}
		mama+=(money)/100;
		money%=100;
	}
	if(arr[0]==0)
	{
		cout<<mama*120+money;
	}
	else
	{
		cout<<-arr[0];
	}
    return 0;
}
