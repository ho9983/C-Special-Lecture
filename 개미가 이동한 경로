#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// 주어진 시간동안 개미가 기어간 거리를 알기위한 프로그램 
// 사실 이게 뭔지 모르겠음
 
int main(int argc, char *argv[]) {
	
	int w, h, x, y, t, p, q;
	int i;
	 
	printf("총 5개 변수 입력 (변수 입력하고 Enter키 입력) : ");
	
	
	scanf("%d %d %d %d %d",&w ,&h, &p, &q, &t);
	
	p += t; q += t;
	x = p % w, y = q % h;
	if((p / w) &1) x = w - x;
	if((q / h) &1) y = h - y;
	
	printf("%d %d\n", x, y);
	
	
	
	return 0;
}
