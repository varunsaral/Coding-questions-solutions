//https://leetcode.com/problems/binary-search/

int search(vector<int>& nums, int target) {
         vector<int> :: iterator it2=nums.begin();        
        vector<int> :: iterator it=std :: lower_bound(nums.begin(),nums.end(),target);        
        if(it==nums.end() || *it!=target) return -1;        
            else return (it-it2) ;  
    } 

//Using lower bound for first occurence for getting the positon .

//second version

int search(vector<int>& nums, int target){
  int start = 0, int end =nums.size()-1;
  
  while(start<=end){
    int mid = start+(end-start)/2;
    
    if(nums[mid] == target)
      return mid;
    else if(nums[mid] > target){
      end = mid-1;
    }
    else start=mid+1
  }
  return -1;
}
