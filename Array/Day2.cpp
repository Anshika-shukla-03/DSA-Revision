// Left Rotate the Array by One 

#include<bits/stdc++.h>
using namespace std;

// void solve(int arr[],int n){
//     int temp[n];

//     for(int i=1; i<n; i++)
//     {
//         temp[i-1] = arr[i];
//     }
//     temp[n-1] = arr[0];
//     for(int i=0; i<n; i++)
//     {
//         cout << temp[i] << " ";
//     }
//     cout << endl;
// }

// int main() { 
//   int n=5; 
   
//   int arr[]= {1,2,3,4,5}; 
//   solve(arr, n); 
// } 

// // T.C = O(N) , S.C = O(N)

// // Approach 2 (Optimal): In-place Rotation (O(1) space) 

// void solve(int arr[], int n) { 
//   int temp = arr[0]; // storing the first element of array in a variable 
//   for (int i = 0; i < n - 1; i++) { 
//     arr[i] = arr[i + 1]; 
//   } 
//   arr[n - 1] = temp; // assigned the value of variable at the last index 
//   for (int i = 0; i < n; i++) { 
//     cout << arr[i] << " "; 
//   } 
 
// } 
// int main() { 
//   int n=5; 
   
//   int arr[]= {1,2,3,4,5}; 
//   solve(arr, n); 
// } 
 

// //  Rotate array by K elements 

// void Rotate_to_right(int arr[],int n,int k)
// {
//     if(n == 0)
//         return;

//     k = k%n;
    
//     if(k > n)
//         return;

//     int temp[k];

//     for(int i=n-k; i<n; i++)
//     {
//         temp[i-n+k] = arr[i];
//     }
//     for(int i=n-k-1; i>=0; i--)
//     {
//         arr[i+k] = arr[i];
//     }

//     for(int i=0; i<k; i++)
//     {
//         arr[i] = temp[i];
//     }
// }

// int main() 
// { 
//   int n = 7; 
//   int arr[] = {1, 2, 3, 4, 5, 6, 7}; 
//   int k = 2; 
//   Rotate_to_right(arr, n, k); 
//   cout << "After Rotating the elements to right " << endl; 
//   for (int i = 0; i < n; i++) 
//   { 
//     cout << arr[i] << " "; 
//   } 
//   return 0; 
// }


// void Rotate_to_left(int arr[], int n, int k) 
// { 
//   if (n == 0) 
//     return; 
//   k = k % n; 
//   if (k > n) 
//     return; 
//   int temp[k]; 
//   for (int i = 0; i < k; i++) 
//   { 
//     temp[i] = arr[i]; 
//   } 
//   for (int i = 0; i < n - k; i++) 
//   { 
//     arr[i] = arr[i + k]; 
//   } 
//   for (int i = n - k; i < n; i++) 
//   { 
//     arr[i] = temp[i - n + k]; 
//   } 
// } 
// int main() 
// { 
//   int n = 7; 
//   int arr[] = {1, 2, 3, 4, 5, 6, 7}; 
//   int k = 2; 
//   Rotate_to_left(arr, n, k); 
//   cout << "After Rotating the elements to left " << endl; 
//   for (int i = 0; i < n; i++) 
//   { 
//     cout << arr[i] << " "; 

// } 
// return 0; 
// }


// // Move all zeroes to the end of the array

// // ak temp array lenge aur given array ko traverse krange if we get non-zero element so we put in temp array otherwise as it is rakhange then after completion traverse we put the temp in original array

// //  Brute force approach
// class Solution {
//   public:
//     vector<int> moveZeroes(vector<int> & arr){
//       // taking temp array
//       vector<int>temp(arr.size(),0);
//       int index = 0;

//       for(int i=0; i<arr.size(); i++){
//         // if element is non zero so we add in temp
//         if(arr[i] != 0){
//           temp[index] = arr[i];
//           index++;
//         }
//       }

//       // copy temp to original
//       for(int i=0; i<arr.size(); i++){
//           arr[i] = temp[i];
//       }
//       return arr;
//     }
// };

// int main(){
//   vector<int>arr = {0,1,0,3,12,0,0,6,4,3};
//   Solution sol;

//   vector<int> result = sol.moveZeroes(arr);

//   cout<<"Array after moving zeroes:";
//   for(int num : result){
//     cout << num << " ";
//   }
//   cout<<endl;
//   return 0;
// }

// // optimal approach
// // Two pointer approach


// class Solution {
//   public:
//     void moveZeroes(vector<int>& nums){
//       // Pointer to the first zero 
//       // hum j pointer le rahe h use -1 se intilaize kr rahe 
//       int j = -1;

