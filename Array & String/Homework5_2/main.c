//문자열에서 대소문자, 알파벳이 아닌 문자 개수 구하기

#include <stdio.h>

int main(void) {
	char str[100] = "Yesterday \"All\" My \'Troubles\' Seemed So Far Away.";
	int nArr[3] = { 0, 0, 0 }, i = 0;

	while (str[i] != '0') {
		if (65 <= str[i] && str[i] <= 90) {
			nArr[0]++;
		} else if (97 <= str[i] && str[i] <= 122) {
			nArr[1]++;
		} else {
			nArr[2]++;
		}
		i++;
	}

	for (i = 0; i < 3; i++) {
		if (i == 2) {
			printf("%d", nArr[i]);
			break;
		}
		printf("%d, ", nArr[i]);
	}
}
