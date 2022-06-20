//
// Created by Dmitry Morozov on 18/6/22.
//

#include "main.cpp"
#include "test.hpp

void test_sum_elements() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = solution.runningSum(nums);
    ASSERT_EQ(result, vector<int>({1, 3, 6, 10}));

int main() {

}