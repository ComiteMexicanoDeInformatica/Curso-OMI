#include "Bubble.h"

// Main
//	int pregunta(int x)
//	void cambia(int x)

int inicio(int n) {
	int i=1, ban=1;
	while(i<n && ban){
        ban=0;
        for(int j=1;j<n-i;j++){
            if(pregunta(j-1)>pregunta(j)){
                cambia(j-1);
                ban=1;
            }
        }
	}
	return 0;
}
