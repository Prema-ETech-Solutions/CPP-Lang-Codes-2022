#include <iostream>
using namespace std;
int main()
{
    /*
        Operator	    Example	       Same As
        =	            x = 5	       x = 5
        +=	            x += 3	       x = x + 3
        -=	            x -= 3	       x = x - 3
        *=	            x *= 3	       x = x * 3
        /=	            x /= 3	       x = x / 3
        %=	            x %= 3	       x = x % 3
        &=	            x &= 3	       x = x & 3
        |=	            x |= 3	       x = x | 3
        ^=	            x ^= 3	       x = x ^ 3
        >>=	            x >>= 3	       x = x >> 3
        <<=	x           <<= 3	       x = x << 3
    */
    int x = 5;
    x += 3;
    cout<<x;
    return 0;
}