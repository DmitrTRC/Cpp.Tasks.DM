//
// Created by Dmitry Morozov on 29/6/22.
//
#include <iostream>


using std::cout;
using std::endl;
using std::string;

class Solution3 {
public:
    bool isSubsequence (string s, string t) {
        class Solution {
        public:
            bool isSubsequence (string s, string t) {
                const char *s_ptr = s.c_str ();
                const char *t_ptr = t.c_str ();
                while (*t_ptr) *s_ptr - *t_ptr++ ? 0 : s_ptr++;
                return  !*s_ptr;
            }
        };

    }
};



class Solution2 {
public:
    bool isSubsequence (string s, string t) {
        auto itt = t.begin (), its = s.begin ();
        while (itt != t.end ()) {
            if (!(*its - *(itt++)))its++;
            if (its == s.end ()) break;
        }
        return its == s.end ();
    }
};
