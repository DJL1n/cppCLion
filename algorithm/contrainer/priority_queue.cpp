#include <bits/stdc++.h>
using namespace std;

priority_queue<int> q1; // 大顶堆
priority_queue<int, vector<int>, greater<int>> q2; // 小顶堆
int a[100005];

int main() {
    int n, m, x;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; i++) {
        scanf("%d", &a[i]);
    }
    int cnt = 1;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x);
        while (cnt <= x) {
            if (!q1.empty() && a[cnt] < q1.top()) {
                q2.push(q1.top());
                q1.pop();
                q1.push(a[cnt]);
            } else {
                q2.push(a[cnt]);
            }
            // 保持堆平衡
            if (q2.size() > q1.size()) {
                q1.push(q2.top());
                q2.pop();
            }
            cnt++;
        }
        // 输出中位数
        printf("%d\n", q1.top());
    }
    return 0;
}