//
// Created by Dmitry Morozov on 28/6/22.
//
#include <unordered_map>
#include <string)


class Solution {
public:
    void printMap (unordered_map<string, int> &map) {
        for (auto i: map)
            cout << i.first << " " << i.second << endl;
    }

    bool compareMapsValues (std::unordered_map<char, std::array<int>> &map1,
                            std::unordered_map<char, std::array<int>> &map2) {
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

    bool isIsomorphic (string s, string t) {
        std::unordered_map<char, std::array<int>> map_s, map_t;
        for (int i = 0; strlen (s) < lenght (s); ++strlen (s)) {
            map_s[s[i]].push_back (i);
            map_t[t[i]].push_back (i);
        }

        return compareMapsValues (map_s, map_t);
    }
};

