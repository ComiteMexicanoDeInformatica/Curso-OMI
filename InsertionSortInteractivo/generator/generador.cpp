#include <algorithm>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <random>
#define MAX_NUM ((long long)1<<31)-1

using namespace std;

int main()
{
	random_device rd;
	mt19937 gen(rd());
	/**Ciclo para generar los casos en archivos .in**/
	int tam[5]={20,100,200,300,400};
	int t,k;
	for(int i=0;i<5;i++)
		{
		uniform_int_distribution<> dis( (i ? tam[i-1]+1  : 1 ) , tam[i]);
		k=(i==4?8:10); //número de casos 
		for(int j=0;j<k;j++)
			{
		        ofstream in;
		        stringstream ss;
		        ss << i*10+j+1;
		        string str = ss.str();
        	        in.open(str+".in");
        	        /** inicia tu codigo para generar el caso**/
			uniform_int_distribution<> dis2(0 , MAX_NUM); //0 <= A[i] <= 2^31 -1
			t=dis(gen);
			in<<t<<endl;
			for(int x=0;x<t;x++)
				in<<dis2(gen)<<" ";
			in<<endl;
			/**termina tu código para generar el caso**/        	        
			in.close();
			}
		}
	//Casos especiales
	uniform_int_distribution<> dis2(0 , MAX_NUM); //0 <= A[i] <= 2^31 -1
	t=400;
	int napadas[t];
	for(int x=0;x<t;x++)
		napadas[x]=dis2(gen);
	sort(napadas,napadas+t);
	ofstream in49,in50;
	stringstream ss49,ss50;
	ss49 << 49;
	ss50 << 50;
	string str49 = ss49.str(),str50=ss50.str();
	in49.open(str49+".in");
	in50.open(str50+".in");
	in49<<t<<endl;
	in50<<t<<endl;
	for(int x=0;x<t;x++)
		{
		in49<<napadas[x]<<" ";
		in50<<napadas[t-x-1]<<" ";
		}
	in49<<endl;
	in50<<endl;
	in49.close();
	in50.close();
	return 0;
}

