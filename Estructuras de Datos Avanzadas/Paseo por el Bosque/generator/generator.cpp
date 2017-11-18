#include <bits/stdc++.h>
using namespace std;
	int main (){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		srand(time(NULL));
		freopen("1.in","w",stdout);
		int n=rand()%10000;
		for(int i=0;i<n;i++){
			cout << (rand()%100002)+1<<" ";
		}
		cout << "\n";
	}
