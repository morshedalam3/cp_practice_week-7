#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    vector<int> a(n);
	    for(auto &i: a) cin >>i;
	    sort(a.begin(), a.end());
	    bool flag = false;
	    for(int i=0; i<n-2; i++){
	        for(int j=i+1; j<n-1; j++){
	            for(int k=j+1; k<n; k++){
	                if(a[j] - a[i] == a[k] - a[j]){
	                    flag = true;
	                    break;
	                }         
	            }
	            if(flag) break;
	        }
	        if(flag) break;
	    }
	    if(!flag) cout <<"YES" <<endl;
	    else cout <<"NO" <<endl;
	}
	return 0;
}