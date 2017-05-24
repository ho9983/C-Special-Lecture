#include <stdio.h>
#include <stdlib.h>
// 배열을 이용하여 1부터 10까지 더하는 프로그램 

int sum(int a[10]);
int main() {
 	int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 	
 	printf("1 + 2 + .... + 10 = %d", sum(x)); 
	// sum(x) 로 배열x 의 인자 전달 
	return 0;
}

int sum(int a[10]) {
	int i, sum = 0;
	for(i=0; i<10; i++)
		sum = sum + a[i];
	return sum;
}
