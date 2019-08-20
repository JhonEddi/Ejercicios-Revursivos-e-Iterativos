def fibonacci (n):
	if n<=2:
		return 1;
	if n>2:
		return fibonacci(n-1)+fibonacci(n-2)

def division(n,m):
	if n==0:
		return 0;
	if n!=0:
		return 1+division(n-m,m)

def potencia(n,m):
	if m==0:
		return 1;
	if m>=1:
		return n*potencia(n,m-1)