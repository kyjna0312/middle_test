int main()
{
    int n, init;
    int count = 0;
    int a, b;
    int c, d;

    scanf("%d", &n);

    init = n;

    do
    {
        a = n / 10;
        b = n % 10;
        c = (a + b) / 10;
        d = (a + b) % 10;
        n = b * 10 + d;
        count++;
    } while (n != init);
    printf("%d", count);
}