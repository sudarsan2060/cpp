class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        int sz_str = nums[0].size();
        long long pw = pow(2, sz_str);
        vector<string>::iterator it;
        for(int i = 0; i < pw; i++)
        {
            string val;
            int ans = i;
            int k = sz_str;
            while(k>0)
            {
                val += to_string(ans % 2);
                ans = i/2;
                --k;
            }
            it = find(nums.begin(), nums.end(), val);
            if(it == nums.end())
            {
                return val;
                break;
            }
        }
        return {};
    }
};
