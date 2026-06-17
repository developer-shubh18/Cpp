#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_set<int> s;
    int count=0;
    for(int i=0;i<n;i++){
        s.clear();
        for(int j=i;j<n;j++){
            if(s.find(arr[j])!=s.end()){
                break;
            }
            s.insert(arr[j]);
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}