//
// Created by Dmitry Morozov on 29/6/22.
//
#include <string>
#include <map>
#include <iostream>
#include <set>
#include <cassert>
#include <vector>
#include <algorithm>
class Solution {
public:
bool isSubsequence(std::string s, std::string t) {
int j=0;
int i=0;
while (i<s.size()&& j<t.size()){
    if (s[i]==t[j]){
        i+=1;
    }
    j+=1;
}
if (i==s.size())
return true;
else return false;
    
