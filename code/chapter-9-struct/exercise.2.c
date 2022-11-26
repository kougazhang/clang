#include <stdio.h>
#include <stdlib.h>

struct person
{
    int num;
    struct person *next;
};

struct person *create(int n);

int main()
{
    int n=25;
    struct person *head=create(n);
    
    int i=1;
    while (head!=head->next)
    {
        printf("%d,%d,%d\n", head->num, i,i%3);
        if (i%3==0)
        {
            struct person *node=head->next;
            head->next=node->next;
            free(node); 
        } 
        else
        {
            head=head->next;
        }
        i++;
    }
    printf("%d,%p\n", head->num, head->next);
    return 0;
}

struct person *create(int n)
{
    struct person *head=NULL,*cur=NULL;

    for (int i=1;i<=n;i++)
    {
        struct person *node=(struct person *)malloc(sizeof(struct person));
        node->num=i;
        node->next=NULL;
        
        if (head==NULL)
        {
            head=node;
            cur=node;
        } else 
        {
            cur->next=node;
            cur=node;
        }
    }
    // 环形链表
    cur->next=head;

    return head;
}