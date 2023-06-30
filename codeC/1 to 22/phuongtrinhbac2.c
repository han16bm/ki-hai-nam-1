#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c;
	scanf("%f%f%f", &a, &b, &c);
	double delta = (double)(b*b - 4*a*c);
	if(abs(a)<=1000 && abs(b)<=1000 && abs(c)<=1000)
	if( a==0 && b==0 && c==0){
		printf("NO");
	}
	else if ( delta < 0){
		printf("NO");
	}
	else if ( delta == 0){
		printf("%.2f", (float)-b/(2*a));
	}
	else {
		double d= (float)sqrt(delta);
		printf("%.2f %.2f", (float)(-b -d)/2*a, (float)(-b + d)/2*a );
	}
	return 0;
}