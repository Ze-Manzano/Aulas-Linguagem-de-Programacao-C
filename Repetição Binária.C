#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n = 10;// 8 + 2 = 10 >> 1010
	scanf("%d",&n);	
	while(n > 0){
		printf("%d", n%2); // 0 1 0 1
		n = n/2;
    } 

	
	return 0;
}
