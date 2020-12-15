int main()
{
    int a, b, i;
    int *input1, *input2;

    scanf("%d", &a);

    b = a;

    input1 = (int *)malloc(b);
    input2 = (int *)malloc(b);

    for (i = 0; i < a; i++)
    {
        scanf("%d %d", &input1[i], &input2[i]);
    }

    for (i = 0; i < a; i++)
    {
        printf("%d\n", input1[i] + input2[i]);
    }
}