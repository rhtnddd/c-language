#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
    char juso[30];
    char jusobibun[30];
} UserData;
int compare_users(const void *a, const void *b) {
    UserData *userA = (UserData *)a;
    UserData *userB = (UserData *)b;
    return strcmp(userA->juso, userB->juso);
}
void search_and_print(UserData users[], int m, char jusocim[]) {
    int left = 0;
    int right = m - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int result = strcmp(jusocim, users[mid].juso);
        if (result == 0) {
            printf("%s\n", users[mid].jusobibun);
            return;
        } else if (result < 0) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
}
int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);
    UserData users[100001];

    for (int i = 0; i < m; i++) {
        scanf("%s %s", users[i].juso, users[i].jusobibun);
    }
    qsort(users, m, sizeof(UserData), compare_users);

    for (int i = 0; i < n; i++) {
        char jusocim[30];
        scanf("%s", jusocim);
        search_and_print(users, m, jusocim);
    }

    return 0;
}