// Find the Largest Element in an array

// Input: arr[] = [1, 8, 7, 56, 90]
// Output: 90

// Input: arr[] = [5, 5, 5, 5]
// Output: 5

// Approach - 1 -> sorting first sort the array then find largest element through indexing

#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1]; // last index
}

int main(){
    vector<int>arr1 = {2,5,1,3,10};
    vector<int>arr2 = {5,5,5,5};

    cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl; 
    cout<<"The Largest element in the array is: "<<sortArr(arr2); 
    
   
    return 0;
}

// Time complexity = 0(N*log(N)) , Space complexity = o(1)

// Approach - 2 comparision 

#include<bits/stdc++.h>
using namespace std;

int FindLargestElement(int arr[],int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr1[] = {2,5,1,3,0};
    int n = 5;
    int max = FindLargestElement(arr1,n);
    cout<< "the largest element in the array is:"<<max<<endl;
    return 0;
}

// Time complexity : o(n), space complexity : o(1);

// Find the Smallest element

#include<bits/stdc++.h>
using namespace std;

int sortArray(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[0];
}

int main(){
    vector<int>arr1 = {2,5,1,3,10};
    vector<int>arr2 = {5,5,5,0};

    cout<<"The Smallest element in the array is: "<<sortArray(arr1)<<endl; 
    cout<<"The Smallest element in the array is: "<<sortArray(arr2); 
    
   
    return 0;
}

// Approach - 2

#include<bits/stdc++.h>
using namespace std;

int FindSmallestElement(int arr[],int n){
    int min = arr[0];

    for(int i=0; i<n; i++){
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr1[] = {4,14,24,4,14};
    int n = 5;
    int min = FindSmallestElement(arr1,n);
    cout<< "the Smallest element in the array is:"<<min<<endl;
    return 0;
}


// find the Second Largest and Second Smallest Element

// Brute force approach -> sorting but this approach is not efficient beacuse it fails when we have duplicate element

#include<bits/stdc++.h>
using namespace std;

int SecondSmallestAndSecondLargest(int arr[],int n){
    sort(arr,arr+n);
    int small = arr[0];
    int large = arr[n-2];
}

int main()
{
    // int arr1[] = {4,14,24,4,14};
    // int arr2[] = {4,5,2,1,6};
    int arr1[] = {5,6,4,1,2};
    int arr2[] = {9,5,7,8,3};
    int n = 5;
    int small = SecondSmallestAndSecondLargest(arr1,n);
    cout<< "the Second Smallest element in the array is:"<<small<<endl;
    int large = SecondSmallestAndSecondLargest(arr2,n);
    cout<< "the Second Largest element in the array is:"<<large<<endl;
    return 0;
   
}


// Two Pass Approach

#include<bits/stdc++.h>
using namespace std;

void getElements(int arr[],int n)
{
    if(n==0 || n==1)
        cout<<-1<<""<<-1<<endl;
    
    int small = INT_MAX,second_small=INT_MAX;
    int large = INT_MIN,second_large=INT_MIN;

    int i;

    for(i=0;i<n;i++)
    {
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i]<second_small && arr[i] != small)
            second_small = arr[i];

        if(arr[i]>second_large && arr[i] != large)
            second_large = arr[i];
    }

     cout<<"Second smallest is "<<second_small<<endl; 
    cout<<"Second largest is "<<second_large<<endl; 
} 
int main() 
{ 
    int arr[]={1,2,4,6,7,5}; 
    int n=sizeof(arr)/sizeof(arr[0]); 
    getElements(arr,n); 
    return 0; 
} 
 

// Time complexity = o(n)

// Approach-3 optimal(sungle pass)


int secondSmallest(int arr[],int n)
{
    if(n<2)
        return -1;

    int small = INT_MAX;
    int second_small = INT_MAX;

    for(int i = 0; i<n; i++)
    {
        if(arr[i] < small)
        {
            second_small = small;
            small = arr[i];
        }
        else if(arr[i] < second_small && arr[i] != small)
        {
            second_small = arr[i];
        }
    }

    return second_small;
}

int secondLargest(int arr[],int n)
{
    if(n<2)
        return -1;

    int large = INT_MIN;
    int second_large = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(arr[i] > large){
            second_large = large;
            large = arr[i];
        }
        else if(arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }

    }
    return second_large;
}

int main()
{
    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int secondsmallest = secondSmallest(arr,n);
    int secondlargest = secondLargest(arr,n);

    cout<<"Second Smallest is "<<secondsmallest<<endl;
    cout<<"Second largest is "<<secondlargest<<endl;
    return 0;
}


// Check if an array is sorted

// Brute force approach

bool isSorted(int arr[],int n)
{
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[i])
                return false;
        }
    }

    return true;
}

int main()
{
    int arr[] = {1,2,3,4,5}, n=5;
    bool ans = isSorted(arr,n);
    if(ans) cout << "True" << endl;
    else cout << "False" <<endl;
    return 0;
}

// Time Complexity: O(N^2) 
// Space Complexity: O(1)


// Approach - 2 

bool isSorted(int arr[],int n)
{
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1])
            return false;
    }
    return true;
}

int main() { 
 
  int arr[] = {1, 2, 3, 4, 5}, n = 5; 
 
  printf("%s", isSorted(arr, n) ? "True" : "False"); 
 
}

// Time Complexity: O(N) 
// Space Complexity: O(1) 


// Remove Duplicates in-place from Sorted Array

//APPROACH 1: Using unordered_set

class Solution {
    public:
        int removeDuplicates(vector<int>& nums)
        {
            unordered_set<int>st;
            int index = 0;

            for(int num : nums){
                if(st.find(num) == st.end())
                {
                    st.insert(num);
                    nums[index] = num;
                    index++;
                }
            }

            return index;
        }
};

int main() { 
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4}; 
 
    Solution sol; 
    int k = sol.removeDuplicates(nums); 
 
    cout << "k = " << k << "\nArray after removing duplicates: "; 
    for (int i = 0; i < k; i++) { 
        cout << nums[i] << " "; 
    } 
    cout << endl;

}

//T.C = O(N) , S.C = O(N)



// APPROACH 2 (Optimal): Two Pointer Technique

class Solution{
    public:
        int removeDuplicates(vector<int> &nums)
        {
            if(nums.empty())
                return 0;

            int i = 0;

            for(int j=1; j<nums.size(); j++)
            {
                if(nums[j] != nums[i])
                {
                    i++;
                    nums[i] = nums[j];
                }
            }
            return i+1;
        }
};

int main() { 
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4}; 
 
    Solution sol; 
    int k = sol.removeDuplicates(nums); 
 
    cout << "Unique count = " << k << "\n"; 
    cout << "Array after removing duplicates: "; 
    for (int x = 0; x < k; x++) { 
        cout << nums[x] << " "; 
    } 
    cout << endl; 
}

// T.C = O(N) , S.C = O(1)
