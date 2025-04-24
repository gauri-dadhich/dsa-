



#include <bits/stdc++.h>
#include <iostream>
using namespace std;

getlongestsubarray(vector<int>&a, long long k){
    int n=a.size();
    int left=0,right=0;
    long long sum=a[0];
    int maxlen=0;
    while(right<n){
        while9left<=right&& sum>k) {
            sum-=a[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n)sum+=a[right];
    }
    return maxlen;
}
int main(){
    vector<int> a={2,3,4,5,1,9};
    long long k=10;
    int len =getlongestsubarray(a,k);
    cout<<"the length of the longest subarray is: "<<len<<"\n";
    return 0;
}

//to find no which occurs only single time
// class Solution{    
//     public:    
//         int singleNumber(vector<int>& nums){
//         int xorr=0;
// for(int i=0;i<nums.size();i++){
//     xorr=xorr^nums[i];
// }
// return xorr;
//         }

// };
//     int main(){
//         vector <int> nums={1,2,3,4,3,1,4};
//         Solution sol;
//         cout<<sol.singleNumber(nums);
//         return 0;
//     }
        
// class Solution {
//     public:
//         int findMaxConsecutiveOnes(vector<int>& nums) {
//             int count=0;
//             for(int i=0;i<nums.size();i++){
//                 if(nums[i]==1)
//                 count++;
//             }
//             return count;
//         }
//     };
//     int main(){
//         vector<int> nums={1,1,0,0,1,1,1,0};
//     Solution sol;
//     cout<<sol.findMaxConsecutiveOnes(nums);
//     return 0;
//     }
//find the missing number from the array given
// class Solution {
//     public:
//         int missingNumber(vector<int>& nums,int n) {
//             int s=(n*(n+1))/2;
//             int sum=0;
//             for(int i=0;i<nums.size();i++){
//                 sum=sum+nums[i];
//             }
//             int missingnum=s-sum;
//         return missingnum;
//         }
//     };
//     int main()
//     {
//         int n = 5;
//         vector<int> a = {1, 2, 4, 5};
//         Solution Sol;
//         int ans = Sol.missingNumber(a, n);
//         cout << "The missing number is: " << ans << endl;
//         return 0;
//     }
// union
// class Solution {
//     public:
//         vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
//             int n=nums1.size();
//             int m=nums2.size();
//             int i=0;
//             int j=0;
//             vector<int> result;
//             while(i<n && j<m){
//                 if(nums1[i]<=nums2[j]){
//                     if(result.empty() ||result.back() !=nums1[i])
//                     result.push_back(nums1[i]);
//                     i++;
//                 }else{
//                     if(result.empty()||result.back()!=nums2[j])
//                     result.push_back(nums2[j]);
//                     j++;
//                 }
    
//             }
//             while(i<n){
//                  if(result.back()!=nums1[i])
//                     result.push_back(nums1[i]);
//                     i++;
            
//                 }
//                 while(j<m){
//      if(result.back()!=nums2[j])
//                     result.push_back(nums2[j]);
//                     j++;
//                 }
//                 return result;
                
//             }
        
//     };
//     int main() {
//         Solution sol;
//         vector<int> a = {1, 2, 2, 3};
//         vector<int> b = {2, 3, 4, 5};
//         vector<int> ans = sol.unionArray(a, b);
    
//         for (int val : ans) {
//             cout << val << " ";
//         }
//         return 0;
//     }
    
// linear search finding target
// class Solution {
//     public:
//         int linearSearch(vector<int>& nums, int target) {
//             for(int i=0;i<nums.size();i++){
//                 if(nums[i]==target)
//                 return i;
//             }
//         }
//     };
//     int main(){
//         vector<int> nums ={2,3,4,5,3};
//         Solution Sol;
//         cout<<Sol.linearSearch(nums,5);
//         return 0;
    
//     }
//move zero at last
// vector<int> moveZeros(int n, vector<int> a) {
//     int j = -1;
//     //place the pointer j:
//     for (int i = 0; i < n; i++) {
//         if (a[i] == 0) {
//             j = i;
//             break;
//         }
//     }

//     //no non-zero elements:
//     if (j == -1) return a;

//     //Move the pointers i and j
//     //and swap accordingly:
//     for (int i = j + 1; i < n; i++) {
//         if (a[i] != 0) {
//             swap(a[i], a[j]);
//             j++;
//         }
//     }
//     return a;
// }


