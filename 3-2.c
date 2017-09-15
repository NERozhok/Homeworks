#include <stdio.h> 
#include <math.h>

int main(){
	int n; int res = 1; int f1 = 0; int f2 = 1;
	scanf("%d", &n);
	for(; n > 1; n--){
		res = f1 + f2;
		f1 = f2;
		f2 = res;	
	}
	printf("%d", res);
}