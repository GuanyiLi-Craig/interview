/****************************************************************************************************
                                   7. Reverse Integer
-----------------------------------------------------------------------------------------------------

Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321
****************************************************************************************************/

class Solution 
{
public:
    int reverse(int x) 
    {
        int r=0;
    	while(1)
    	{
    		if (r>214748364 || r<-214748364) return 0;
    		r*=10;

    		r+=x%10;
    		x/=10;
    		if (x==0) break;
    	}    
    	return r;
    }
};