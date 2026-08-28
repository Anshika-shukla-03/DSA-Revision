class Solution {
public:

    int nextNumber(int n) { 
        int sum = 0; 
        while (n > 0) { 
            int digit = n % 10; 
            sum += digit * digit;
            n = n / 10; 
        }   return sum; 
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        while(fast != 1){
            slow = nextNumber(slow);
            fast = nextNumber(fast);
            fast = nextNumber(fast);

            if(fast == 1)
                return true;

            if(slow == fast){
                return false;
            }
        }
        return true;

    }
};