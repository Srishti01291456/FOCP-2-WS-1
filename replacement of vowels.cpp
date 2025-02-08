#include<iostream>
#include<string.h>
using namespace std;
int main(){
   string s;
   int i;
   cout<<"Provide the string:"<<endl;
   getline(cin,s);
   for(i=0;i<s.length();i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    {
        s[i]='*';
        
    }
   }
  cout<<s<<endl;
}