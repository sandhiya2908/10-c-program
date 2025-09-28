#include <stdio.h>
int main() {
    int n=121, rev=0, temp=n;
    while(n>0){ rev=rev*10+n%10; n/=10; }
    if(temp==rev) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}