#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<arr[0]<<endl;
    int n;
    cout<<"ENTER THE SIZE OF ARR:";
    cin>>n;
    int marks[n];
    int i;
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<"enter marks "<<i<<" = ";
        cin>>marks[i];
    }
    cout<<endl;

    cout<<"marks: ";
    for(int i=1;i<=n;i++){
        cout<<marks[i]<<" ";
    }
    cout<<""<<endl;
    cout<<endl;
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    int minindex =1;
    int maxindex =1;
    for(int i=1;i<=n;i++){//min max
        maximum = max(marks[i],maximum);
    }
    for(int i=1;i<=n;i++){//min max
        minimum = min(marks[i],minimum);
    // if(marks[i]<least){
    //     least = marks[i];
    //     i++; 
}



cout<<"minimum marks = "<<minimum<<endl;
cout<<"maximum marks = "<<maximum<<endl;



    return 0;
}