#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact
{
    char name[128];
    char birthday[32];
    char phone[32];
    char addr[256];
    char qq[16];
    char email[32];
    struct contact *next;
};

struct contact *create(struct contact *head, int n);
struct contact *insert(struct contact *head, struct contact *node);

int main()
{
    int n;
    printf("input n:\n");
    scanf("%d", &n);
    
    struct contact *head;
    head=create(head, n);
    
    for (int i=0;i<n;i++)
    {
        printf("%s\n", head->birthday);
        head=head->next;   
    }
}


struct contact *create(struct contact *head, int n)
{
    struct contact *node=NULL;
    char birthday[32];
    for (int i=0;i<n;i++)
    {
        printf("input birthday:\n");
        scanf("%s", birthday);
        node=(struct contact*)malloc(sizeof(struct contact)); 
        strcpy(node->birthday, birthday);
        node->next=NULL;
        head=insert(head, node);
    }
    return head;
}

struct contact *insert(struct contact *head, struct contact *node)
{
    if (head==NULL)
    {
        return node;
    }

    if (strcmp(head->birthday, node->birthday)>0)
    {
        node->next=head;
        return node;
    }
            
    struct contact *cur=head, *pre=head;
    while (cur!=NULL)
    {
        if (strcmp(pre->birthday,node->birthday)<0 && strcmp(cur->birthday,node->birthday)>0)
        {
            pre->next=node;
            node->next=cur;
            break;
        } else {
            pre=cur;
            cur=cur->next;
        }
    }

    if (cur==NULL)
    {
        pre->next=node;
    }

    return head;
}
