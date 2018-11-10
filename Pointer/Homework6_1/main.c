//포인터 원리 이해하기

int main(void) {
	char cArr[2] = { 'a', 'b' };
	int iArr[2] = { 0, 1 };
	double dArr[2] = { 0.1, 0.2 };

	printf("The size of cArr, iArr, dArr is %d %d %d\n",
			sizeof(cArr),sizeof(iArr), sizeof(dArr));

	printf("The address of cArr is %p\n", cArr); //배열이름이 곧 배열의 주소를 나타냄 (주소연산자 필요없음)
	printf("The address of cArr[0] is %p\n", &cArr[0]); //반면 배열 원소는 연산자 기재가 필요함 (상세 참조)
	printf("The address of cArr[1] is %p\n", &cArr[1]);

	printf("The address of iArr is %p\n", iArr);
	printf("The address of iArr[0] is %p\n", &iArr[0]);
	printf("The address of iArr[1] is %p\n", &iArr[1]);

	printf("The address of dArr is %p\n", dArr);
	printf("The address of dArr[0] is %p\n", &dArr[0]);
	printf("The address of dArr[1] is %p\n", &dArr[1]);

	//배열의 주소와 배열 첫번째 원소의 주소가 같음을 알 수 있다.

	return 0;
}
