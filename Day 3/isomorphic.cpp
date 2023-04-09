/**
 * @brief
 * Given two strings s and t , return if the
 * 2 strings are isomorphic or not.
 *
 * Time Complexity -> O(n)
 * Space Complexy -> O(1)
 *
 * @author : Rahul Yadav
 * @date : 25-02-2023
 */

#include <iostream>
#include <unordered_map>

bool isomorphic(const std::string &s, const std::string &t)
{
    std::unordered_map<char, char> s_hash, t_hash;
    if (s.length() != t.length())
    {
        return false;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s_hash.find(s[i]) == s_hash.end())
        {
            s_hash.insert(std::make_pair(s[i], t[i]));
        }
        if (t_hash.find(t[i]) == t_hash.end())
        {
            t_hash.insert(std::make_pair(t[i], s[i]));
        }
        if (t[i] != s_hash[s[i]] || s[i] != t_hash[t[i]])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::string s = "aaca";
    std::string t = "bbdb";
    std::cout << "\nResult : \n";
    std::cout << (isomorphic(s, t) ? "true" : "false") << std::endl;
    return 0;
}