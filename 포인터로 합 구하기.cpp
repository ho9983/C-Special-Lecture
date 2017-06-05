#include <iostream>
using namespace std;
/* 
배열 abc에 1, 3, 5, 7, 9를 대입하여 
1+3+5+7+9 를 구하는 프로그램을 포인터를 이용하여 작성
*/ 

int main() {
	int abc[] = {1, 3, 5, 7, 9};
	int result = 0 ;
	int *p; 
	*p = abc[0];
	
	for(int i=0; i<5; i++)
		result += *(p+i);
	cout << result << endl;	
} 
