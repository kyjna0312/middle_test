int N, M;
int visited[9];
int values[9];

void recursive(int temp, int b)
{
    int i;
    if (temp == 0)
    {
        for (i = M; i >= 1; --i)
        {
            printf("%d ", values[i]);
        }
        printf("\n");
    }
    else
    {
        for (i = 1; i <= N; ++i)
        {
            if (visited[i] == 1)
                continue;
            else if (i < b)
                continue;
            else
            {
                visited[i] = 1;
                values[temp] = i;
                recursive(temp - 1, i);
                values[temp] = 0;
                visited[i] = 0;
            }
        }
    }
    return 0;
}

int main()
{
    scanf("%d%d", &N, &M);
    recursive(M, 0);

    return 0;
}