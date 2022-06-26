//
// Created by Dmitry Morozov on 21/6/22.
//
#include <iostream>


using namespace std;

#include <vector>


class Solution {
public:
    int pivotIndex (vector<int> &nums) {

        int Rs = 0; // Very nice variable name!
        int Ls = 0; // The same here!
        for (int number: nums) // Absolutely right way to write for loop! You can also use accumulate() function.
        {
            Rs += number;
        }

        for (int i = 0; i < nums.size (); i++) { //pretty nice way!
            Rs -= nums[i];
            if (Ls == Rs)
                return i;
            Ls += nums[i];
        }
        return -1; // you can also use bool variable and only ONE return statement in the end of the function.
    }
};

int main () {
}
