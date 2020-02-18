#include <stdio.h>

int main(){
	unsigned int gistrogram [10] = {0,0,0,0,0,0,0,0,0,0};
	char input,max=0;
	while ((input = getchar()) != '\n') {
		if (input > 47 && input < 59) {
			++gistrogram[input - 48];
			if (max < gistrogram[input - 48])
				max = gistrogram[input - 48];
		}
	}
	for (char i = 0; i < 10 ; ++i){
		printf("%c: ",i + 48);
		for(int j = 0; j < gistrogram[i]; ++j)
			putchar('#');
		putchar('\n');
	}
	for (int i = max; i > 0; --i){
		for (int j = 0; j < 10 ; ++j)
			putchar(i <= gistrogram[j] ? '#' : ' ');
		putchar('\n');
	}
	for ( char i = 48; i < 59; ++i){
		putchar(i);
	}
	return 0;
}