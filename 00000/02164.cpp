//
// Created by kangdonguk on 2020/04/28.
//

// https://www.acmicpc.net/problem/2164
// 카드2

#include <cstdio>
#include <cstdlib>

typedef struct NODE {
    int data;
    NODE *next;
} node;

node *list, *last;

void add(int a) {
    node *n_node = (node *) malloc(sizeof(node));
    n_node->data = a;
    n_node->next = nullptr;

    if (list == nullptr) {
        list = n_node;
        last = n_node;
    } else {
        last->next = n_node;
        last = n_node;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        add(i);

    last->next = list;

    node *now_node = last;

    while (now_node != now_node->next) {
        now_node->next = now_node->next->next;
        now_node = now_node->next;
    }

    printf("%d", now_node->data);
}