int main()
{
    int i, j;
    int C = 0, N = 0;
    int score[1000], sum = 0;
    int count = 0;
    float avg = 0.00;

    scanf("%d", &C);

    for (i = 0; i < C; i++)
    {
        scanf("%d", &N);
        for (j = 0; j < N; j++)
        {
            scanf("%d", &score[j]);
            sum = sum + score[j];
        }

        avg = (float)sum / N;
        for (j = 0; j < N; j++)
        {
            if (avg < score[j])
                count++;
        }
        printf("%.3f%%\n", (float)count * 100 / N);
    }
    return 0;
}