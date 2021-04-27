#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int i=0;
char* splitter(int n){
	char ln1[2*n];
	char ln1s[2*n];
	fgetc(stdin);
	fgets(ln1, 2*n, stdin);
	printf("ln1: %s\n", ln1);
	printf("i=%d\n", i);
	char *ln2[n];
	strcpy(ln1s, ln1);
	char *pr=strtok(ln1s, ",");
  while (pr != NULL){
		printf("i-b=%d\n",i);
		printf("pr-b:%s\n",pr);
		ln2[i] = pr;
		pr=strtok(NULL, ",");
		printf("i-a=%d\n",i);
		printf("pr-a:%s\n",pr);
		printf("%s\n==============\n",ln2[i]);
		i++;

	}
	int j=i;
	//printf("i=%d\n", i);
	for (i=0; i<j; i++){
		printf("ln1: %s\n", ln1);
		printf("ln2: %s\n\n", ln2[i]);
	}
	return *ln2;
}



int main(){

	int n, b, d, sum, cl;
	printf("Enter n, b and d with commas between them: and terminate with a '.': ");
	scanf("%d,%d,%d.", &n,&b,&d);
	printf("n: %d | b: %d | d: %d\n", n,b,d); //*****
	printf("Enter orange sizes (Must be less than 10). Seperate with a comma, don't put a '.':\n");
	splitter(n);
	
	return 0;
	/*for(i=0, i<sizeof(ln2)+1, i++){
	//printf("Final %d: %s\n", i+1, ln2[i])
	}*/
  
}

