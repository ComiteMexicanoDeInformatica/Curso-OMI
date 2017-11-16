#include<iostream>
int main(){
        long long int nFrutas;
        long long int nLunas=0;
        std::cin>>nFrutas;
        while(nFrutas%11!=1){
                nLunas+=1;
                nFrutas*=2;
        }
        std::cout<<nLunas<<" "<<nFrutas<<std::endl;
}
