#include <stdio.h>
#include <stdlib.h>

char *din_str(){
	char *a = (char*)malloc(1);
	*a = getchar(); 
	for (int i = 1; a[i] != '\n';){
		char *b = (char*)malloc(++i);
		for ( int j = 0; j < i; ++j)
			b[j] = a[j];
		free(a);
		a = b;
		a[i] = getchar();
	}
	return a;
}

int main(){
	char *str = din_str();
	while (*str != '\n'){
		putchar(*str++);
	}
	return 0;
}