int dasi(char a[50][50], int garo, int sero)
{
    int final = 50000;
    int i, j, k, l;
    for (i = 0; i < sero - 7; i++)
    {
        for (j = 0; j < garo - 7; j++)
        {
            int num = 0;
            if (a[i][j] == 'W')
            {
                for (k = i; k < i + 8; k++)
                {
                    for (l = j; l < j + 8; l++)
                    {
                        if ((k + l - i - j) % 2 == 0)
                        {
                            if (a[k][l] != 'W')
                                num++;
                        }
                        else
                        {
                            if (a[k][l] != 'B')
                                num++;
                        }
                    }
                }
            }
            else if (a[i][j] == 'B')
            {
                for (k = i; k < i + 8; k++)
                {
                    for (l = j; l < j + 8; l++)
                    {
                        if ((k + l - i - j) % 2 == 0)
                        {
                            if (a[k][l] != 'B')
                                num++;
                        }
                        else
                        {
                            if (a[k][l] != 'W')
                                num++;
                        }
                    }
                }
            }
            if (num < final)
                final = num;
        }
    }
    return final;
}

int main()
{
    int a, b;
    int i, j;
    char k[50][50];

    scanf("%d %d", &a, &b);

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
            scanf(" %c", &k[i][j]);
    }
    printf("%d\n", dasi(k, b, a));
    return 0;
}