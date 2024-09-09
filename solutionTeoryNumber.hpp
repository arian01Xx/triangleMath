#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

class SolutionFourtyOne{
public:
	int triangleNumber(vector<int>& nums){
		/* a+b>c
		   a+c>b
		   b+c>a */
		int n=nums.size();
		int c=0;
		sort(nums.begin(), nums.end());
		for(int i=0; i<nums.size(); i++){
			for(int j=i+1; j<nums.size(); j++){
				int k=j+1;
				while(k<n && nums[i]+nums[j]>nums[k]) ++k;
				c += k-j-1;
			}
		}
		return c;
	}
};

#endif