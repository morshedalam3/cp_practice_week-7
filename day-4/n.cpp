#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        double n,m;cin>>n>>m;
        double discount = (0.1) *n;
         n = n-discount;
        if (n>m)
        {
            cout<<"DINING"<<endl;
        }else if (n==m)
        {
            cout<<"EITHER"<<endl;
        }else{
            cout<<"ONLINE"<<endl;
        }
    }
      
    return 0;
}