#include<iostream>
#include<vector>
using namespace std;

int maxsumhourglass(vector<vector<int>>arr){

    for(int i = 0;i<arr.size();i++){
        for(int j=1;j<arr[i].size();j++){
            arr[i][j]+=arr[i][j-1];
        }
    }

    int sum=0,maxsum=0;
    for(int i =0;i<=arr.size()-3;i++){
        for(int j=0;j<=arr[i].size()-3;j++){
            if(j!=0)
            sum = arr[i][j+2]-arr[i][j-1]+arr[i+1][j+1]+arr[i+2][j+2]-arr[i+2][j-1]-arr[i+1][j];
            else
            sum = arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j+2]-arr[i+1][j];
        if(sum>maxsum)
        maxsum=sum;
        }
    }
return maxsum;
}

int main()
{
int m ,n ;
cin>>m>>n;
    if(m<3&&n<3){
        cout<<"Incorrect Size";
        return 0;
    }
 vector<vector<int>> arr(m ,vector<int>(n));
    for(int i = 0 ;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

   int ans=maxsumhourglass(arr);
cout<<ans;

return 0;
}