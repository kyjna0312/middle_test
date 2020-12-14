int w, h;
char lake[105][105];

void dfs(int x, int y)
{
    int i, j;
    lake[x][y] = '.'; //현재 위치를 .으로 바꿈

    for (i = -1; i <= 1; i++)
    {
        for (j = -1; j <= 1; j++)
        {
            int a = x + i;
            int b = y + j; //주변 8자리를 검사

            if (lake[a][b] == 'L')
            {              //연못이 있으면
                dfs(a, b); //dfs를 다시 시작
            }
        }
    }
}

int main()
{
    int number = 0; //연못의 개수
    int i, j;
    scanf("%d %d\n", &w, &h);

    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            scanf("%c ", &lake[i][j]);
        }
    }

    for (i = 0; i < h; i++)
    {
        for (j = 0; j < w; j++)
        {
            if (lake[i][j] == 'L')
            {              //연못이 있으면
                dfs(i, j); //dfs시작
                number++;
            }
        }
    }
    printf("%d", number);
    return 0;
}