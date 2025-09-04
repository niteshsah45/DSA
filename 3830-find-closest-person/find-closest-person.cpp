class Solution {
public:
    int findClosest(int x, int y, int z) {
        int firstStep;
        int secondStep;
        if(x>z){
            firstStep=x-z;
        }
        else{
            firstStep=z-x;
        }
        if(y>z){
            secondStep=y-z;
        }
        else{
            secondStep=z-y;
        }
        if(firstStep<secondStep) return 1;
        else if(secondStep<firstStep) return 2;
        else return 0;
    }
};