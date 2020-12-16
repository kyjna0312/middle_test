int main()
{
    int n, m, j;
    int pos = 1;
    int ans = 0;
    int l, r, tmp;

    do
    {
        scanf("%d %d", &n, &m);
    } while (m >= n);

    scanf("%d", &j);

    while (j--)
    {
        l = pos;
        r = pos + m - 1;

        scanf("%d", &tmp);

        if (l > tmp)
        {
            ans = ans + l - tmp;
            pos = tmp;
        }
        else if (r < tmp)
        {
            ans = ans + tmp - r;
            pos = tmp - m + 1;
        }
    }

    printf("%d\n", ans);

    return 0;
}