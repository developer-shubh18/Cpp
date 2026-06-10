#include<iostream>
#include<vector>
using namespace std;
void divisible5(int n){
    if(n%5==0){
        cout<<"True" <<endl;
    }
    else{
         cout<<"False" <<endl;
    }
}
int splitAmt(int amt , int noofpersons){
    if(amt%noofpersons==0){
        return amt/noofpersons;
    }
    else{
        return -1;
    }
}
string printsentence(string s){
    for(int i = 1; i < s.size(); i++){
        if(s[i-1] == '.' && i+1 < s.size()){
            i++; // skip space after '.'
            s[i] = toupper(s[i]);
        }
    }
    if(!s.empty()) s[0] = toupper(s[0]); // capitalize first letter
    cout << s << endl;
    return s;
}
void displaycard(vector<int>& cardno){
    for(int i = 0; i < 8; i++)
        cout << '*';
    for(int i = 8; i < 12; i++)
        cout << cardno[i];
    cout << endl;
}

int main(){
    cout<<splitAmt(100,5)<<endl;
    divisible5(10);  
    printsentence("Shubham. this is cpp. hello");
    vector<int> cardno;
    for(int i =0;i<12;i++){
        int digit;
        cin>>digit;
        if(digit < 0 || digit > 9){
        cout << "Invalid! Enter a single digit (0-9): ";
        i--;  // retry same position
        continue;
    }
        cardno.push_back(digit);
    }
    displaycard(cardno);

    return 0;
}