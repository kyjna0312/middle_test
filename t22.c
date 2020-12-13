int fac(int n){
	if (n > 1) return n * fac(n - 1);
    else if (n == 0) return 1;
	else return n;
}
int main(){
	int N;
	scanf("%d", &N);
	printf("%d", fac(N));
	
	return 0;
}


