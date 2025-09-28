#include <stdio.h>
int main() {
    int n=17, i, flag=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){ flag=1; break; }
    }
    if(flag==0) printf("%d is Prime\n", n);
    else printf("%d is Not Prime\n", n);
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> cbf06b08628f1286dd4c81c59c9d16fc19201821
