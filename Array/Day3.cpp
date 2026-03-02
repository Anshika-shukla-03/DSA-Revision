// Brute force approach

// for each i int 1....N linearly search in array


#include<bits/stdc++.h>
using namespace std;

// int missingNumber(vector<int>&a,int N){
//     for(int i=1;i<=N;i++){ // outer loop run 1 to N
//         // flas variable to check if an element exists
//         int flag = 0;

//         // search element using linear search
//         for(int j=0; j<N-1; j++){
//             if(a[j] == i)
//                 flag = 1;
//                 break;
//         }
//         // check if element is miissing
//         if(flag == 0)
//             return i;
//     }
//     return -1;
    
// }

// int missingNumber(vector<int>&a, int N) { 
 
//     // Outer loop that runs from 1 to N: 
//     for (int i = 1; i <= N; i++) { 
 
//         // flag variable to check 
//         //if an element exists 
//         int flag = 0; 
 
//         //Search the element using linear search: 
//         for (int j = 0; j < N - 1; j++) { 
//             if (a[j] == i) { 
 
//                 // i is present in the array: 
//                 flag = 1;
//                  break; 
//             } 
//         } 
 
//         // check if the element is missing 
//         //i.e flag == 0: 
 
//         if (flag == 0) return i; 
//     } 
 
//     // The following line will never execute. 
//     // It is just to avoid warnings. 
//     return -1; 
// }

// int main() 
// { 
//     int N = 6; 
//     vector<int> a = {1, 2, 3, 4,5}; 
//     int ans = missingNumber(a, N); 
//     cout << "The missing number is: " << ans << endl; 
//     return 0; 
// }



// // Count Maximum Consectutive One's in the array

// // hum array ko traverse krte hue ak counter count rakhange jo btata h abhi tk kitne consecutive 1's chl rahe h 
// // jb one mile to count++ aur zero mile oth count = 0
// // hr step me maxi = max(maxi,count) krange

// class Solution{
//     public:
//         int findMaxConsecutiveOnes(vector<int>& nums){
//         int count = 0;
//         int maxi = 0;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i] == 1){
//                 count++;
//             }
//             else{
//                 count = 0;
//             }
//             maxi = max(maxi,count);
//         }
//         return maxi;
//     }
// };

// int main()
// {
//     vector<int>nums = {1,1,0,1,1,1,1};
//     Solution obj;
//     int ans = obj.findMaxConsecutiveOnes(nums);
//     cout<<"The maximum consecutive 1's are "<<ans;
//     return 0;
// }

// // T.C = o(N) S.C = o(1)

// // Find the numbers that appears once,and the other numbers twice

// // Brute force approach

// int getSingleElement(vector<int> &arr){
//     int n = arr.size();

//     for(int i=0;i<n;i++){
//         int num = arr[i];
//         int count = 0;
        
//         for(int j=0; j<n; j++){
//             if(arr[i] == num){
//                 count++;
//             }

//             if(count == 1)
//                 return num;

//             return -1;
//         }
//     }
// }



// // Using unordered_map

// int getSingleElement(vector<int> &arr){
//     int n = arr.size();
//     map<int,int>mp;

//     for(int i=0; i<n; i++){
//         mp[arr[i]]++;
//     }

//     for(auto it : mp){
//         if(it.second == 1)
//             return it.first;
//     }

//     return -1;
// }


// // XOR method
// // a ^ a = 0 
// // a ^ 0 = a 
// int getSingleElement(vector<int> &arr){
//     int n = arr.size();
//     int xorr = 0;
//     for(int i=0; i<n; i++){
//         xorr = xorr^arr[i];
//     }
//     return xorr;
// }
// int main(){
//     vector<int> arr = {5,1,2,1,2};

//     int ans = getSingleElement(arr);
//     cout<<"The single element is: "<<ans<<endl;
//     return 0;
// }

// // T.C = O(N) , S.C = O(1)


