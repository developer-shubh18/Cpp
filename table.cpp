#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the size of the table: ";
    // cin>>n;
    // for(int i=1;i<=10;i++){
    //     cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    // }


    // reverse order of even numbers
    // cin>>n;
    // while (n>0)
    // {
    //     cout<<n <<" ";
    //     n--;
    // }
    

    // for(int i=100;i>=50;i--){
    //     if(i%2==0){
    //         cout<<i<<endl;
    //     }
    // }

    //  printing week days using switch case
    // int day;
    // cin>>day;
    // switch (day)
    // {    case 1:
    //     cout<<"Monday";
    //     break;
    //     case 2:
    //     cout<<"tuesday ";
    //     case 3:
    //     cout<<"wednesday";
    //     break;
    // }
    // for(int i =0;i<3;i++){
    //     for(int j=0;j<=3;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(int i =0;i<4;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    // // inverted right angle triangle
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4-i;j++){
    //         cout<<"* ";
    //     }        cout<<endl;
    // }

    // int num;
    // cout<<"Enter a number: ";
    // cin>>num;
    // int count = 0;
   
    // while(num != 0){
    //     num = num/10;
    //     count ++;

    // }

    // cout<<"number of digits: "<<count<<endl;

    // pyramid pattern
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // number pyramid pattern
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=i-1;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    } 
    cout<<endl;
    // number triangle pattern
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }  

     return 0;





}