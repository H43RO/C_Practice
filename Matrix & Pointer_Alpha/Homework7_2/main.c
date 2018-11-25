#include <stdio.h>
#define N 3

int main(void) {
	char *s[N] = { "IoT, ", "MLs, ", "SCH" };
	char str[100];
	int i, j;
	char *p;

	for (i = 0, j=0; i < N; i++) {
		p = s[i];
		while (*p  != '\0') {
			str[j++] = *(p++);
		}
	}
	str[j] = '\0';

	printf(str);

	return 0;
}
