#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct Node
{
    element data;
    struct Node *next;
} Node;
int p(Node *node)
{
    if (node->next == NULL)
    {
        return node->data;
    }
    printf("%d\n", p(node->next));
    return node->data;
}
int main(void)
{
    Node *head = NULL;
    Node *temp = NULL;
    Node *end = NULL;
    for (int i = 0; i < 4; i++)
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
    p(head);
    temp = head;
    while (temp != NULL)
    {
        Node *next = temp->next;
        free(temp);
        temp = next;
    }
}