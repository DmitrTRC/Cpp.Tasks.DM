//
// Created by Dmitry Morozov on 18/6/22.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int>runningNums;
        int tmp=0;
        for (int i=0;i<nums.size();i++){
            tmp+=nums[i];
            runningNums.push_back(tmp);
        }
        for (auto i:runningNums)
           cout<<i<<" ";
        return runningNums;
        
    }
};
int main()
{
    Solution run;
   vector<int>num={1,2,3,4};
   vector<int>num2={1,1,1,1,1};
   run.runningSum(num);
   cout<<"\n";
   run.runningSum(num2);
}
