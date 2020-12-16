int main()
{
    int c = 0;
    int n = 0;
    int arr[1000] = {0};
    int i, j;
    float mean = 0;
    float count = 0;
    float percent = 0;

    scanf("%d", &c);

    for (i = 0; i < c; i++)
    {
        scanf("%d", &n);
        mean = 0;
        count = 0;

        for (j = 0; j < n; j++)
        {
            scanf("%d", arr + j);
            mean = mean + arr[j];
        }
        mean = mean / n;

        for (j = 0; j < n; j++)
        {
            if (arr[j] > mean)
            {
                count++;
            }
        }
        percent = (count / n) * 100;

        if ((percent * 10000 - (int)(percent * 1000) * 10 >= 5))
        {
            percent = percent + 0.001;
        }

        printf("%.3f%%\n", percent);
        percent = 0;
    }
}