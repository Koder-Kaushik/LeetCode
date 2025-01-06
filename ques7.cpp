#include<iostream>
#include<climits>//climits used for INT_MAX and INT_MIN as it have predefined values for maximum and minimum values of int
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long int temp=x;
        long int rem,rev=0;
        while(temp!=0){
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        if(rev > INT_MAX || rev < INT_MIN) return 0;
        return rev;
    }
};
int main(){
    Solution s;
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<s.reverse(x);
    return 0;
}
// int reverse(int x) {
//     long long temp=x;
//     long long rem,rev=0;
//     while(temp!=0){
//         rem=temp%10;
//         rev=rev*10+rem;
//         temp=temp/10;
//         if(rev > INT_MAX || rev < INT_MIN) return 0;
//     }
//     return (int)rev;
// }