// int main()
// {
//     vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
//     int n = arr.size();
//     vector<int> ans = moveZeros(n,arr);
//     for (auto &it : ans) {
//         cout << it << " ";
//     }
//     cout << '\n';
//     return 0;
// }

//Left Rotate Array by K Places
// class Solution {
//     public:
//         void rotateArray(vector<int>& nums, int k,int n) {
//     k=k%n;
//     int temp[k];
//     for(int i=0;i<k;i++){
//         temp[i]=nums[i];
//     }
//     for(int i=k;i<n;i++){
//         nums[i-k]=nums[i];
//     }
//     for(int i=n-k;i<n;i++){
//         nums[i]=temp[i-(n-k)];
//     }
//         }
//     };
//     int main(){
//         int n=6;
        
//         int k;
//         cin>>k;
//         vector<int> nums={1,2,3,4,5,6};
//         Solution sol;
//         cout<<"array after rotate"<<endl;
//        sol.rotateArray(nums,k,n);
//        for(int i=0;i<n;i++){
//         cout<<nums[i]<<" ,";
//        }
//     return 0;
//     }
// remove duplicates
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         if (nums.empty()) return 0;
//         int count = 1; // First element is always unique
//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] != nums[i - 1]) {
//                 count++;
//             }
//         }
//         return count;
//     }
// };

// int main() {
//     vector<int> nums = {0, 3, 6, 3, 5, 6};
//     Solution sol;
//     cout << sol.removeDuplicates(nums);
//     return 0;
// }

// class solution {
//     public:
//         bool arraySortedOrNot(int arr[], int n) {
    
//     for(int i=1;i<n;i++){
//         if(arr[i]<arr[i-1]){
//             return false;
//         }
    
//      else{
//      return true;
//     }
//         }
//     }
//     };
//     int main(){
//         int n=5;
//         int arr[]={1,2,3,4,5};
//         solution sol;
    
//     cout<<("%s", sol.arraySortedOrNot(arr, n) ? "True" : "False");
    
//     }
// class Scoutolution {
//     public:
//         bool arraySortedOrNot(int arr[], int n) {
//     bool issorted=true;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             issorted;
//         }else{
//             issorted=false;
//         }
    
//      }
//      if(issorted){
//         cout<<"true"<<endl;
    
    
//         }else{
//             cout<<"false"<<endl;
//         }
//         }
//     };
//     int main(){
//         int n=5;
//         int arr[]={1,2,3,4,5};
//         Solution sol;
//     sol.arraySortedOrNot(arr,n);
    
