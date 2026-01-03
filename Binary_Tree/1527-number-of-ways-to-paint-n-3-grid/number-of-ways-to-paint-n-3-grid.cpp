class Solution {
public:
    int numOfWays(int n) {
        long long mode = 1e9 +7;
        long long forSame = 6;
        long long forDiff = 6;

        for(int i=1;i<n;i++){

            long long newSame = ((3*forSame)+(2*forDiff))%mode;
            long long newDiff = ((2*forDiff)+(2*forSame))%mode;

            forSame = newSame;
            forDiff = newDiff;
        }    
        return (forSame+forDiff)% mode;
    }
};