//       for(int i=0; i<nums.size();i++)
//       {
//         if(nums[i] == 0) // zero find kr rahe 
//         {
//           j = i;
//           break;
//         }
//       }
//       if(j == -1) return; // if non zero found 

//       for(int i=j+1; i<nums.size(); i++)
//       {
//         // if current index is non zero so swap with nums[i] ans move j pointer

//         if(nums[i] != 0){
//           swap(nums[i],nums[j]);
//             j++;
//         }
//       }
//     }
// };

// int main() { 
//     Solution sol; 
//     vector<int> nums = {0, 1, 0, 3, 12,6,0,8,7}; 
//     sol.moveZeroes(nums); 
 
//     // Print the result 
//     for (int num : nums) cout << num << " "; 
//     cout << endl; 
//     return 0; 
// } 
// // T.C = O(N) , S.C = O(1)


// Union of two sorted array

// approach-1 using set/map

// In set we get unique element 

// vector<int> findunion(int arr1[],int arr2[],int n,int m)
// {
//   set<int>st;
//   vector<int>Union;
//   for(int i=0; i<n; i++){
//     st.insert(arr1[i]);
//   }

//   for(int i=0; i<m; i++){
//     st.insert(arr2[i]);
//   }
//   for(auto & it:st){
//     Union.push_back(it);
    
//   }
//   return Union;
// }
// // T.C = O((M+N)logn(M+N))

// // using map

// vector < int > FindUnion(int arr1[], int arr2[], int n, int m) { 
//   map < int, int > freq; 
//   vector < int > Union; 
//   for (int i = 0; i < n; i++) 
//     freq[arr1[i]]++; 
//   for (int i = 0; i < m; i++) 
//     freq[arr2[i]]++; 
//   for (auto & it: freq) 
//     Union.push_back(it.first); 
//   return Union; 
// }

// // Better apporach - two pointer

// vector<int>findunion(int arr1[],int arr2[],int n,int m)
// {
//   int i=0,j=0;
//   vector<int>Union;
//   while(i<n && j<m){
//     if(arr1[i] <= arr2[j]){
//       if(Union.size() == 0 || Union.back() != arr1[i])
//         Union.push_back(arr1[i]);
//       i++;
//     }
//     else{
//       if(Union.size() == 0 || Union.back() != arr2[j])
//         Union.push_back(arr2[j]);
//       j++;
//     }
//   }
//   while(i < n){
//     if(Union.back() != arr1[i])
//       Union.push_back(arr1[i]);
//     i++;
//   }

//   while(j<m)
//   {
//     if(Union.back() != arr2[j])
//       Union.push_back(arr2[j]);
//     j++;
//   }
//   return Union;
// }


// int main(){
//   int n = 10, m = 7;
//   int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//   int arr2[] = {2,3,4,4,5,11,12};

//   vector<int>Union = findunion(arr1,arr2,n,m);
//   cout<<"Union of arr1 and arr2 is "<<endl;
//   for(auto & val:Union)
//     cout<< val << " ";
//   return 0;
// }



// // Find the intersection of two sorted array

// vector<int> findintersection(int arr1[],int n1,int arr2[],int n2){
//     vector<int>res;
//     vector<int>visited(n2,0);

//     for(int i=0; i<n1; i++){
//       for(int j=0; j<n2; j++){
//         if(!visited[j] && arr1[i] == arr2[j]){
//             res.push_back(arr1[i]);
//             visited[j] = 1;
//             break;
//         }
//         if(arr2[j] > arr1[i]) break;
//       }
//     }
//     return res;
// }
// // Time: O(n1·n2) 
// // Space: O(n2)


// // Unique intersection

// vector<int >intersectionunique(int arr1[],int n1,int arr2[],int n2){
//   vector<int>result;
//   vector<int>visited(n2,0);

//   for(int i=0; i<n1; i++){
//     if(i>0 && arr1[i] == arr1[i-1])
//       continue;
    
//     for(int j=0; j<n2; j++){
//       if(!visited[j] && arr1[i] == arr2[j]){
//         result.push_back(arr1[i]);
//         break;
//       }
//       if(arr2[j]>arr1[i])
//         break;
//     }
//   }
//   return result;
  
// }

// Two pointer

vector<int>intersectioTwopointer(int a[],int n1,int b[],int n2){
  int i=0 , j=0;

  vector<int>res;
  res.reserve(min(n1,n2));

  while(i<n1 && j<n2){
    if(a[i] == b[j]){
      if(res.empty() || res.back() != a[i]) res.push_back(a[i]);

      int val = a[i];
      while(i<n1 && a[i] == val) i++;
      while(i<n2 && b[j] == val) j++;
    
    } else if(a[i] < b[j]){
      i++;
    } else{
      j++;
    }
  }
  return res;
}