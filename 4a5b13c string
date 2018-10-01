#include <iostream>

using namespace std;

int main() {
	char  a[] =  "4a5b13c";
	int i,j,prev = 0;
	for(i =0 ; i<sizeof(a); i++) {
	    if(a[i] <= 57 && a[i] >= 48){
	        prev = prev *10 + (a[i] - 48);
	        
	    }
	    else{
	        for(j =0; j<prev ; j++){
	            cout<<a[i];
	        }
	        prev = 0;
	    }
   
	}
}
