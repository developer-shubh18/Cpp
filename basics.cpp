#include<iostream>
using namespace std;
int main(){
    // int a=10;
    // int b=11;
    // int c=a+b;
    // cout << "the sum is "<<c << endl;

    // int a;
    // int b;
    // cout<<"enter a:";
    // cin>>a;
    // cout<<"enter b:";
    // cin>>b;
    // int sum =a+b;
    // cout<<"the sum is:"<<sum<<endl;

    // // unary op
    // int c=10;
    // int d=c++;
    // int e=++c;
    // cout<<d<<" "<<e <<endl;

    // square pattern
    // int n,i,j;
    // n=4;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n;j++){
    //     cout<<"*"<<" ";
    //     } cout<<endl;
    // }

    // characters

    int n,i,j,k;
    n=6;
    // for(i=1;i<=n;i++){
    //     char ch= 'A';
    //     for(j=1;j<=n;j++){
    //     cout<<ch<<" ";
    //     ch =ch+1;
    //     } cout<<endl;
    // }


//     int num =1;
//     for(i=1;i<n;i++){
//         for(j=1;j<n;j++){
//         cout<<num<<" ";
//         num++;
//         }
//          cout<<endl;
//     }
// cout<<"after iteration num value"<<" "<<num<<endl;

// triangle loop
    int num=1;
    for(i=0;i<=n;i++){
        for(j=1;j<=i+1;j++){
        cout<<(i+1)<<" ";
    
        } cout<<endl;
        
    }
    cout<<endl;

    for(i=0;i<n;i++){
        for(k=1;k<=i+1;k++){
        cout<<(num)<<" ";
        num++;
        }
    cout <<endl;
    }
    cout<<endl;


    for(i=0;i<=n;i++){
        char ch='A';
        ch='A'+i;
        for(j=1;j<=i+1;j++){
            
        cout<<(ch)<<" ";
        } 
        cout<<endl;
        
        
    }
    cout<<endl;

    char ch ='A';
    // for(i=0;i<=n;i++){
    //     for(j=1;j<=i+1;j++){    
    //     cout<<(ch)<<" ";
    //     ch++;
    //     } 
    //     cout<<endl;
        
    // }
    // cout<<endl;

    // for(i=0;i<=n;i++){
    //     for(j=1;j<=i+1;j++){
    //     cout<<(j)<<" ";
    
    //     } cout<<endl;
        
    // }
    cout<<endl;
    // floyd's Triangle
    int nums=1;
        for(i=0;i<n;i++){
        for(k=1;k<=i+1;k++){
        cout<<(nums)<<" ";
        nums++;
        }
    cout <<endl;
    }
    cout<<endl;
    // Inverted triangle
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(j=0;j<n-i;j++){
            cout<< (i+1)<<"";
        }
        cout <<endl;
    }
    cout<<endl;
    // charater version!!!!
    cout<<"CHARACTER INVERTED TRIANGLE"<<endl;
    cout<<endl;
    char character='a';
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<" ";
        }
        for(j=0;j<n-i;j++){
            cout<<character<<" ";
            
        }cout<<endl;
    }cout<<endl;

    // Pyramid pattern!!!
    for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        cout<<" ";
    }
    for(j=1;j<=i+1;j++){
        cout<<j;
    }
    for(j=i ;j>0; j--){
        cout<<j;
    }
    cout<<endl;
}
cout<<endl;

// Hollow Diamond pattern
// top part
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        cout<<" ";
    }
    cout<<"*";

    if(i!=0){
        for(j=0;j<2*i-1;j++){
            cout<<" ";
        }
        cout<<"*";   
    }
    cout<<endl;
}
// bottom part
for(i=0;i<n-1;i++){
    for(j=0;j<i+1;j++){
        cout<<" ";
    }
    cout<<"*";

    if(i!=n-2){
        for(j=0;j<2*(n-i)-5;j++){
        cout<<" ";
    }
        cout<<"*";
    }cout<<endl;
}
cout<<endl;
//  Hollow Square
for (i =1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(i==1 ||i==n|| j==1||j==n){
            cout<<("* ");
        }else{
            cout<<("  ");
        }
    }
    cout<<endl;
}
cout<<endl;
// hollow triangle
cout<<"HOLLOW TRIANGLE"<<endl;
for (i =1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(j==1 ||i==n|| i==j){
            cout<<("* ");
        }else{
            cout<<("  ");
        }
    }
    cout<<endl;
}
cout<<endl;
// name Initial
cout<<"NAME INITIALS"<<endl;
cout<<endl;

for(i=1;i<n;i++){
    for(j=1;j<n-i;j++){
        cout<<(" *");
    }
}
    return 0;
}