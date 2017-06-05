#include <iostream>
using namespace std;
// 2부터 100까지 소수의 개수를 구하는 프로그램 

int main() {
	int i, j, k, m, a[99];
	
	int k=1;
	do{
		k++;   a[k-2] = k;
	} while(k < 100);
	i=-1; // 순서도는 1부터 시작이지만 
		 //실제 배열은 0부터 시작이기 때문.  
	j=0;
	while(true) {
		i++;
		if(i > 99) { 
			cout << j << endl;  
			break; 
		}
		if(a[i] == 0)	continue;
		j++; 
		m = i;
		while(true){
			m = m+a[i];
			if(m > 99) break;
			a[m] = 0;
		}
	} 
}
