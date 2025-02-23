//三分法求单峰，两个mid不断缩小范围，这里是每次缩小二分之一的范围
#include <bits/stdc++.h>
using namespace std;
const double eps=1e-6;
int n;
double a[15];
double f(double x){
    double s=0;
    for (int i=n;i>=0;i--) s=s*x+a[i];
    return s;
}
int main(){
    double L,R; scanf("%d%lf%lf",&n,&L,&R);
    for (int i=n;i>=0;i--)  scanf("%lf",&a[i]);
    while (R-L>eps){
        double k=(R-L)/3.0;
        double mid1=L+k,mid2=R-k;
        if (f(mid1)>f(mid2))    R=mid2;
        else    L=mid;
    }
    printf("%.5f\n",L);
    return 0;
}