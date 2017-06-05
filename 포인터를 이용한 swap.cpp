#include <iostream>
using namespace std;
/*
정수 데이터 x,y를 서로 바꾸어 넣는 함수 swap을 작성하라.
단, 포인터를 사용할것. 
*/
void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int a=5, b=10;
	
	cout << "스왑전" << endl;
	cout << "a : " << a << " b : " << b << endl; 
	
	swap(a, b);
	
	cout << "스왑 후" << endl;
	cout << "a : " << a << " b : " << b << endl; 
	
} 
