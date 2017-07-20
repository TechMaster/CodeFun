#include <stdio.h>
#include <stdlib.h>

void inSo(int N) {
	if (N==0) return;
	//inSo(N-1);
	printf("%d\n" , N);
	inSo(N-1);
}

int main()
{
	int N;
	scanf("%d", &N);
	inSo(N);
	/*for (int i=1; i<=N; i++) {
		printf("%d\n", i);
	}*/
	return 0;
}
