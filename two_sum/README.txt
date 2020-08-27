Two Sum from leetcode:

    Approach 1: Brute Force
        This approach is the first one that came to mind. We checked each element one by one against the rest. It is the most intuitive but not the best method. 
        Time complexity: Takes O(n^2) at the worst. We check every number against every other number which makes n^2 possible pairs. 
        Space complexity: O(2) but O(1) ideally. Since we are required to return a vector and this is a 2 sum solution, we need to create a vector of size 2. 
                          If the program required a true/false return, it would be O(1) since no memory would have been created.
        
    Approach 2: Hashing
        This is a much much faster method. We go through the array only once saving time. We compare subtract (target - current value) and try to find
        the difference in the map. We used an unordered map to save on time and having it ordered is not necessary.
        Time complexity: O(n). We go through the array only once and insert and lookup only once. 
        Space complexity: O(n) since we create a map of size n.
        
    Experience:
        I learned about hashing and unordered vs ordered maps. This is such a useful tool as I can now use a method other than brute force to save time 
        and make things less complicated. Yes it is less intuitive but there are also less things to keep track of. 
