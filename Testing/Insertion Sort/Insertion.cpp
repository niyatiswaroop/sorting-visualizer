#include <iostream>
using namespace std;
int main() {
int a[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(a) / sizeof(a[0]);
int i,value,hole;
for(i=1;i<n;i++)
{
    value=a[i];
    hole=i;
    while(hole>0&&a[hole-1]>value)
    {
        a[hole]=a[hole-1];
        hole--;
    }
    a[hole]=value;
}
for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
