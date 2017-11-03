#include<stdio.h>
int main(){
	int vector[10], i, mayor=0; 
	for(i=0;i<=9;i++){
		scanf("%d", &vector[i]);
		if (vector[i]>mayor){
			mayor=vector[i];
		}
		
	}
		printf("el numer mayor es: %d", mayor );
	return(0);
}
