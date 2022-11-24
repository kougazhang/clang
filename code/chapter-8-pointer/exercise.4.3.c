#include <stdio.h>

void count(char s[],int *cap,int *let,int *num,int *blank,int *others);

int main()
{
    int cap,let,num,blank,others;
    char s[100];
    cap=let=num=blank=others=0;
    gets(s);
    count(s, &cap, &let, &num, &blank, &others);
    printf("cap:%d,let:%d,num:%d,blank: %d,others: %d\n", cap,let,num,blank,others);
    return 0;
}


void count(char s[],int *cap,int *let,int *num,int *blank,int *others)
{
    for (int i=0;s[i]!='\0';i++)
    {
        char c=s[i];
        if ('a'<=c&&c<='z')
        {
            (*let)++;
        } else if ('A'<=c&&c<='Z')
        {
            (*cap)++;
        } else if ('0'<=c&&c<='9')
        {
            (*num)++;
        } else if (c==' ')
        {
            (*blank)++;
        } else 
        {
            (*others)++;
        }
    }
}