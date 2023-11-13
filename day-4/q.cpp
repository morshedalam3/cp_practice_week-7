#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;  cin>>t;
    while(t--){
        int n; cin>>n;
        set<int, greater<int> > s ;
        for(int i =0; i<n; i++){
            int a;  cin>>a;
            s.insert(a);
        }
        auto it = s.begin();
        auto it2 = it;
        auto i = ++it;
        int sum = *it2 +  *i;
        cout<<sum<<endl;
    }
    return 0;
}