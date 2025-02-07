#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(n==2||n==3)
    cout<<"Prime"<<endl;
    else if(n%2==0||n%3==0)
    cout<<"Non prime"<<endl;
    else
    cout<<"Prime"<<endl;
    return 0;
}