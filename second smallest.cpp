#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<endl<<min<<endl;
    int min2=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min2=min;
            min=arr[i];
        }
        else if(arr[i]<min2&&arr[i]!=min)
        {
            min2=arr[i];
        }
    }
    cout<<"The 2nd smallest element is= "<<min2<<endl;
}