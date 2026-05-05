#include<iostream>
#include<vector>
using namespace std;
// void searchmat(vector<int>, int){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         }
// }

int main()
{
    int mat [3][2]={{1,2},{3,4},{4,5}};
    int rows=3;
    int cols=2;
    int target = 5;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    bool found =false;
    for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(mat[i][j]==target){
                cout<<mat[i][j]<<" "<<endl;
                found = true;
                cout<<"index: "<<i<<" "<<j<<endl;   
            }
            // cout<<"not present ";
        }
    }
    if(!found){
        cout<<"NOT PRESENT"<<endl;
    }
    cout<<endl;
    



    return 0;
}