//     }
//second largest
// class solution{
//     public:
//     int largestElement(vector<int>& nums) {
//                 int greatest=nums[0];
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]>=greatest){
//                 greatest=nums[i];
        
//              }
//          }
//          return greatest;
        
//              }
//     int secondlargest(vector<int> &nums){
// if(nums.size()<2){
//     return -1;
// }
// int largest=nums[0];
// int slargest=-1;
// for(int i=1;i<nums.size();i++){
//     if(nums[i]>largest){
//         slargest=largest;
//         largest=nums[i];
//     }
//     else if(nums[i]<largest && nums[i]>slargest){
//         slargest=nums[i];
//     }
// }
// return slargest;
//     }
// };
//  int main() {
//         vector<int> nums = {8, 8, 8,8,8}; // Test case
//         solution sol;
//             bool allsame=true;
//             for(int i=1;i<nums.size();i++){
//                 if(nums[i]!=nums[0]){
//                     allsame=false;
//                     break;
//                 }
//             }
            
//                 if(allsame) {
//                     cout << "All elements are the same: " << nums[0]
//                          << ", so there is no second largest. Returned: -1" << endl;
//             }else{  
//             cout << "the largest element in nums is"<<sol.largestElement(nums)<<" "<<"Second Largest Element: " << sol.secondlargest(nums) << endl;
//             }
//             return 0;
//         }

    
//greatest of elements

// class Solution {
// public:
//     int largestElement(vector<int>& nums) {
//         int greatest=nums[0];
// for(int i=1;i<nums.size();i++){
//     if(nums[i]>=greatest){
//         greatest=nums[i];

//     }
// }
// return greatest;

//     }
// };
// int main(){
//     vector <int> nums={3,3,6,-16};
//     Solution obj;
// int result = obj.largestElement(nums); 
//     cout << "The largest element is " << result << endl;
//     return 0;
// }
// void merge(vector<int> &arr,int low,int mid,int high){
//   vector<int> temp;
//   int left=low;
//   int right=mid+1;
//   while(low<=mid && right<=high){
//     if(arr[left]<arr[right]){
//       temp.push_back(arr[left]);
//       left++;

//     }else{
// temp.push_back(arr[right]);
// right++;
// }    
//   }

// while(left<=mid){
//   temp.push_back(arr[left]);
//   left++;
// }

// while(right<=high){
//   temp.push_back(arr[right]);
//   right++;
// }
// for(int i=low;i<=high-1;i++){
//   arr[i]=temp[low-i];
// }
// }
// void mergesort(vector <int> &arr,int low,int high){
//   if(low>=high)
//   return;
//   int mid=(low+high)/2;
// mergesort(arr,low,mid);
// mergesort(arr,mid+1,high);
// merge(arr,low,mid,high);
// }
// void selectionsort(int arr[],int n){
//   for(int i=0;i<n-1;i++){
//     int min=i;
//     for(int j=i+1;j<n;j++){
//       if(arr[j]<arr[min]){
//         min=j;
//       }

//     }
//     int temp=arr[min];
//     arr[min]=arr[i];
//     arr[i]=temp;
//   }
//   cout<<"after selection sort"<<endl;
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<"\n";
// }
// void bubblesort(int arr[],int n){
//   for(int i=n-1;i>=0;i--){
//     for(int j=0;j<=i-1;j++){
//       if(arr[j]>arr[j+1]){
//         int temp=arr[j+1];
//         arr[j+1]=arr[j];
//         arr[j]=temp;
//       }
//     }
//   }
//   cout<<"after selection sort"<<endl;
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<"\n";


// }
// void insertionsort(int arr[],int n){
// for(int i=0;i<=n-1;i++){
//   int j=i;
//   while(j>0 && arr[j-1]>arr[j]){
// int temp=arr[j];
// arr[j]=arr[j-1];
// arr[j-1]=temp;
// j--;
//   }
// }
// cout<<"after insertion sort"<<endl;
// for(int i=0;i<n;i++){
//   cout<<arr[i]<<" ";
// }
// cout<<"\n";

// }
// int main(){
//   int arr[]={13,46,24,52,20,9};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   cout<<"before insertion sort"<<"\n";
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";

//   }
//   cout<<"\n";
//   insertionsort(arr,n);
//   return 0;
// }
//   int n;
//   cin>>n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//  map<int, int> mpp;
// for(int i=0;i<n;i++){

//   mpp[arr[i]]++;
// }
// for (auto it: mpp){
//   cout<<it.first<<"->"<<it.second<<endl;
// }

// int q;
// cin>>q;
// while(q--){
//   int no;
//   cin>>no;
//   cout<<mpp[no]<<endl;
// }
// return 0;
// }
// void f(int i,int arr[],int n){
//   if(i>=n/2){
//     return;
//   }
//     swap(arr[i],arr[n-i-1]);
//     f(i+1,arr,n);

  
//}


// void explainpair(){
//   pair<int,int>p={1,3};
//   cout<<p.first<<" "<<p.second;
// }
// int main(){
//   explainpair();
// }

//   pair<int, pair<int,int>> p={1,{3,4}};
//   cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;
// } 
//void explainvector(){
//   vector<int>v;
//   v.push_back(1);
//   v.emplace_back(2);
//   for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
//   }
//   cout<<endl;
// }
//vector<pair<int, int>>vec;
// vec.push_back({1,2});
// vec.emplace_back(1,2);
// vector<int>v;
// v.push_back(1);
// v.push_back(6);
// v.push_back(2);

// vector<int>::iterator it=v.begin();
// for(vector<int>::iterator it=v.begin();it!=v.end();it++ ){
//   cout<<*(it)<<" ";
// }
// }
// int main(){
//   explainvector();
//   return 0;
// }

 //void swap(int a, int b){
// int temp;
// temp=a;
// a=b;
// b=temp;
// }
//  void swap(int *a,int *b){
//     int temp;
//     cout<<"values in parameters "<<a<<" "<<b<<endl;
//     cout<<"values in start "<<*a<<" "<<*b<<endl;
//     temp=*a;
//     *a=*b;
//     *b=temp;
//     cout<<"values at the end "<<*a<<" "<<*b<<endl;
// }
// void swap(int &a,int &b){
//     int temp;
//     cout<<"values in parameters "<<&a<<" "<<&b<<endl;
//     cout<<"values in starting "<<a<<" "<<b<<endl;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<"values at the end "<<a<<" "<<b<<endl;
// }


