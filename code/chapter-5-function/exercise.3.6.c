#include <stdio.h>

int max_value(int arr[][4]);

int main()
{
    int a[][4] = {
        {1,2,3,4},
        {4,3,200,10}
    };
    printf("%d\n", max_value(a));
    return 0;
}


int max_value(int arr[][4])
{
    int max=arr[0][0];
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<4;j++)
        {
            if (arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    return max;
}