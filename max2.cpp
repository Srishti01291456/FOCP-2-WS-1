#include<iostream>
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
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<endl<<max<<endl;
    int max2=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max2 && arr[i]<max)
        {
            max2=arr[i];
        }
    }
    cout<<max2<<endl;
    return 0;
}