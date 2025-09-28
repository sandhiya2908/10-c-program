#include <stdio.h>
int main() {
    int n=121, rev=0, temp=n;
    while(n>0){ rev=rev*10+n%10; n/=10; }
    if(temp==rev) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> cbf06b08628f1286dd4c81c59c9d16fc19201821
