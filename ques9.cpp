// panendrome number
#include<iostream>
using namespace std;
class solution{
    public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int temp = x;
        int rev = 0;
        while(x>0){
            int rem = x%10;
            rev = rev*10+rem;
            x = x/10;
        }
        if(rev==temp){
            return true;
        }
        return false;
    }
};
int main(){
    solution s;
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<s.isPalindrome(x);
    return 0;
}