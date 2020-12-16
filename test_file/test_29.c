typedef struct
{
    float x1, x2, y1, y2;
} rect;

float max(float, float);

int main()
{
    float x1, x2, y1, y2;
    rect r1, r2;

    scanf("%floatd %floatd %floatd %floatd", &x1, &y1, &x2, &y2);
    r1.x1 = x1; r1.x2 = x2;
    r1.y1 = y1; r1.y2 = y2;
    
    scanf("%floatd %floatd %floatd %floatd", &x1, &y1, &x2, &y2);
    r2.x1 = x1; r2.x2 = x2;
    r2.y1 = y1; r2.y2 = y2;
    
    if (r1.x1 == r2.x2 || r1.x2 == r2.x1)
    {
        if (r1.y1 == r2.y2 || r1.y2 == r2.y1)
            printf("POINT");
        else if ((r1.y2 - r1.y1)+(r2.y2 - r2.y1) > max(r2.y2-r1.y1, r1.y2-r2.y1))
            printf("LINE");
        else
            printf("NUfloat");
    }
    else if ((r1.x2 - r1.x1)+(r2.x2 - r2.x1) > max(r2.x2-r1.x1, r1.x2-r2.x1))
    {
        if (r1.y1 == r2.y2 || r1.y2 == r2.y1)
            printf("LINE");
        else if ((r1.y2 - r1.y1)+(r2.y2 - r2.y1) > max(r2.y2-r1.y1, r1.y2-r2.y1))
            printf("FACE");
        else
            printf("NUfloat");
    }
    else
        printf("NUfloat");
    
    return 0;
}

float max (float a, float b) {
    if (a > b)
        return a;
    else
        return b;   
}