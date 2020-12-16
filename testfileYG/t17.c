void main()
{
	int num, i;
	float inArr[1000], max = 0, avg = 0;

	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		scanf("%lf", &inArr[i]);
 
		if (max < inArr[i]){
			max = inArr[i];
		}
	}
 
	for (i = 0; i < num; i++)
	{
		inArr[i] = inArr[i] / max * 100.0;
		avg = avg + inArr[i];
	}

	printf("%.2f", (avg / (float)num));
}


