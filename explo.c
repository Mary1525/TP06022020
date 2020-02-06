#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
	char choixDestination[100];
	char destination1[100]="Paris";
	char destination2[100]="Barcelone";
	int destinationChoice=0;
	
	
	printf ("\nQuelle destination veux tu choisir ? 1)%s et 2)%s\n",destination1,destination2);
	
	for (int i=0; i<100; i++){
		
	 scanf("%s",&choixDestination);
	
		if (strcmp(choixDestination, destination1) ==0) {
			printf( "Vous avez atteint %s", destination1);
		}
		
		else if (strcmp(choixDestination, destination2) ==0) {
		printf( "Vous avez atteint %s", destination2);
		}
			
		};
		
		return 0;
	}
	
	
	
