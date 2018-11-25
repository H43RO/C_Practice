#include <stdio.h>

int main(void) {
	char arr[] = "Hello, Wolrd!";
	char str[100];
	int len, i;
	char *p;

	len = sizeof(arr);
	p=arr+len -2;

	for(i=0; i<len-1; i++){
		str[i] = *p--;
	}

	printf("%s\n", arr);
	printf("%s", str);
}
