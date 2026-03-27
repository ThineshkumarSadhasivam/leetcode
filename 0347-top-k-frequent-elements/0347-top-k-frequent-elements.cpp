class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // int n=nums.size();
        // vector<int>res;
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<n;i++){
        //     if(nums[i]==nums[i-1])
        //     res.push_back(nums[i]);
        // }
        // res.erase(unique(res.begin(),res.end()),res.end());
        // vector<int>ans;
        // for(int i=0;i<k;i++){
        //     ans.push_back(res[i]);
        // }
        // return ans;


    //     vector<int>res;
    //     int mx=*max_element(nums.begin(),nums.end());
    //     vector<int>freq(mx+1,0);
    //     for(int x:nums)
    //         freq[x]++;
        
    //     for(int i=0;i<nums.size();i++){
    //         if(freq[nums[i]]>=k)
    //             res.push_back(nums[i]);
    //     }
    //     res.erase(unique(res.begin(),res.end()),res.end());
    //     vector<int>ans;
    //     for(int i=0;i<k;i++){
    //         ans.push_back(res[i]);
    //     }
    //     return ans;
    // }

    std::unordered_map<int,int>freq;

    for(int x:nums){
        freq[x]++;
    }

    vector<pair<int,int>> vect;
    for(auto x:freq){
        vect.push_back(x);
    }

    sort(vect.begin(), vect.end(), [](auto &a, auto &b){
    return a.second > b.second;
    });

    vector<int>res;

    for(int i=0;i<k;i++){
        res.push_back(vect[i].first);
    }
    
    return res;
    }


};