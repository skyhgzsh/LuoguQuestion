#include<iostream>
using namespace std;
int main() 
{
	int d,t,arr[8]={0},big=0;
	for(int i=1;i<8;i++)
	{
		cin>>d>>t;
		arr[i]=d+t;
		if(arr[i]>arr[big]&&arr[i]>8)
		{
			big = i;
		}
	}
	cout<<big;
    return 0;
}
