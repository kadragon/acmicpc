//
// Created by kangdonguk on 2020/03/06.
//

// https://www.acmicpc.net/problem/11650
// 좌표 정렬하기

#include <stdio.h>

struct p {
    int x;
    int y;
};

void swap(p *a, p *b) {
    p t = *a;
    *a = *b;
    *b = t;
}

void quick_sort(p arr[], int s, int e) {
    int point = s;
    for (int i = s + 1; i <= e; i++) {
        if (arr[s].x > arr[i].x or (arr[s].x == arr[i].x and arr[s].y > arr[i].y)) {
            point++;
            if (point != i)
                swap(&arr[point], &arr[i]);
        }
    }

    swap(&arr[s], &arr[point]);

    if (point - 1 - s > 0)
        quick_sort(arr, s, point - 1);
    if (e - (point + 1) > 0)
        quick_sort(arr, point + 1, e);
}

int main() {
    int n;
    scanf("%d", &n);

    p arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d %d", &arr[i].x, &arr[i].y);

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d %d\n", arr[i].x, arr[i].y);

    return 0;
}
