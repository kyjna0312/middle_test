void main()
{
	int num, num2, b, mok, nmg, i;
	int a[10];
				
	scanf("%d",&num);
	num2 = num;
	b = -1;
						
	do{
		b++;
		mok = num/2;
		nmg = num-mok*2;
		a[b] = nmg;
		num = mok;
	}while(mok!=0);
	
	printf("%d를 2진수로 변환한 값 = ",num2);
	
	for(i=b;i>=0;i--){
		printf("[%d]",a[i]);
	}
}


