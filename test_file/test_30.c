typedef struct {
    int y; 
    int x; 
    int idx; 
} _alpha; 
_alpha ALPHA[1000000]; 
int  main()
{
    int i;

    int y = 0; 
    int x = 0; 
    int horse_y = 0; 
    int horse_x = 0; 
    int army_y = 0; 
    int army_x = 0;

    int head = 0; 
    int tail = 1; 
    int Dy[] = { 2, 1, -1, -2, 2, 1, -1, -2 }; 
    int Dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 }; 
    int map[102][102] = {0}; 
    int tmp_y = 0; 
    int tmp_x = 0;  
    
    scanf("%d %d", &y, &x); 
    scanf("%d %d", &horse_y, &horse_x); 
    scanf("%d %d", &army_y, &army_x); 
 
    ALPHA[0].y = horse_y; 
    ALPHA[0].x = horse_x; 
    ALPHA[0].idx = 0; 
    
    while (1)
    {
        for (i = 0; i < 8; i++)
        {
            tmp_y = ALPHA[head].y + Dy[i]; 
            tmp_x = ALPHA[head].x + Dx[i]; 
            if (tmp_y >= 1 && tmp_y<= y && tmp_x >= 1 && tmp_x <= x) 
            {
                if (map[tmp_y][tmp_x] == 0) 
                {
                    if (tmp_x == army_x && tmp_y == army_y) 
                    {
                        printf("%d\n", ALPHA[head].idx + 1); 
                        return 0;
                    }
                    ALPHA[tail].y = tmp_y;
                    ALPHA[tail].x = tmp_x;
                    ALPHA[tail].idx = ALPHA[head].idx + 1;
                    tail++;
                    map[tmp_y][tmp_x] = 1;
                }
            }
        }
        head++;
    }
    return 0;
}