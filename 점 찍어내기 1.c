#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// 왼쪽이밑변인 이등변삼각형을 점으로 그리는 프로그램

int main(int argc, char *argv[]) {
	
	int i,j;
	
	for(i=0; i<9; i++) {
		for(j=0; j<=i; j++)
			printf("*");
			Sleep(1000);
		printf("\n");
	}
	
	for(i=0; i<=4; i++) {
		for(j=3; j>=i; j--)
			printf("*");
			Sleep(1000);
		printf("\n");
	} 
	return 0;
}
