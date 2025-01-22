#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec = {1,2,0,0,0,1,1,2,0,2,1,0,0,2,2,2,1,1,0,2};
    int n = vec.size();
    int zero = 0;
    int one =0 ;
    int two =0 ;
    for(int i =0; i<n;i++){
        if(vec[i]==0){
            zero++;
        }
        else if(vec[i]==1){
            one++;
        }
        else{
            two++;
        }
    }
    for(int i =0;i<n;i++){
if(i<zero){
    vec[i]=0;
}
else if(i<zero+one){
    vec[i]=1;
}
else{
    vec[i]=2;
}
    }
    for(int i =0;i<n;i++){
        cout<<vec[i]<<" ";
            }
    return 0;
}
// dutch national flag algorithm