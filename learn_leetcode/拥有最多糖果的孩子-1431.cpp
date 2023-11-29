class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    
        int n = candies.size();
        vector<bool> res(n);
        for(int i = 0; i<n;i++)
        {
            res[i] = true;
        }

        for(int i = 0;i < n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(candies[j] - candies[i]>extraCandies)
                {
                    res[i] = false;
                    break;
                }
            }
        }
        return res;
    }
};