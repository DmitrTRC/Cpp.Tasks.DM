//
// Created by Dmitry Morozov on 28/6/22.
//

#include <set>
#include <map>
#include <iostream>


class Solution {
public:


    bool isIsomorphic (std::string s, std::string t) {

        std::map<char, char> m;
        std::set<char> t_set;
        for (int i = 0; i < s.size (); i++) {
            if (m.find (s[i]) == m.end () && t_set.find (t[i]) == t_set.end ()) {
                m[s[i]] = t[i];
                t_set.insert (t[i]);
            } else {
                if (m[s[i]] != t[i])
                    return false;
            }
        }

        return true;
    }

};


int main () {
    Solution s;
    std::string s1 = "paper";
    std::string s2 = "title";
    assert (s.isIsomorphic (s1, s2) == true);
    assert (s.isIsomorphic ("egg", "add") == true);
    assert (s.isIsomorphic ("","") == true);
    assert (s.isIsomorphic ("deff", "rvee") == true);
    assert (s.isIsomorphic ("ab", "aa") == false);
    assert (s.isIsomorphic ("ab", "ac") == true);

    return 0;
}



