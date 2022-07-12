#include<bits/stdc++.h>
using namespace std;
void isisogram(string str)
{
    int hash[123]={0},i;
    for(i=0;i<str.length();i++)
    {
        hash[str[i]]++;
        if(hash[str[i]]==2)
        {
            cout<<"False
";
            return;
        }
    }
    cout<<"True
";
   }
int main()
   {
       string str;
       cin>>str;
       isisogram(str);
   }