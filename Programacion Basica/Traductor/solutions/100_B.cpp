#include <bits/stdc++.h>
using namespace std;
int d,w;
map<int,bool>ist;
map<int,int>memo;
	int main (){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cin>>d>>w;
		while(d--){
			int a,b;
			cin>>a>>b;
			memo[a]=b;
			ist[a]=true;
		}
		while(w--){
			int x;
			cin>>x;
			if(!ist[x]){
				cout << "C?\n";
			}
			else cout << memo[x]<<"\n";
		}
	}
