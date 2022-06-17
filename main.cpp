

#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int vectorSize=nums.size();
    int min=0;
    int max=vectorSize;
    while(!(min>=max)){
        int index=(min+max)/2;
        if(nums.at(index)==target){
            return index;
        }
        else if(nums.at(index)>target){
            max=index;
        }
        else{
            min=index;
        }
        if(max-min==1 && nums.at(min)<target){
            return max;
        }
        else if(max-min==1 && nums.at(min)>target){
            return min;
        }
    }
    return max;
}

 // Driver code
 int main()
 {
    vector<int> nums2{1,3,5,6};

    //cout<<"deneme"<<searchInsert(nums2,3);
    cout<<"deneme"<<endl<<searchInsert(nums2,2);
    cout<<"deneme"<<endl<<searchInsert(nums2,7);
     cout<<"deneme"<<endl<<searchInsert(nums2,0);

    return 0;
 }


