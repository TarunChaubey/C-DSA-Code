void SumEqual(int ind, vector<int> &ds,int sum,int target, int arr[], int n){

//     if(ind == n){

//         if(sum==target){
//             for(auto it:ds) cout<<it<<" ";
//             cout<<endl;
//         }
//         return;
//     }

//     ds.push_back(arr[ind]);
//     sum +=arr[ind];
//     SumEqual(ind+1,ds,sum,target,arr,n);
//     sum -= arr[ind];
//     ds.pop_back();

//     // Pick or pick Not
//     SumEqual(ind+1,ds,sum,target,arr,n);    

// }