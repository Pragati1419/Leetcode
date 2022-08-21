class Solution {
public:
    int getPivot(vector <int>& arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else
            e=mid;
        mid=s+(e-s)/2;
    }
    return s;
}

int binarySearch(vector <int>& arr,int start,int end,int key){
    int s=start;
    int e=end;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        else s=mid+1;
        mid=s+(e-s)/2;
    }
    return -1;
}


    int search(vector<int>& nums, int target) {
           int n=nums.size()-1;
    int pivot=getPivot(nums);
    if(target>=nums[pivot] && target<=nums[n]){
        return binarySearch(nums,pivot,n,target);
    }
    else return binarySearch(nums,0,pivot-1,target);
    }
};