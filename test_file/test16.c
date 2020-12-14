int main()
{
    int H, M;
    // scanf("%d %d", &H, &M);

    if (H == 0)
    {
        if (M < 45)
        {
            M = H + M;
            printf("%d %d", H, M);
        }
        else if (M >= 45)
        {

            printf("%d %d", H, M);
        }
    }
    else if (H > 0)
    {
        if (M < 45)
        {

            printf("%d %d", H, M);
        }
        else if (M >= 45)
        {
            printf("%d %d", H, M);
        }
    }
    return 0;
}