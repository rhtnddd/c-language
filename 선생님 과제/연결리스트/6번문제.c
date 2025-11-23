#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct Node
{
    element data;
    struct Node *next;
} Node;
Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

void p(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
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
    head = reverse(head);
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
