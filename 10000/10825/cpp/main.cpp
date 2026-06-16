// https://www.acmicpc.net/problem/10825
// 국영수

#include <algorithm>
#include <cstdio>
#include <string.h>

using namespace std;

typedef struct STUDENT {
    char name[11];
    int kor;
    int eng;
    int math;
} student;

student students[100000];

static bool compare(const student s1, const student s2) {
    int a, b;
    a = s1.kor * 1000 * 1000 + (100 - s1.eng) * 1000 + s1.math;
    b = s2.kor * 1000 * 1000 + (100 - s2.eng) * 1000 + s2.math;

    return a == b ? strcmp(s1.name, s2.name) < 0 : a > b;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s %d %d %d", students[i].name, &students[i].kor, &students[i].eng, &students[i].math);

    sort(students, students + n, compare);

    for (int i = 0; i < n; i++)
        printf("%s\n", students[i].name);
}
