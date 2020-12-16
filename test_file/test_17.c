int N, count;

int queen[15];

int pass(int line)

{
    int i;

    for (i = 0; i < line; i++)
    {
        if (queen[i] == queen[line])
            return 0;
    }

    return 1;
}

void nQueen(int line)

{
    int i;

    if (line == N - 1)
    {
        count++;
        return 0;
    }

    for (i = 0; i < N; i++)
    {
        queen[line + 1] = i;

        if (pass(line + 1))
        {
            nQueen(line + 1);
        }
    }
}

int main()
{
    scanf("%d", &N);
    nQueen(-1);
    printf("%d", count);
}