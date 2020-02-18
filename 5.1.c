#include <stdio.h>
#define len_s1_max 128
#define len_s2_max 128
int main(){
	char s1[len_s1_max], s2[len_s2_max];
	int len_s1 = 0,len_s2 = 0;
	while( (s1[len_s1++] = getchar()) != '\n');
	while( (s2[len_s2++] = getchar()) != '\n');
	for (int i = 0; i < len_s1; ++i)
		for (int j = 0; j < len_s2; ++j){
			if (s1[i]==s2[j]){
				printf("%d", i);
				return 0;
			}
		}
	printf("-1");
	return 0;
}