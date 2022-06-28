//
// Created by Dmitry Morozov on 28/6/22.
//
#include <unordered_map>
#include <string>
#include <vector>
#include <iostream>



class Solution {
public:

    bool compareMapsValues (std::unordered_map<char, std::vector<int>> &map1,
                            std::unordered_map<char, std::vector<int>> &map2) {
        auto it_1 = map1.begin ();
        auto it_2 = map2.begin ();
        while (it_1 != map1.end () && it_2 != map2.end ()) {
            if (it_1->second != it_2->second)
                return false;
            it_1++;
            it_2++;
        }

        return true;
    }

    bool isIsomorphic (std::string s, std::string t) {
        std::vector<char> s_chars =s.begin (), t_chars = t.begin ();


        std::unordered_map<char, std::vector<int>> map_s, map_t;
        for (auto it = s.begin (); it != s.end (); it++) {
            map_s[s[it]].push_back (it);
            map_t[t[it]].push_back (it);
        }

        return compareMapsValues (map_s, map_t);
    }
};
int main(){
    Solution sol;
    std::string s = "abb";
    std::string t = "acc";
    std::cout << sol.isIsomorphic (s, t) << std::endl;
    return 0;
}


