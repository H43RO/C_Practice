#include <stdio.h>

struct strings{
	char *str;
	int length;
};

void getlength(struct strings *);

int main(void){
	struct strings strAr[3] = {{"Hello",0}, {", ",0}, {"World!",0}};
	int i;

	for(i=0; i<3; i++){
		getlength(&strAr[i]);
		printf("The length of \"%s\" is %d\n", strAr[i].str, strAr[i].length);
	}

	return 0;
}

void getlength(struct strings *a){
	char *p = a->str;
	while(*p++ != '\0'){
		a->length ++;
	}
}
