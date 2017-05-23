#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* 정사각형의 한 변의 길이 n과 종류 m을 입력받은 후 다음과 같은 정사각형 형태로 출력하는
프로그램을 작성 하시오.

< 처리조건 >
종류 2번의 경우 숫자의 진행 순서는 처음에 왼쪽에서 오른쪽으로 너비 n 만큼 진행 한 후
방향을 바꾸어서 이를 반복한다.

정사각형 한변의 길이 n(n<=100인 정수)과 종류 m(m>=1 && m<=3 정수) 을 입력받는다.
*/ 

int main(int argc, char *argv[]) {
// 5x5 정사각형 행렬입니다. 무슨 규칙이 있는지는 1, 2, 3을 일일이 넣어서 확인해보세요 
			
	int i, type;
	
	printf("사각형 종류 : ");
	scanf("%d", &type);
	
	if(type!=1 && type!=2 && type!=3) {
		printf("잘못 입력하셨습니다. \n 프로그램 종료.");
		return 0; 
	}
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++){
			switch(type){
				case 1:
					printf("%d", i+1);
					break;
				case 2:
					if(i%2 == 1)
						printf("%d " ,5-j);
					else
						printf("%d " , j+1);
					break;
				case 3:
					printf("%3 ",(i+1)*(j+1));
					break; 
			}
		}
		printf("\n");
	} 
	return 0;
}
