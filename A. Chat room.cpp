
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1="hello";
    cin>>s;

    int c=0,l=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s1[c])
        {
            c++;
            l++;
        }

    }
      if(l==5)
      {
          cout<<"YES"<<endl;
      }
      else
        cout <<"NO"<<endl;
    return 0;
}
