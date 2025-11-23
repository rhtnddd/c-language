#include <stdio.h>
#include <stdlib.h>
typedef int emp;
typedef struct Node
{
    emp data;
    struct Node *next;
} Node;
Node *head = NULL;
Node *end = NULL;
Node *pre = NULL;
void createdata(emp value)
{
    Node *a;
    a = (Node *)malloc(sizeof(Node));
    a->data = value;
    a->next = NULL;
    a->next = head;
    head = a;
    end = a;
}
void createmiddle(Node *pre)
{
    if (head == NULL)
    {
        head = pre;
        end = pre;
    }
    else
    {
        end->next = pre;
        end = pre;
    }
}
int main(void)
{
    emp n;
    emp m;
    scanf("%d", &n);
    for (emp i = 0; i < n; i++)
    {
        pre = (Node *)malloc(sizeof(Node));
        scanf("%d", &pre->data);
        pre->next = NULL;
        if (i == 0)
        {
            createdata(pre->data);
        }
        else
        {
            createmiddle(pre);
        }
    }
    scanf("%d", &m);
    Node *cur = head;
    int p = 0;
    int found = 0;
    while (cur != NULL)
    {
        if (cur->data == m)
        {
            printf("%d\n", p);
            found = 1;
            break;
        }
        cur = cur->next;
        p++;
    }

    if (!found)
    {
        printf("없습니다. 돌아가세요!\n");
    }
    cur = head;
    while (cur != NULL)
    {
        Node *next = cur->next;
        free(cur);
        cur = next;
    }
}