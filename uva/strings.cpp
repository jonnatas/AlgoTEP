#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){

	char a[10] = "teste";
	char b[] = "TESTo";
	char *p;

	//compare o valor
	//printf("%d\n", (*a)==(*b));	

	int res = ( b[0]%32   );
	printf("%d\n",res );
}
