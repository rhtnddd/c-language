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
    Node *a = (Node *)malloc(sizeof(Node));
    a->data = value;
    a->next = NULL;
    head = a;
    end = a;
}
void createmiddle(Node *pre)
{
    end->next = pre;
    end = pre;
}
void front(emp value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void middle(emp value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    int len = 0;
    Node *cur = head;
    while (cur != NULL)
    {
        len++;
        cur = cur->next;
    }
    int mid = len / 2;
    cur = head;
    for (int i = 0; i < mid - 1; i++)
    {
        cur = cur->next;
    }
    newNode->next = cur->next;
    cur->next = newNode;
}
int main(void)
{
    emp n;
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
    int choice, value;
    scanf("%d", &choice);
    scanf("%d", &value);
    if (choice == 1)
    {
        front(value);
    }
    else if (choice == 2)
    {
        middle(value);
    }
    Node *cur = head;
    while (cur != NULL)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
    cur = head;
    while (cur != NULL)
    {
        Node *next = cur->next;
        free(cur);
        cur = next;
    }
}