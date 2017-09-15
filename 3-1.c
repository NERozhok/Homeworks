#include <stdio.h> 

int main() { 
	int a, b, n, i; 
	scanf("%d", &n); 
	scanf("%d", &a); 
	for(i = 0; i < n - 1; i++){ 
		scanf("%d", &b); 
		if(b>a) { 
			a = b; 
		} 
	} 
	printf("Result = %d\n", a); 
}