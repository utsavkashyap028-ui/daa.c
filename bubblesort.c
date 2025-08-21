#include <stdio.h>

int main () {
    int nfirst = 0, second = 1 , next , i;
    printf ("enter the number of terms:");
    scanf ( "%d", &nfirst ); 
    printf ("fibonacci series: %d %D", nfirst, second);
    for (i=2; i < nfirst; ++i) {
        next = nfirst + second;
        printf("%d", next);
        nfirst = second;
        second = next;
    }
    printf("\n");
    return 0;
 }


