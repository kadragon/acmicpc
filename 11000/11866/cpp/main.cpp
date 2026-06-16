//
// Created by kangdonguk on 2020/04/28.
//

// https://www.acmicpc.net/problem/11866
// 요세푸스 문제 0

#include <cstdio>
#include <cstdlib>

typedef struct NODE {
    int data;
    struct NODE *next;
} node;

node *list, *last;

void add(int key) {
    node *new_node = (node *) malloc(sizeof(node));
    new_node->data = key;
    new_node->next = nullptr;

    if (list == nullptr) {
        list = new_node;
        last = new_node;
    } else {
        last->next = new_node;
        last = new_node;
    }
}

int main() {
    int n, k, c = 1;
    scanf("%d %d", &n, &k);

    printf("<");

    if (k == 1) {
        for (int i = 1; i < n; i++)
            printf("%d, ", i);
        printf("%d>", n);
        return 0;
    }

    for (int i = 1; i <= n; i++)
        add(i);

    last->next = list;

    node *now_node = list;
    while (list != nullptr) {
        if (now_node == now_node->next) {
            printf("%d>", now_node->data);
            break;
        }

        while (c < k - 1) {
            now_node = now_node->next;
            c++;
        }

        printf("%d, ", now_node->next->data);
        now_node->next = now_node->next->next;
        now_node = now_node->next;
        c = 1;
    }
}