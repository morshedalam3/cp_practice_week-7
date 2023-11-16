
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)cin>>a[i];
	    sort(a,a+n);
        int j=0,c=0;
        vector<int> s;
        int x=0,y=n-1;
        while(x<y){
            s.push_back(a[x]);
            s.push_back(a[y]);
            x++;
            y--;
        }
        s.push_back(a[x]);
	    for(int i=1;i<n;i+=2,j++)b[i]=a[j];
	    for(int i=0;i<n;i+=2,j++)b[i]=a[j];
	    for(int i=1;i<n-1;i++){
	        if(b[i]<b[i-1] && b[i]<b[i+1])c++;
	    }
	    bool f=1;
	    for(int i=0;i<n-1;i++){
	        if(b[i]==b[i+1]){
	            f=0;
	            break;
	        }
	    }if(f){
	        for(int i=0;i<n;i++){
	            cout<<b[i]<<' ';
	        }cout<<endl;
	    }else{
	        bool f2=1;
	        for(int i=0;i<s.size()-1;i++){
	            if(s[i]==s[i+1]){
	                f2=0;
	                break;
	            }
	        }
	        if(f2){
	            for(auto it : s) cout<<it<<' ';
	            cout<<endl;
	        }else{
	            cout<<-1<<endl;
	        }
	    }
    }
}