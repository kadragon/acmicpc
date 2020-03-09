//
// Created by kangdonguk on 2020/03/06.
//

// https://www.acmicpc.net/problem/1181
// 단어 정렬

#include <stdio.h>
#include <string.h>

char str[20001][51];
int v[20001];
int len[20001];

void merge(int s, int e) {
    if (s == e)
        return;

    int m = (e + s) / 2;
    int arr[e - s + 1];
    int i = s, j = m + 1;
    int k = 0;

    while (i <= m and j <= e)
        if (len[v[i]] < len[v[j]] or (len[v[i]] == len[v[j]] and strcmp(str[v[i]], str[v[j]]) < 0))
            arr[k++] = v[i++];
        else
            arr[k++] = v[j++];

    while (i <= m)
        arr[k++] = v[i++];

    while (j <= e)
        arr[k++] = v[j++];

    for (int u = s; u <= e; u++)
        v[u] = arr[u - s];
}

void merge_sort(int s, int e) {
    int m = (e + s) / 2;

    if (s < e) {
        merge_sort(s, m);
        merge_sort(m + 1, e);
        merge(s, e);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
        v[i] = i;
        len[i] = strlen(str[i]);
    }

    merge_sort(0, n - 1);

    for (int i = 0; i < n; i++) {
        if (i > 0 and strcmp(str[v[i]], str[v[i - 1]]) == 0)
            continue;

        printf("%s\n", str[v[i]]);
    }

    return 0;
}
