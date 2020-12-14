#include <stdio.h>
#define MAXN 100
int main()
{
	int n, m, array[MAXN];
	scanf("%d %d", &n, &m);
	m %= n;
	for(int i = 0; i < n; i++)
		scanf("%d", &array[i]);
	for(int i = n - m; i < n; i++)
		printf("%d ", array[i]);
	for(int i = 0; i < n - m; i++)
		printf("%d%c", array[i], (i < n - 1 ? ' ' : '\n'));
	return 0;
}