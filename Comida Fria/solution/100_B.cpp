#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll ma,mi,p,s;
	int main (){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cin>>n;
		mi=(1LL<<50);
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			s+=x;
			ma=max(ma,x);
			mi=min(mi,x);
		}
		cout << mi<<" "<<ma<<" "<<(s/n)<<"\n";
	}
