#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,a,b,p,q;

    cin>>n>>a>>b>>p>>q;
    ll sum=0;
    ll lcm=a*b/__gcd(a,b);
    int n1=n/lcm;
    sum+=n1*max(p,q);
    int n2=n/a;
    int n3=n/b;
    sum+=(n2-n1)*p+(n3-n1)*q;
    cout<<sum;
    return 0;
}