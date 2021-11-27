#include<stdio.h>

int count = 0;
bool exists = false;

void checkCount(){
	if(count > 0){
		exists=true;
	}	
}
