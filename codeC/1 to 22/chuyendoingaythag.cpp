#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	if(a<1000 && a>0){
	int year = a/365;
	int week = (a-year*365)/7;
	int day = a- year*365 - week*7;
	printf("%d %d %d", year, week, day);}
	return 0;
}