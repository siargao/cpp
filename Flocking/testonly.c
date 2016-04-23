#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>

int ResultofRandint, i, j;
float ResultofRandfloat;

//int RandInt(int x,int y);
//double RandFloat();

int RandInt(int x,int y) { 
	return rand()%(y-x+1)+x; 
}

double RandFloat() { 
	return (rand())/(RAND_MAX+1.0); 
}

int main(){
	
	srand(123);
	
	//printf("Result of RandInt %d\n",RandInt(5,5));
	printf("Result of RandInt %d\n",RandInt(3,5));
	printf("Result of RandInt %d\n",RandInt(1,1));
	printf("Result of RandInt %d\n",RandInt(5,3));
	printf("\n");
	printf("Result of RandFloat %f\n",RandFloat());
	printf("Result of RandFloat %f\n",RandFloat());
	
	
	
}	
	
