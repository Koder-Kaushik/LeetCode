// #include<iostream>
// #include<unordered_map>
// using namespace std;
// class Solution {
// public:
//     int romanToInt(string s) {
//         int sum=0;
//         unordered_map<char, int> romanValues = {
//             {'I', 1}, {'V', 5}, {'X', 10}, 
//             {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
//         };

//         for (int i = 0; i < s.size();i++){
//             if(romanValues[s[i]]<romanValues[s[i+1]]){
//                 sum+=romanValues[s[i+1]]-romanValues[s[i]];
//                 i++;
//             }
//             else{
//                 sum+=romanValues[s[i]];
//             }
//         }
//         return sum;
//     }
// };
// int main(){
//     Solution s;
//     cout<<s.romanToInt("MCMXCIV");
//     return 0;
// }

#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        unordered_map<char, int> romanValues = {
            {'I', 1}, {'V', 5}, {'X', 10}, 
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && romanValues[s[i]] < romanValues[s[i+1]]) {
                sum+=romanValues[s[i+1]]-romanValues[s[i]];
                i++;
            } 
            else {
                sum += romanValues[s[i]];  
            }
        }
        return sum;
    }
};

int main(){
    Solution s;
    cout << s.romanToInt("MCMXCIV"); 
    return 0;
}
