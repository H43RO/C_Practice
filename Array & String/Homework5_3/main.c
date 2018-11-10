//두 문자열을 하나로 합치는 프로그램

#include <stdio.h>

int main(void) {
	char str1[100], str2[100], str[200];
	int i, j;

	printf("Input 1st string: ");
	fflush(stdout);
	gets(str1);

	printf("Input 2nd string: ");
	fflush(stdout);
	gets(str2);

	i = 0;
	while(str1[i] != '\0'){
		str[i]=str1[i];
		i++;
	}

	j=i; i=0;
	while(str2[i] != '\0'){
		str[j]=str2[i];
		i++;
		j++;
	}

	printf("%s", str);

	return 0;
}
