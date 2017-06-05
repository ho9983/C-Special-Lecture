#include <stdio.h>
#include <string.h> 
#include <Windows.h> 
/*
화면 중간에 글자를 전광판 처럼 출력하는 프로그램 
*/

void gotoxy(int x, int y){
 	COORD Cur={x,y};
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}
void marquee(char *s){
 	int i, l=strlen(s);
 	char t = s[0];
 	for(i=0;i<l-1;i++)
  		s[i] = s[i+1];
 	s[i] = t;
}

int main(){
 	int i;
 	
	char str[30] = "ABCDEFGHIJK!!!!!@@@@@ ";
 	
	while(1) {
 		for(i=0;i<40;i++){
  			marquee(str); 
  			
			gotoxy(30,12); 
  			printf("%s",str);
  			Sleep(100); 
 		}
		for(i=0;i<3;i++){
		  	gotoxy(30,12);
		 	printf("%20s",""); // 공백
		  	Sleep(400);
		  	
			gotoxy(30,12);
		  	printf("%s",str);
		  	Sleep(400);
		}
	 	gotoxy(30,12);
	 	printf("%20s","");
	 	Sleep(1000);
	}

 return 0;
}
 
