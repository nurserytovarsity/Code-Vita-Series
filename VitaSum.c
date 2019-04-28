#include <stdio.h>


    long double factorial( int t) {
        long double fact = 1;
        int i;
        for ( i = 1; i<= t; i++)
          fact = fact * i;
        return( fact);
    }
    int combination ( int n, int r) {
        return( factorial( n) / (factorial( r) * factorial(n- r) ) ) ;
    }

     int main() {
        int n , r;
        int i=0,vitaSum=0;
        scanf("%d%d",&n,&r);
        if(n>=r)
        {
        while( n>=i&&i<=r) {
            vitaSum+=combination(n,i);
            i+=2;
        }
        }
        printf("%d",vitaSum);
        return 0;
    }
