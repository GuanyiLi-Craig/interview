/****************************************************************************************************
                                   75. Sort Colors          
-----------------------------------------------------------------------------------------------------
Given an array with n objects colored red, white or blue, sort them so that objects of the same color 
are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note:
You are not suppose to use the library's sort function for this problem.

click to show follow up.

Follow up:
A rather straight forward solution is a two-pass algorithm using counting sort.
First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number 
of 0's, then 1's and followed by 2's.

Could you come up with an one-pass algorithm using only constant space?
****************************************************************************************************/
#include "problems\problems\Header.h"

namespace std
{

	class Solution {
	public:
	    void sortColors(vector<int>& nums) {
	        // 2 pass
	        int len=nums.size();
	        if (len==0 || len==1) return;
	        int zero=0,one=0,two=0;
	        
	        for(int i=0;i<len;i++)
	        {
	            if (nums[i]==0) zero++;
	            else if (nums[i]==1) one++;
	            else if (nums[i]==2) two++;
	        }
	        
	        int i=0;
	        while(zero>0)
	        {
	            nums[i]=0;
	            i++;
	            zero--;
	        }
	        while(one>0)
	        {
	            nums[i]=1;
	            i++;
	            one--;
	        }
	        while(two>0)
	        {
	            nums[i]=2;
	            i++;
	            two--;
	        }
	    }
	};

	class Solution {
	public:
	    void sortColors1(vector<int>& nums) {
	        // swap 0 and 2
	        int len=nums.size();
	        if(len==0||len==1) return;
	        
	        int l=0,r=len-1;
	        for(int i=0;i<=r;i++)
	        {
	            if (nums[i]==0) swap(nums[i],nums[l++]);
	            else if (nums[i]==2) swap(nums[i--],nums[r--]);
	        }
	    }
	};

}

/****************************************************************************************************
                                             Note
in place one pass. the logic is not that obvious. 
****************************************************************************************************/