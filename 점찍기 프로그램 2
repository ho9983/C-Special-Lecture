#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// 점찍기프로그램 - 2
int main(int argc, char *argv[]) {
	
	int i, j, num = 0;
	for(i=0; i<100; i++) {
		num = i%4;
		if((i/4)&1) num = 4-num;
		for(j=0; j<=num; j++) 
			printf("*");
		printf("\n");
		Sleep(1000);
	}
	return 0;
}
