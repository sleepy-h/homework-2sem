#include <stdio.h>

int main(){
	char input;
	unsigned int count = 0;
	while ((input = getchar()) != '\n') {
		if ( input >= 97){
			input -= 87;
		} else {
			if (input >= 65){
				input -= 55;
			} else {
				input -= 48;
			}
		}
		while (input) {
			count += input & 1;
			input >>= 1;
		}
	}
	printf("%u",count);
	return 0;
}