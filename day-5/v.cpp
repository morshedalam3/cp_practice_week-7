#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll x;
	    cin>>x;
	    ll con=pow(10,6);
	    if(x==1)
	    cout<<-1<<endl;
	    else if(x==pow(10,12))
	    {
	        cout<<con-1<<" "<<(con)<<" "<<(con)<<endl;
	    }
	    else if(x>=con)
	    {
	        ll a=x%(con);
	        ll b=x/(con);
	        if(a==0)
	        {
	            con=con-1;
	            a=x%con;
	            b=x/con;
	        }
	        cout<<(con)<<" "<<b<<" "<<a<<endl;
	    }
	    else
	    cout<<(x-1)<<" "<<1<<" "<<1<<endl; 
	}
	return 0;
}