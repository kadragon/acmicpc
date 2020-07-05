// https://www.acmicpc.net/problem/2161
// 카드1

#include <cstdio>
#include <cstdlib>

typedef struct NODE {
    int n;
    NODE *next;
} node;

node *list, *last;

void add(int n) {
    node *n_node = (node *)malloc(sizeof(node));
    n_node->n = n;
    n_node->next = nullptr;

    if (list == nullptr) {
        list = n_node;
        last = n_node;
        last->next = list;
    } else {
        last->next = n_node;
        last = n_node;
        last->next = list;
    }
}

int main() {
    int n, k = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        add(i);
    }

    while (true) {
        printf("%d ", list->n);
        if (list == last)
            break;
        last->next = list->next;
        last = last->next;
        list = list->next->next;
        last->next = list;
    }
}