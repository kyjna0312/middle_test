struct N
{
    int stack[100000];
    int top;
};
struct N num[7];
int cnt = 0;
int push(int n, int p);
int pop(int s);
int main()
{
    int n, p, i, s, n2;
    scanf("%d %d", &n, &p);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &s, &n2);
        if (num[s].top < 0)
        {
            push(s, n2);
        }
        else
        {
            if (num[s].stack[num[s].top] > n2)
            {
                while (num[s].stack[num[s].top] > n2)
                {
                    pop(s);
                }
                if (num[s].stack[num[s].top] != n2)
                    push(s, n2);
            }
            else if (num[s].stack[num[s].top] < n2)
                push(s, n2);
            else
                continue;
        }
    }
    printf("%d", cnt);
    return 0;
}
int push(int n, int p)
{
    num[n].stack[++num[n].top] = p;
    cnt++;
}
int pop(int s)
{
    num[s].top--;
    cnt++;
}