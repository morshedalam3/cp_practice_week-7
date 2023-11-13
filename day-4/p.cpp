#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n,m;cin>>n>>m;
        m = m*6*6;
        if (n<=m)
        {
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        
    }
      
    return 0;
}