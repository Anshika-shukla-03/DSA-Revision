class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();

        int totalPetrol = 0;
        int currentPetrol = 0;
        int start = 0;

        for(int i=0; i<n; i++){
            int difference = gas[i] - cost[i];
            totalPetrol += difference;
            currentPetrol += difference;

            if(currentPetrol < 0){
                start = i+1;
                currentPetrol = 0;
            }
        }
        if(totalPetrol < 0){
            return -1;
        }
        return start;
    }
};