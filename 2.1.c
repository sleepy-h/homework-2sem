#include <stdio.h>

int main(){
	char i = getchar();
	while(i != '\n'){
		if (i != ' ' && i != '\t' && i != '\v'){
			putchar(i);
		}
		i = getchar();
	}
	putchar('\n');
	return 0;
}