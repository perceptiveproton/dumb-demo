#include<stdio.h>
//#include<conio.h>

int fib(int n){
	if(n == 0){
	return 0;
	}
	else if(n == 1){
	return 1;
	}
	else{
	return fib(n-1)+fib(n-2);
	}
}

int main(int argc, char* argv){
	int n = argv[1];
	int a = fib(n);
	printf("%d",a);
}
