#include<stdio.h>
#include<math.h> 
	int main() { 
	int n, t=0; 
	scanf("%d", &n); 
	int chuso = (int) log10(n)+1; 
	int a[100]; int i=1; 
	while (n > 0) { 
		a[i]= n % 10; 
		n /= 10; 
		i++; 
		} 
	int tam; 
	tam = a[1]; a[1] = a[chuso]; a[chuso] = tam; 
	for (i=chuso; i>=1; i--) 
	t += pow(10,i-1) * a[i]; 
	printf("%d", t); }