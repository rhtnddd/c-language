#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct Node
{
    element data;
    struct Node *next;
} Node;
int main(void)
{
    Node *head = NULL;
    Node *temp = NULL;
    Node *end = NULL;
    element sum = 0;
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
    temp = head;
    while (temp != NULL)
    {
        sum += temp->data;
        temp = temp->next;
    }
    printf("%d", sum / 4);
    temp = head;
    while (temp != NULL)
    {
        Node *next = temp->next;
        free(temp);
        temp = next;
    }
}
