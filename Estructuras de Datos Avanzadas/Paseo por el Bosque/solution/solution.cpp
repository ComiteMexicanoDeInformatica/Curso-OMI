#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005
int izq[MAX],der[MAX],tree[MAX],nodos=0;
int new_nodo(int n){
	tree[nodos]=n;
	izq[nodos]=-1;
	der[nodos]=-1;
	return nodos++;
}
void in(int nodo,int n){
	if(n<tree[nodo]){
		if(izq[nodo]==-1)izq[nodo]=new_nodo(n);
		else in(izq[nodo],n);
	}
	else {
		if(der[nodo]==-1)der[nodo]=new_nodo(n);
		else in(der[nodo],n);
	}
}
void view(int nodo){
	cout << tree[nodo] << " ";
}
void preorden(int nodo){
	if(nodo==-1)return;
	view(nodo);
	preorden(izq[nodo]);
	preorden(der[nodo]);
}
void inorden(int nodo){
	if(nodo==-1)return;
	inorden(izq[nodo]);
	view(nodo);
	inorden(der[nodo]);
}
void postorden(int nodo){
	if(nodo==-1)return;
	postorden(izq[nodo]);
	postorden(der[nodo]);
	view(nodo);
}
	int main (){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		int n,i,raiz;
		cin>>n;
		int v[n];
		for(i=0;i<n;i++){
			cin>>v[i];
		}
		for(i=0;i<n;i++){
			if(i==0)raiz=new_nodo(v[i]);
			else in(raiz,v[i]);
		}
		preorden(raiz);
		cout << "\n";
		inorden(raiz);
		cout << "\n";
		postorden(raiz);
	}
