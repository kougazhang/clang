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
    printf("the num of nodes:\n");
    scanf("%d", &n);
    
    struct student *head=create(n);
    head=delete(head, "jack");    
    
    while (head!=NULL)
    {
        printf("%s %d\n", head->name, head->age);
        head=head->next;
    }

    return 0;
}

struct student *delete(struct student *head, char name[64])
{
    if (head==NULL)
    {
        return head;
    }

    struct student *pre=head,*cur=head;
    while (cur!=NULL)
    {
        if (strcmp(cur->name, name)==0)
        {
            // 处理 head 就是要删除的项
            if (pre==head)
            {
                head=head->next;
            } else
            {
                pre->next=cur->next;
            }
            free(cur);
            break;
        } else
        {
            pre=cur;
            cur=cur->next;
        }
    }
    return head;
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