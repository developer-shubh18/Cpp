#include<iostream>
using namespace std;
int swap(int n){
    if(n<10) return n;
    int digits=0;
    int temp=n;
    int first, last ,middle,result;

    while(temp>0){
        // first = temp%10;
        temp = temp/10;
        digits++;
    
    int pow =1;
    for(int i =1;i<digits;i++){
        pow = pow*10;
    }
    int first = n/pow;
    int last = n%10;
    
    
    for(int i =1;i<digits;i++){
        middle =(n%pow)/10;
    }
    result = last*pow+middle*10+first;
}
return result;

}


int main()
{
    int n;
    cin>>n;
 
    cout<<swap(n)<<endl;
    return 0;
}