#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	char destination1[100]="Paris";
	char destination2[100]="Barcelone";
	int destinationChoice=0;
	
	
	printf ("\nQuelle destination veux tu choisir ? 1)%s et 2)%s\n",destination1,destination2);
	
	for (int i=0; i<3; i++){
		
	scanf("%d",&destinationChoice);
	
		if (destinationChoice==1){
			printf( "Vous avez atteint %s", destination1);
		}
		
		else if ( destinationChoice==2){
		printf( "Vous avez atteint %s", destination2);
		}
			
		};
		
		return 0;
	}
	
	
