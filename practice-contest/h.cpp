#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,cpy;
        cin>>s;
        bool arr[26]={0},isFound=0;
        if(n%3==1)
        {
            cout<<"YES\n";
            continue;
        }
        else if(n%3==2)
        {
            for(int i=0;i<n;i++)
            {
                if(!(i%3))
                {
                    arr[s[i]-'a']=1;
                    continue;
                }
                if(i%3==1 && arr[s[i]-'a'])
                {
                    isFound=1;
                    break;
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(!(i%3))
                {
                    arr[s[i]-'a']=1;
                    continue;
                }
                if(i%3==2 && arr[s[i]-'a'])
                {
                    isFound=1;
                    break;
                }
            }
        }
        if(isFound)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}