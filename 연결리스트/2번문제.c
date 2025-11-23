#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int emp;
typedef struct Node
{
    char data[101];
    struct Node *next;
} Node;
Node *head = NULL;
Node *end = NULL;
Node *pre = NULL;
void createdata(char *value)
{
    Node *a = (Node *)malloc(sizeof(Node));
    strcpy(a->data, value);
    a->next = NULL;
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
    scanf("%d", &n);
    for (emp i = 0; i < n; i++)
    {
        pre = (Node *)malloc(sizeof(Node));
        scanf("%s", pre->data);
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
    Node *cur = head;
    while (cur != NULL)
    {
        printf("%s\n", cur->data);
        cur = cur->next;
    }
    cur = head;
    while (cur != NULL)
    {
        Node *next = cur->next;
        free(cur);
        cur = next;
    }
}