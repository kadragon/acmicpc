// https://www.acmicpc.net/problem/17413
// 단어 뒤집기 2

#include <cstdio>
#include <stack>

std::stack<char> st;

void st_empty() {
    while (!st.empty()) {
        printf("%c", st.top());
        st.pop();
    }
}

int main() {
    char s[100001];
    int p = 0;
    scanf("%[^\n]s", s);
    for (int i = 0; s[i]; i++) {
        if (s[i] == '<') {
            st_empty();
            p = 1;
        }

        if (p) {
            printf("%c", s[i]);
            if (s[i] == '>')
                p = 0;
        } else {
            if (s[i] == ' ') {
                st_empty();
                printf(" ");
            } else
                st.push(s[i]);
        }
    }
    st_empty();
}