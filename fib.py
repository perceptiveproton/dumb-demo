import sys

def fib(n):
	if(n==1):
		return 1
	else:
		return fib(n-1)+fib(n-2)

def main():
	n = sys.argv[1]
	print(fib(n))

if __name__=='__main__':
	main()
