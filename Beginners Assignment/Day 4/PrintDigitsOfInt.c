#include <stdio.h>
void digi(int N)
{
	int r;
	if (N == 0) {
		return;
	}
	r = N % 10;
	digi(N / 10);
	printf("%d ", r);
}

int main()
{
	int N = 6942069;

	digi(N);
	return 0;
}
