#include <stdio.h>

int find(int n);

int main()
{
    find(1000);
}

int find(int n)
{
    int num=0;
    for (int i=101;i<n;i++)
    {
        int h=i/100;
        int t=(i-h*100)/10;
        int g=i-h*100-t*10;
        
        if (t==g || t==h || h==g)
        {
            for (int j=10;j*j<=i;j++)
            {
                if (j*j==i) {
                    printf("j:%d,i:%d\n", j, i);
                    num++;
                }
            }      
        }
    }
    return num;
}