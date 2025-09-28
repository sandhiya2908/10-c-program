#include <stdio.h>
int main() {
    int arr[]={1,2,3,4,5}, i, sum=0;
    for(i=0;i<5;i++) sum+=arr[i];
    printf("Sum = %d\n",sum);
    return 0;
}
