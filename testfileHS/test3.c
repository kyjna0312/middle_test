int main(int argc, int argv[])
{
    int input, b, c;

    scanf("%d\n", &input);

    b = input + 1;
    c = 1 + 2;
    switch (input)
    {
    case 0:
        printf("0\n");
        break;
    case 1:
        printf("1\n");
        break;
    case 2:
        printf("2\n");
        break;
    case 3:
        printf("3`\n");
        break;
    default:
        printf("??");
    }
}