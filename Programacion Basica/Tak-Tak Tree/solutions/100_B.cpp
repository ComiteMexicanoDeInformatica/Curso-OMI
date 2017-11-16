#include <bits/stdc++.h>
using namespace std;
int n,r;
	int main (){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cin>>n;
		while(n%11!=1){
			n*=2;
			r++;
		}
		cout <<r<<" "<<n<<"\n";
	}
