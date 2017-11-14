#include <bits/stdc++.h>
using namespace std;
int n,c;
	int main (){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cin>>n>>c;
		int s=0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			s+=x;
			if(s>=c){
				cout << (i+1)<<"\n";
				return 0;
			}
		}
	}
