#include <stdio.h>

int main( void )
{
    int counter = 1;

    while ( counter <= 10 ) {
        printf( "%s\n", counter % 2 ? "****" : "++++++++" );
        ++counter;
    }

    return 0;
}
