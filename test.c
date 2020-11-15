typedef enum
{
	false,
	true
} BOOLEAN;

typedef struct node
{
	char *name;
	int value, level;
	struct node *link;
};

int i, j = 10;

int fun(int a)
{
	// static int x = 0;
	auto struct
	{
		int c;
		float *f;
	} s;
	float i, j, k;

	return true;
}

int main(int argc)
{
	int a = 3;
	float b = 4;
	struct d
	{
		int a;
		int b;
	};
	int i;
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	if (fun(10))
	{
		printf("");
		scanf("");
	}
	else
	{
		printf("B");
	}

	for (i = 0; i < 10; i++)
	{
		while (i >= 7)
		{
			i = 0;
		}
	}

	return 0;
}
