#include<bits/stdc++.h>
using namespace std;

int main() {
int t=0;
cin>>t;
while(t--)
{
    int n=0;
    cin>>n;
    int addy=0,om=0,streak=0;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        if(arr1[i]!=0) {streak++;
        if(streak>om) {om=streak;}
        }
        else 
        {
          streak=0;
        }
    }
    streak=0;
for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
        if(arr2[i]!=0) {streak++;
        if(streak>addy) {addy=streak;}
        }
        else 
        {             streak=0;
        }
    }
    if(addy>om) cout<<"addy\n";
    else if(om>addy) cout<<"om\n";
    else cout<<"draw\n";
}
return 0;
}