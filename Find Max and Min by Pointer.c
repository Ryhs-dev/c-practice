#include <stdio.h>

void find_max_min(int *p, int i, int *m, int *n)
{
    int *q;
    q = p + i;
    *m = *p;
    *n = *p;
    for (p++; p < q; ++p)
    {
        if (*p > *m)
        {
            *m = *p;
        }
        if (*p < *n)
        {
            *n = *p;
        }
    }
}

int main(void)
{
    int arr[20];
    int N, max, min;

    printf("请输入个数 N (1~20): ");
    if (scanf("%d", &N) != 1 || N < 1 || N > 20)
    {
        printf("N 不合法\n");
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    find_max_min(arr, N, &max, &min);

    printf("the max is %d\n", max);
    printf("the min is %d\n", min);
    return 0;
}