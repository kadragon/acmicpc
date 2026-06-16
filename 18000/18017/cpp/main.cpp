// https://www.acmicpc.net/problem/18017
// 총알의 속도

#include <cstdio>
#define c 299792458.0

int main()
{
    long double a, b;
    scanf("%Lf %Lf", &a, &b);
    printf("%.8Lf", (a + b) / (1 + (a * b) / (c * c)));
}
