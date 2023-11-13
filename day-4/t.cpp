#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,a,c;
	cin>>t;
	while(t--){
	    cin>>a;
	    if(a%10==0){
	        cout<<(100-a)<<endl;
	    }
	    else{
	        int c=(a+5)/10*10;
	        cout<<(100-c)<<endl;
	    }
	    
	}
	return 0;
}