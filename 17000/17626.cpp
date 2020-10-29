// https://www.acmicpc.net/problem/17626
// Four Squares

#include <cstdio>
#include <math.h>

int n, min = 5;

void f(int p, int k) {
    if (k >= min)
        return;

    if (p == 0) {
        if (min > k)
            min = k;
        return;
    }

    for (int i = (int)sqrt(p); i > 0; i--)
        f(p - i * i, k + 1);
}

int main() {
    scanf("%d", &n);
    f(n, 0);

    printf("%d", min);
}

/* 
[입력]
입력은 표준입력을 사용한다. 입력은 자연수 n을 포함하는 한 줄로 구성된다. 여기서, 1 ≤ n ≤ 50,000이다.

[출력]
출력은 표준출력을 사용한다. 합이 n과 같게 되는 제곱수들의 최소 개수를 한 줄에 출력한다.

[결과]
1
*/