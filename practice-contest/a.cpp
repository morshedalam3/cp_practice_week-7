#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
	    int bob[3], alice[3];
	    
	    for(int i = 0; i < 3; i++) cin >> bob[i];
	    
	    for(int i = 0; i < 3; i++) cin >> alice[i];
	    
	    sort(bob, bob + 3,greater<int>());
	    sort(alice, alice + 3, greater<int>());
	    int as = 0, bs = 0;
	    
	    for(int i = 0; i < 3; i++){
	        as = as*10 + alice[i];
	        bs = bs*10 + bob[i];
	    }
	    
	    if(as == bs) cout<<"Tie"<<endl;
	    else if(as > bs) cout<<"Bob"<<endl;
	    else cout<<"Alice"<<endl;
	    
	    
	}
	
	return 0;
}