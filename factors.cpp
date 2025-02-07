#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(n==2||n==3)
    {
    cout<<"Prime"<<endl;
    }
    else if(n%2==0||n%3==0)
    {cout<<"Non prime"<<endl;
    for(int i=1;i<=n;++i)
    if(n%i==0)
    cout<<i<<" ";}
    else
    {cout<<"Prime"<<endl;}
    return 0;
}