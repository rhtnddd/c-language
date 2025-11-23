#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;
Node *head = NULL;
Node *find(Node *temp, int p)
{
    if (temp == NULL)
    {
        return NULL;
    }
    if (temp->data == p)
    {
        return temp;
    }
    Node *a = find(temp->left, p);
    if (a != NULL)
    {
        return a;
    }
    return find(temp->right, p);
}
void wuwi(Node *a)
{
    if (a != NULL)
    {
        wuwi(a->left);
        wuwi(a->right);
        free(a);
    }
}
void jungwi(Node *a)
{
    if (a != NULL)
    {
        jungwi(a->left);
        printf("%d ", a->data);
        jungwi(a->right);
    }
}
void createNode(Node *temp, Node *jasic, char *lr)
{
    if (temp == NULL)
    {
        printf("오류입니다\n");
        exit(0);
    }
    if (strcmp(lr, "l") == 0)
    {
        if (temp->left == NULL)
        {
            temp->left = jasic;
        }
        else
        {
            printf("왼쪽에 넣을수가 없어요 오류오류");
            exit(0);
        }
    }
    else
    {
        if (temp->right == NULL)
        {
            temp->right = jasic;
        }
        else
        {
            printf("오류입니다. 당신은 실패했어요.");
            exit(0);
        }
    }
}
int getH(Node *cul)
{
    if (cul == NULL)
    {
        return 0;
    }
    int leftHeight = getH(cul->left);
    int rightHeight = getH(cul->right);
    if (leftHeight > rightHeight)
    {
        return leftHeight + 1;
    }
    else
    {
        return rightHeight + 1;
    }
}
int Nodechasgi(Node *gojo, int node1, int node2)
{
    if (gojo == NULL)
    {
        return -1;
    }
    if (node1 < gojo->data && node2 < gojo->data)
    {
        return Nodechasgi(gojo->left, node1, node2);
    }
    if (node1 > gojo->data && node2 > gojo->data)
    {
        return Nodechasgi(gojo->right, node1, node2);
    }
    return gojo->data;
}
Node *hamsuchasgi(Node *temp, int key, int sapze)
{
    if (sapze == 1)
    {
        if (head == NULL)
        {
            Node *newNode = (Node *)malloc(sizeof(Node));
            newNode->data = key;
            newNode->left = NULL;
            newNode->right = NULL;
            head = newNode;
            return NULL;
        }
        if (key < temp->data)
        {
            if (temp->left == NULL)
            {
                Node *newNode = (Node *)malloc(sizeof(Node));
                newNode->data = key;
                newNode->left = NULL;
                newNode->right = NULL;
                temp->left = newNode;
                return NULL;
            }
            else
            {
                hamsuchasgi(temp->left, key, sapze);
            }
        }
        else if (key > temp->data)
        {
            if (temp->right == NULL)
            {
                Node *newNode = (Node *)malloc(sizeof(Node));
                newNode->data = key;
                newNode->left = NULL;
                newNode->right = NULL;
                temp->right = newNode;
                return NULL;
            }
            else
            {
                hamsuchasgi(temp->right, key, sapze);
            }
        }
        else
        {
            printf("선예행님이 일리가 있다 오류다\n");
            exit(0);
        }
    }
    if (sapze == 2 && key == temp->data)
    {
        int jasic = 0;
        if (temp->left != NULL)
        {
            jasic++;
        }
        if (temp->right != NULL)
        {
            jasic++;
        }
        if (jasic == 0)
        {
            free(temp);
            return NULL;
        }
        else if (jasic == 1)
        {
            Node *child;
            if (temp->left != NULL)
            {
                child = temp->left;
            }
            else
            {
                child = temp->right;
            }
            free(temp);
            return child;
        }
        else
        {
            Node *p = temp->right;
            while (p->left != NULL)
            {
                p = p->left;
            }
            temp->data = p->data;
            temp->right = hamsuchasgi(temp->right, p->data, sapze);
            return temp;
        }
    }
    if (key < temp->data)
    {
        temp->left = hamsuchasgi(temp->left, key, sapze);
    }
    else if (key > temp->data)
    {
        temp->right = hamsuchasgi(temp->right, key, sapze);
    }
    return temp;
}
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        Node *temp = (Node *)malloc(sizeof(Node));
        char lr[100];
        int p;
        scanf("%d %d %s", &p, &temp->data, lr);
        if (strcmp(lr, "l") == 0 && !(p > temp->data) && i != 0)
        {
            printf("에러다");
            return 0;
        }
        else if (strcmp(lr, "r") == 0 && !(p <= temp->data) && i != 0)
        {
            printf("에러다");
            return 0;
        }
        temp->left = NULL;
        temp->right = NULL;
        if (i == 0)
        {
            head = temp;
        }
        else
        {
            createNode(find(head, p), temp, lr);
        }
    }
    printf("삽입 할꺼면 1, 제거할꺼면 2,아무것도 안할려면 3를 입력하시오\n");
    int sapze;
    scanf("%d", &sapze);
    if (sapze == 1)
    {
        int sapkey;
        scanf("%d", &sapkey);
        hamsuchasgi(head, sapkey, sapze);
    }
    else if (sapze == 2)
    {
        int zekey;
        scanf("%d", &zekey);
        head = hamsuchasgi(head, zekey, sapze);
    }
    printf("높이를 구할꺼면 1, 최저 공통 조상을 찾을려면2를 입력하시오\n");
    int nopE;
    Node *cul = head;
    scanf("%d", &nopE);
    if (nopE == 1)
    {
        printf("%d\n", getH(cul));
    }
    else if (nopE == 2)
    {
        int node[2];
        scanf("%d %d", &node[0], &node[1]);
        printf("%d\n", Nodechasgi(head, node[0], node[1]));
    }
    jungwi(head);
    printf("\n");
    wuwi(head);
}