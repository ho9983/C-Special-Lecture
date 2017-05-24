#include <stdio.h>
#include <stdlib.h>
// malloc : 자유 저장공간 메모리를 관리하는 함수 
int main() {
 	int *p;
	int n, i;
	 
	printf("입력할 정수 개수 입력 : ");
	scanf("%d", &n);
	if(n <= 0) {
		printf("정수 개수 입력 오류\n");
		printf("프로그램 종료\n");
		return 0;
	}
	p = (int *) malloc(n * sizeof(int));
	
	if(p == NULL) {
		printf("메모리 부족.\n");
		printf("프로그램 종료\n");
		return -1;
	}
	
	printf("%d 개의 정수를 입력 : ", n);
	for(i=0; i<n; i++) 
		scanf("%d", &p[i]);
	
	printf("입력한 정수 역순으로 출력 : ");
	for(i = n-1; i>=0; i--)
		printf("%d ", p[i]);
	printf("\n");
	 	
	return 0;
}
