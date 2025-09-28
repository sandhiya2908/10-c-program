#include <stdio.h>
int main() {
    int year=2024;
    if((year%400==0)||(year%4==0 && year%100!=0))
        printf("%d is Leap Year\n",year);
    else
        printf("%d is Not Leap Year\n",year);
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> cbf06b08628f1286dd4c81c59c9d16fc19201821
