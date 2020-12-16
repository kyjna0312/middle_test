int getParent(int *parent, int x)
{
    if (parent[x] == x)
    {
        return x;
    }
    return parent[x] = getParent(parent, parent[x]);
}
int unionParent(int *parent, int a, int b)
{
    a = getParent(parent, a);
    b = getParent(parent, b);
    if (a < b)
    {
        parent[b] = a;
        return a;
    }
    else
    {
        parent[a] = b;
        return b;
    }
}
int findParent(int *parent, int a, int b)
{
    a = getParent(parent, a);
    b = getParent(parent, b);
    if (a == b)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int i;
    int parent[11];
    
    for (i = 1; i <= 10; i++)
    {
        parent[i] = i;
    }
    unionParent(parent, 1, 2);
    unionParent(parent, 2, 3);
    unionParent(parent, 3, 4);
    unionParent(parent, 5, 6);
    unionParent(parent, 6, 7);
    unionParent(parent, 7, 8);
    unionParent(parent, 9, 10);
    for (i = 1; i <= 10; i++)
    {
        printf("node : %d / parent : %d\n", i, parent[i]);
    }
    printf("1과 5는 연결이 되어있나? : %d\n", findParent(parent, 1, 5));
    printf("1과 3은 연결이 되어있나? : %d\n", findParent(parent, 1, 3));
    printf("5과 10은 연결이 되어있나? : %d\n", findParent(parent, 5, 10));
    return 0;
}
