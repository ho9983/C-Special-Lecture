#include <stdio.h>
#include <stdlib.h>
// 탑다운 코딩 방식 

int read_number(); // 함수 프로토타입 선언 
int add(int x); 
double half(int x);
void print_result(int num);

int main(int argc, char *argv[]) {
	int num;
	
	num = read_number();
	print_result(num);
	
	return 0;
}

int read_number(int num){
	
	printf("정수를 하나 입력하세요 : ");
	scanf("%d", &num);
	
	return num;
}
int add1(int x){
	return (x + 1);
}
double half(int x) {
	return (x / 2.0);
}
void print_result(int num) {
	printf("\n%d의 바로 다음 정수는 %d 이고\n", num, add1(num));
	printf("%d 의 반은 %.1f 입니다.\n", num, half(num));
} 
