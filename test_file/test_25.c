int pivo(int num);

int main()
{
	int num;
	scanf("%d", &num);
	printf("%d", pivo(num + 1));

	return 0;
}

int pivo(int num)
{
	int result;
	if (num <= 1)
		return 0;
	
	else if (num == 2)
		return 1;

	return pivo(num - 1) + pivo(num - 2);
}