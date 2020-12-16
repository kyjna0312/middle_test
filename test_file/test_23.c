int main()
{
    int num;
    int i, j = 0;
    int k;
    float sum = 0;
    float avg;
    int mid;
    int range;
    int max_count;
    int mode;
    int count[8000] = {0};
    int n;
    int max[8000];
    int arr[num];

    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        scanf("%d", &n);
        sum = sum + n;
        count[n + 4000]++;   
    }                        
    avg = (float)sum / num; 

    max[1] = 0;
    max_count = count[0];
    for (i = 0; i < 8000; i++)
    {
        if (count[i] > max_count)
        {          
            k = 0; 
            max[1] = 0;
            max_count = count[i];
            max[k++] = i - 4000;
        }
        else if (count[i] == max_count)
        { 
            max[k++] = i - 4000;
        }
        if (count[i] > 0)
        { 
            while (count[i] > 0)
            {
                arr[j++] = i - 4000;
                count[i]--;
            }
        }
    }
    if (max[1] == 0)
    { 
        mode = max[0];
    }
    else
    { 
        mode = max[1];
    }

    mid = arr[(num + 1) / 2 - 1];  
    range = arr[num - 1] - arr[0]; 

    printf("%1.lf\n", avg);
    printf("%d\n", mid);
    printf("%d\n", mode);
    printf("%d\n", range);

    return 0;
}
