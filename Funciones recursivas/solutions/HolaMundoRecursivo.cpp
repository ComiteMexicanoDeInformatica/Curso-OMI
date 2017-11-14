#include<iostream>
void HolaMundo(int n){
        if(n<1) return;
        std::cout<<"Hola Mundo!"<<std::endl;
        HolaMundo(n-1);

}

int main(){
        int n;
        std::cin>>n;
        HolaMundo(n);
}
