class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         vector<int>vec;
          int x=*max_element(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
               
                int z=nums2.back();
                if(nums1[i]==nums2[j]){
                 if(nums2[j]==x || nums2[j]==z){
                     vec.push_back(-1);
                 }
                 else{
                     int x=vec.size();
                     if(nums2[j]>nums2[j+1]){
                         int q=j;
                         for(int i=q;i<nums2.size();i++){
                             if(nums2[q]<nums2[i]){
                                 vec.push_back(nums2[i]);
                                 break;
                             }
                           
                             
                         }
                        if(vec.size()==x){
                            vec.push_back(-1);
                        }
                     }
                     else{
                         vec.push_back(nums2[j+1]);
                     }
                 }
                    
                }
            }
        }
        
         return vec;

    }
};