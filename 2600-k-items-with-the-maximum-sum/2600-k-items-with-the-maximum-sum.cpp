class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        if(k<=numOnes)
        return k;
        int count=0;
        count+=numOnes;
        k-=numOnes;
        if(k<=numZeros)
        return count;
        k-=numZeros;
        if(k<=numNegOnes)
        count+=(-1*k);
        else
        count+=(-1*numNegOnes);
        return count;
        
    }
};