#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct Node
{
    element data;
    struct Node *next;
} Node;
void p(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
Node *deleteNode(Node *head, int position)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node *prev = head;
    for (int i = 1; i < position - 1 && prev != NULL; i++)
    {
        prev = prev->next;
    }
    if (prev == NULL || prev->next == NULL)
    {
        printf("에러에러에러에러\n");
        exit(0);
    }
    Node *toDelete = prev->next;
    prev->next = toDelete->next;
    free(toDelete);
    return head;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    Node *head = NULL;
    Node *temp = NULL;
    Node *end = NULL;
    for (int i = 0; i < n; i++)
    {
        temp = (Node *)malloc(sizeof(Node));
        scanf("%d", &temp->data);
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            end = temp;
        }
        else
        {
            end->next = temp;
            end = temp;
        }
    }
    int m;
    scanf("%d", &m);
    head = deleteNode(head, m);
    p(head);
    temp = head;
    while (temp != NULL)
    {
        Node *next = temp->next;
        free(temp);
        temp = next;
    }
    return 0;
}
