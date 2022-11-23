#include <stdio.h>
#include <math.h>

float trun(float x, int p);

int main()
{
    float x;
    scanf("%f", &x);
    int p;
    scanf("%d", &p);
    printf("%f\n", trun(x, p));
    return 0;
}

float trun(float x, int p)
{
    int intpart=(int) x;
    float decpart= x-intpart;
    int zoomUp=1;
    for (int i=0;i<p;i++)
    {
        zoomUp*=10;
    }
    decpart=decpart*zoomUp;
    decpart =(float) round(decpart);
    return intpart+decpart/zoomUp;
}