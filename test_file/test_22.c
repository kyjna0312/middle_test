typedef enum
{
    true,
    false
} bool;

bool find(int x);

int main ()
{
    int n, i;         
    int count = 0; 
    int num[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (find(num[i]) == true)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

bool find(int x)
{
    int i;

    if (x > 2)
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
                return false;
        }
        return true;
    }
    else if (x == 2)
        return true;
    else
        return false;
}