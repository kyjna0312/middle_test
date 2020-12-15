void sum_123(int N)
{
	int dp[12];
	int i;
	
	dp[0] = dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	if (N < 4)
	{
		printf("%d\n", dp[N]);
		return 0;
	}
	else
	{
		for (i = 4; i <= N; i++){
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
	}
	printf("%d\n", dp[N]);
}
int main()
{
	int N;
	int num;
	int i;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);
		sum_123(num);
	}
}


