void main ()
{
	int n,k;
	int a=1;

	printf("최대 양의 정수 입력 : \n");
	scanf("%d", &n);     //사용자가 입력하게 
	printf("배수를 찾을 k 입력 : \n");
	scanf("%d", &k);
    printf("%d보다 작은 %d의 배수 \n", n, k);
	printf("=>");
											     
	while (k<=n)     //반복문, 조건 중요
	{
		k = k*a;     //배수를 만들어줌
		printf("%d ", k);
		a ++;     //a를 1씩 증가
	}
}


