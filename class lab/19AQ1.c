#include<stdio.h>
int fact(int);
void main(){
	int f,n;
	printf("enter:");
	scanf("%d",&n);
	f = fact(n);
	printf("factorial = %d",f);
}
int fact(int n){
	if(n == 0){
		return 1;
	}
	else if(n == 1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
