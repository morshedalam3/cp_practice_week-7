#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;cin>>n>>s;
    vector<int>a(n);
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    
    int i = 0, j = 0,sum = 0;
    int count = 0;
    while (j<n)
    {   sum+=a[j];
        while (sum>s)
        {
            sum-=a[i];
            i++;
        }
        if (sum == s)
        {
            count++;
        }
        
        j++;
    }
    cout<<count<<endl;
    return 0;
}