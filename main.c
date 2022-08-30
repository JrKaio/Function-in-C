#include <stdio.h>
#include <stdlib.h>
 int vint(int x){
 	 int resultado;
 	if (x % 2){
 		resultado = 1;

	 }
 	else {
 		resultado = 0;

	 }
	 return resultado;
 }

int main(void) {
	int i, result;
	printf ("Digite um numero");
	scanf("%d", &i);

	result = vint(i);
printf("%d",result);
	return 0;
}
