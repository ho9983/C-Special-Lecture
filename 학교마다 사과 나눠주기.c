#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* 사과를 학교에 배정한다. 배정된 사과 개수는 학교마다 다를 수 있고, 학생수도
학교마다 다를 수 있다. 각 학교에서는 배정된 사과를 똑같이 나누어 주되, 남는 사과의
개수를 최소로 한다. (서로 다른 학교에 속한 학생이 받는 사과 개수는 다를수 있다.)
학교의 수는 5개이다. 각 학교의 학생수와 사과 개수가 주어졌을 때, 학생들에게 나눠주고
남는 사과의 총 개수를 구하는 프로글매을 작성하시오.*/ 

int main(int argc, char *argv[]) {
	// 학교 수는 5개 
	int student[5]; // 학생수 받을 
	int apple[5]; // 학교마다 받을 사과개수  
	int remain[5]; // 학교마다 남는 사과개수  
	int i, sum = 0;
	
	printf("각 학교의 학생수를 입력하세요.\n");
	for(i=0; i<5; i++) {
		printf("%c 학교 학생수 : ",'A'+i); 
		scanf("%d", &student[i]);
	}
	printf("각 학교마다 줄 사과 개수를 입력하세요.\n");
	for(i=0; i<5; i++) {
		printf("%c 학교에 줄 사과개수 : ",'A'+i);
		scanf("%d", &apple[i]);
	}
	for(i=0; i<5; i++) {
		remain[i] = apple[i] % student[i];
		sum = sum + remain[i];
	}
	printf("남는 사과의 총 개수 : %d", sum);	
	
	return 0;
}
