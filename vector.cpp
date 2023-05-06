#include<iostream>
#include<vector>
using namespace std;
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        int k = 0;
        vector<int> nums3;
        while(i<m && j<n)
        {
            if(nums1[i]==0)
            {
                i++;
            }
            else if(nums2[j]==0)
            {
                j++;
            }
            else if(nums1[i]<nums2[j])
            {
               nums3.push_back(nums1[i++]);
            }
        
           else
           {
                nums3.push_back(nums2[j++]);
           }
        }
    while(i<n)
    {
                    nums3.push_back(nums1[i++]);
                    
    }
    while(j<m)
    {
                nums3.push_back(nums2[j++]);
    
    }
    cout<<" printing the vector "<<endl;
    for(int i  = 0; i<nums3.size(); i++)
    {
        cout<<nums3[i]<<" ";
    }
    cout<<endl;
    }      
    int main()
    {
        vector<int> nums1;
        vector<int> nums2;
        nums1.push_back(1);
        nums1.push_back(2);
        nums1.push_back(3);
        nums1.push_back(0);
        nums1.push_back(0);
        nums1.push_back(0);
        nums1.push_back(5);
        nums1.push_back(8);
        nums1.push_back(0);
        nums2.push_back(0);
        nums2.push_back(8);
        nums2.push_back(4);
        nums2.push_back(3);
        nums2.push_back(1);
        nums2.push_back(0);
        nums2.push_back(0);
       int n,m;

      merge(nums1,m,nums2,n);

        
    }