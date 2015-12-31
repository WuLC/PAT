#include <stdio.h>
int a[100];
void reverse(int *a, int m, int n){
	for (int i = m; i <= (m + n) / 2; i++){
		int tmp = a[i];
		a[i] = a[m + n - i];
		a[m + n - i] = tmp;
	}
}

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	m %= n;
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	reverse(a, 0, n-m-1);
	reverse(a, n-m, n-1);
	reverse(a, 0, n-1);
	for (int i = 0; i < n; i++)
		printf("%d%s", a[i], (i-n+1?" ":"\n"));
	return 0;
}