#include<iostream>
#include<vector>
using namespace std;

int rowwithmaxsum(vector<vector<int>>arr){
int maxrow=0;

    for(int i = 0;i<arr.size();i++){
        for(int j=1;j<arr[i].size();j++){
            arr[i][j]+=arr[i][j-1];
        }
        if(i>0){
            if(arr[i][arr[i].size()-1]>arr[i-1][arr[i].size()-1])
            maxrow=i;
        }
    }
return maxrow+1;
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
cout<<rowwithmaxsum(arr);


return 0;
}