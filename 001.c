#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void splitter(){
}



int main(){

	int b, d, sum, cl;
	printf("Enter b and d with commas between them: and terminate with a '.': ");
	scanf("%d,%d.", &b,&d);
	int ln1[]={b,d};
	printf("Enter orange sizes (number must equal n. Seperate with awith a comma:");
	char ln2[100];
	scanf("%s", ln2);
	printf("b: %d | d:%d\n", ln1[0],ln1[1]);
	printf("%s \n", ln2);


}

