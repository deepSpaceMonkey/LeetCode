class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
        std::unordered_map<int, int> myMap;   //setup map (value and index)
        vector<int> myVector;    //setup vector for return value
        int i, difference;

        for (i = 0; i < nums.size(); i++){
            difference = target - nums[i];
            if (myMap.find(difference) != myMap.end()){    //Lookup 
                myVector.push_back(i);
                myVector.push_back(myMap.find(difference)->second);
            }
            else{
                myMap[nums[i]] = i;    //Add to map if not part of two sum solution yet
            }
        }

        return myVector;
    }
};
