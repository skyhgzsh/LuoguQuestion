#include<iostream>
using namespace std;
int _more(int a,int b)
{
	return (a<b?b:a);
}
int _less(int a,int b)
{
	return (a>b?b:a);
}
int main()
{
    int power;
    double ans[4];
    cin>>power;
    ans[1]=_less(power,150);
    ans[2]=_less(_more(power-150,0),250);
    ans[3]=_more(power-400,0);
    ans[0]=(int)((ans[1]*0.4463+ans[2]*0.4663+ans[3]*0.5663)*100+5);
    
	cout<<((int)(ans[0]/10.0))/10.0;
    return 0;
}
