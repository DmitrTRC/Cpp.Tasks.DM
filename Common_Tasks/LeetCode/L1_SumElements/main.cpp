//
// Created by Dmitry Morozov on 18/6/22.
//
#include <iostream>
#include <vector>

//Conclusion : Great job!

using namespace std;

class Solution {
public:
    vector<int> runningSum (vector<int> &nums) {
        vector<int> runningNums;
        int tmp = 0;
        for (int i = 0; i < nums.size (); i++) {
            tmp += nums[i];
            runningNums.push_back (tmp);
        }
        // Look! You have to use it only for debug purposes! Test will be passed without it! :)
        // Almost time test crashes if you use it!
        //Right way to test your code outside the class.

//        for (auto i:runningNums)
//           cout<<i<<" ";

        return runningNums; //Right way just return runningNums. Ok

    }
};

//It's more comfortable to write separate print function for debug purposes.
void printResult (const vector<int> &result) {
    for (auto i: result)
        std::cout << i << " ";
    std::cout << std::endl;
}


int main () {
    Solution run;
    vector<int> num = {1, 2, 3, 4}; // Ok! But not necessary :)
    vector<int> num2 = {1, 1, 1, 1, 1};
    // You can write it shorter:
//    printResult ({1, 3, 6, 10});
//    printResult ( {1, 1, 1, 1, 1});

    printResult (run.runningSum (num));//
    printResult (run.runningSum (num2));

}
