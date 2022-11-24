#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student *create(int n);
struct student *delete(struct student *head, char name[64]);

struct student 
{
    char name[64];
    int age;
    struct student *next;
};

int main()
{
    int n;
    scanf("%d", &n);
    
    struct student *head=create(n);
    head=delete(head, "jack");    
    for (int i=0;head!=NULL;i++)
    {
        printf("%s %d\n", head->name, head->age);
        head=head->next;
    }

    return 0;
}

struct student *delete(struct student *head, char name[64])
{
    if (head == NULL)
    {
        return head;
    }

    struct student *res=head;
    for (int i=0;head!=NULL;i++)
    {
        if (strcmp(head->name, name)==0)
        {
            if (i==0)
            {
                res=head->next;
                free(head);
                return res;
            } else {
                struct student *t=head;
                head=head->next;
                free(t);
                break;
            }
        } else {
            head=head->next;   
        }
    }
    return res;
}

struct student *create(int n)
{
    struct student *head,*node,*cur;
    head=node=cur=NULL;
    char name[64];
    int age;
    
    for (int i=0;i<n;i++)
    {
        printf("name:\n");
        scanf("%s", name);
        printf("age:\n");
        scanf("%d", &age);
        
        node=(struct student*)malloc(sizeof(struct student));
        strcpy(node->name, name);
        node->age=age;
        node->next=NULL;

        // 原链表为空，则将新结点置为 head 结点
        if (head==NULL)
        {
            head=node;
            cur=node;
        } else 
        {
            // head 不为空，把新结点加到链表尾部
            cur->next=node;
            cur=node;
        }
    }

    return head;
}