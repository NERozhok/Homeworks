#include <stdio.h> 
#include <math.h>

int fib(int n);

int main(){
	int n;
	scanf("%i", &n);
	printf("%i",fib(n));
}

int fib(int n) {
	int res = 0;
	if(n == 1){return 1;}
	if(n == 2){return 1;}
	res = fib(n - 1) + fib(n - 2);
	return res;
}