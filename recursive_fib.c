#include<stdio.h>
#include<conio.h>

int fib(n){
	if(n==1){
	return 1;
	}
	else{
	return (fib(n-1)+fib(n-2);
	}
}

int main(){
	int a=fib(5);
	printf("%d",a);
	getch();
}
