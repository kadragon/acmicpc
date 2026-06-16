// https://www.acmicpc.net/problem/4766
// 일반 화학 실험

#include <cstdio>

int main() {
    float f, d;
    scanf("%f", &f);
    while (true) {
        scanf("%f", &d);
        if ((int)d == 999)
            break;
        printf("%.2f\n", d - f);
        f = d;
    }
}