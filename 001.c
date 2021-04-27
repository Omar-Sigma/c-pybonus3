#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void splitter(){
}



int main(){

	int n, b, d, sum, cl;
	printf("Enter n, b, and d with commas between them: and terminate with a '.': ");
	scanf("%d,%d,%d.", &n,&b,&d);
	int ln1[]={n,b,d};
	printf("Enter orange sizes (number must equal n. Seperate with awith a comma:");
	char ln2[2*n+1];
	scanf("%s", ln2);
	printf("%d,%d,%d.\n\n", ln1[0],ln1[1],ln1[2]);
	printf("%s\n", ln2);


}

