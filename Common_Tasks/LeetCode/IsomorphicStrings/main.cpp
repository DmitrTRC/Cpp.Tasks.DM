//
// Created by Dmitry Morozov on 29/6/22.
//

#include <string>
#include <map>
#include <iostream>
#include <set>


class Solution {
public:
    bool isIsomorphic (std::string s, std::string t) {
        std::map<char, char> cross_table;
        std::set<char> t_set;

        for (int i = 0; i < s.length (); i++) {
            if (cross_table.find (s[i]) == cross_table.end () && t_set.find (t[i]) == t_set.end()) {
                cross_table[s[i]] = t[i];
                t_set.insert(t[i]);
            } else {
                if (cross_table[s[i]] != t[i]) {
                    return false;
                }
            }

        }
        return true;
    }
};

void test(){
    Solution s;
    assert (s.isIsomorphic ("paper", "title") == true);
    assert (s.isIsomorphic ("egg", "add") == true);
    assert( s.isIsomorphic("ba", "aa") == false);
    assert( s.isIsomorphic("ab", "aa") == false);
}

int main () {
    test();
    std::cout << "Test PASSED!" << std::endl;

}