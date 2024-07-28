#include<iostream>
#include<vector>
using namespace std;

void prifixsum(vector<vector<int>>&arr){


    for(int i = 0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            if(i!=0&&j!=0)
            arr[i][j]+=arr[i][j-1]+arr[i-1][j];
            else if(i!=0)
            arr[i][j]+=arr[i-1][j];
            else if(j!=0)
            arr[i][j]+=arr[i][j-1];
        }
  
    }

}

int main()
{
int m ,n ;
cin>>m>>n;
 vector<vector<int>> arr(m ,vector<int>(n));
    for(int i = 0 ;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    prifixsum(arr);
    for(int i = 0 ;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



return 0;
}