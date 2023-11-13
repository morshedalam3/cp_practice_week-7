#include<bits/stdc++.h>
using namespace std;

 
int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    int n ;
	    cin>>n;
	    map<int,int> mp;
	    int mx = -1;
	    for(int i= 0;i<2*n;i++)
	    {
	        int x;
	        cin>>x;
	        mp[x]++;
	        mx = max(mx ,mp[x]);
	    }
	    cout<<mx<<endl;
	}
	
	return 0;
}



