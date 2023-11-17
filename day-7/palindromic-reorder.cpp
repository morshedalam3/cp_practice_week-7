#include<bits/stdc++.h>
#define ll long long
#define ld long double
//#define M_PI (2*acos(0))
#define MAX_N 10001
#define MOD 1000000007
#define apo(a,b) sqrtl( powl(a.x-b.x,2) + powl(a.y-b.y,2) )
#define ldeq(a,b) ( fabsl(a - b) < 0.00000000007 )
#define rep(a,b) for(int i=a; i<=b; i++)
#define repv(a,b,i) for(int i=a; i<=b; i++)
#define mmod(a,b) ( (a >= 0) ? ((a%b)%b) : ( ( ( a + ( ((abs(a)+b)/b) * b ) ) % b ) % b ) )
#define int ll
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
#define PB push_back
using namespace std;
 
int occ[26];
 
void doit(){
 
	string x;
	cin >> x;
 
	rep(0,S(x)-1){
		occ[ x[i] - 'A' ]++;
	}
 
	int odds = 0;
	int oddi = -1;
	rep(0,25){
		if(occ[i]%2){
			odds++;
			oddi = i;
		}
	}
 
	if(odds>1){
		cout << "NO SOLUTION" << endl;
		return;
	}
 
	// print left part
	rep(0,25){
		if(occ[i]%2 == 0){
			int half = occ[i]/2;
			occ[i] -= half;
			while(half--){
				cout << (char)('A' + i);
			}
		}	
	}
 
	// print mid
	if(oddi!=-1){
		while( occ[oddi]-- ){
			cout << (char)('A'+oddi);
		}
	}
 
	// print right part
	for(int i=25; i>=0; i--){
		while(occ[i] > 0){
			occ[i]--;
			cout << (char)( 'A' + i );
		}
	}
	
	cout << endl;
	
}
 
#undef int
int main(){
 
	int t = 1;
	while(t--){
		doit();
	}
 
}
