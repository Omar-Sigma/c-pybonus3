//----------------------------------------------//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int i=0;
//----------------------------------------------//

//Splitter Function//
//==================//

void splitter(int n, int *j, char* ln2f[]){
	char* ln2[n];
	char ln1[2*n];
	char ln1s[2*n];
	fgetc(stdin);
	fgets(ln1, 2*n, stdin);
	printf("ln1: %s\n", ln1);
	printf("i=%d\n", i);
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
	*j=i;
	//printf("i=%d\n", i);
	for (i=0; i<*j; i++){
		printf("ln1: %s\n", ln1);
		printf("ln2: %s\n\n", ln2[i]);
	}
	i=0;
	int szoa0=sizeof(ln2)/sizeof(ln2[0]);
	printf("\nsome elements of ln2: %s\n", ln2[2]);
	for (i=0; i<szoa0; i++){
		ln2f[i]=ln2[i];
		printf("Element: %s \n", ln2f[i]);
	}
	printf("Final: %s\n", ln2f[1]);
}

//Splitter: End//
//==================//

//----------------------------------------------//

//Discriminant Function//
//==================//

int Discriminant(int j, int n, int b, int d, int sum, char* ln2){
	int cl=0;
	int l=0;
	//First Level
	for (i=0; i<j; i++){
		//Second Level
		if (cl == 0){
			//Third Level
			
			if (1 <= n && n<= 100000 && 1 <= b && b <= d && b<= 1000000 && 1 <= ln2[i]&& ln2[i] <= 1000000){
				//Fourth Level
				for (l=0; l<j; l++){
					//Fifth Level
					if (ln2[l] <= b){
						sum =  sum + ln2[l];
					}
					else{
					}
					if (sum%d==0){
					//	print(sum-1//d)
					}
					else{
						//print(sum//d)
					}
				}
			}
		}
    else{
      break;
		}
    cl +=1;
	}
}

//Discriminant: End//
//==================//

//----------------------------------------------//

//Main Function//
//==================//

int main(){

	int n, b, d, j, sum;
	printf("Enter n, b and d with commas between them: and terminate with a '.': ");
	scanf("%d,%d,%d.", &n,&b,&d);
	printf("n: %d | b: %d | d: %d\n", n,b,d); 
	printf("Enter orange sizes (Must be less than 10). Seperate with a comma, don't put a '.':\n");
	char* ln2f[]={"","uu",""};
	splitter(n, &j, ln2f);
	printf("j-final: %d\n", j);
	printf("%s\n", ln2f[1]);
	//Discriminant(j, n, b, d, sum, *ln2);
	return 0;
	/*for(i=0, i<sizeof(ln2)+1, i++){
	//printf("Final %d: %s\n", i+1, ln2[i])
	}*/
  
}
//Main: End//
//==================//
