#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student *create(int n);
struct student *delete(struct student *head, char name[64]);
struct student *insert(struct student *head, struct student *node);

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
    
    // 创建链表
    struct student *head=create(n);
    
    // 删除学生名称为 jack 的结点
    // head=delete(head, "jack");    
    
    // 插入链表。链表已按年龄排序，要求插入时有序插入。
    struct student node={"tony", 18};
    printf("insert a new node: %s %d\n", node.name, node.age);
    head=insert(head, &node);

    // 遍历链表
    while (head!=NULL)
    {
        printf("%s %d\n", head->name, head->age);
        head=head->next;
    }

    return 0;
}

struct student *insert(struct student *head, struct student *node)
{
    // 如果 head 为 NULL，则把 node 做完链表头返回
    if (head==NULL)
    {
        return node;
    }
    if (node->age < head->age)
    {
        node->next=head;
        return node;
    }

    struct student *pre=head,*cur=head;
    while (cur!=NULL)
    {
        if (pre->age<=node->age && node->age<=cur->age)
        {
            pre->next = node;
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
            pre->next=cur->next;
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