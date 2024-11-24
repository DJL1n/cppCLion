//双指针实现快速排序，相对于单指针交换次数更少
#include <bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int Partition2(int r[],int low,int high){
    int i=low,j=high,pivot=r[low];
    while (i<j){
        while (i<j&&r[j]>pivot) j--;
        while (i<j&&r[i]<pivot) i++;
        if (i<j)
            swap(r[i++],r[j--]);
        
    }
    if (r[i]>pivot){
        swap(r[i-1],r[low]);
        return i-1;
    }
    swap(r[i],r[low]);
    return i;
}

void QuickSort(int r[],int low,int high){
    if (low<high){
        int mid=Partition2(r,low,high);
        QuickSort(r,low,mid-1);
        QuickSort(r,mid+1,high);
    }
}

int main(){
    int n;
    cin>>n;
    int a[1000];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    QuickSort(a,0,n-1);
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}