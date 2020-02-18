#include <stdio.h>

int main(){

	unsigned long long int number = 0;
	char input;
	while ((input = getchar()) != '\n') {
		if ( input >= 97){
			number <<=4 ;
			number |= input - 87;
		} else {
			if (input >= 65) {
				number <<=4 ;
				number |= input - 55;
			} else {
				number <<=4 ;
				number |= input - 48;
			}
		}

	}
	printf("%llu",number);
	return 0;
}