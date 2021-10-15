//http://www.cplusplus.com/reference/cassert/
#include <assert.h>
#include <iostream>

int test_assert ( int x )
{
   assert( x <= 7 );
   return x;
}

int main ( void ) 
{
    int i;
    
    for (i=0; i<=10; i++){
        test_assert( i );
        std::cout << i;
    }

  return 0;
}


