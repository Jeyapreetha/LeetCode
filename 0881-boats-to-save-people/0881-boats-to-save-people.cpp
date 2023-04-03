class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
    
    sort(people.begin(),people.end());

    int i = 0, j = people.size()-1;
    int minBoats = 0;

    while(i <= j)
    {
        if(people[i] + people[j] <= limit)
        {
            minBoats += 1;
            i++; j--;
        }
        else if(people[i] + people[j] > limit)
        {
            j--;
            minBoats += 1;   
        }

    }
    return minBoats;
    }
};