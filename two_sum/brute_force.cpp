class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        vector<int> myVector;

        for (i = 0; i < nums.size(); i++){
            for (j = i+1; j < nums.size(); j++){    //Remember 1 in front of pointer to prevent counting same number again
                if ((target - nums[j]) == nums[i]){
                    std::cout << nums[j] << " and " << nums[i] << "\n";
                    myVector.insert(myVector.begin(), i);
                    myVector.insert(myVector.begin()+1, j);
                    return myVector;
                }
            }

        }
        return myVector;
    }
};
