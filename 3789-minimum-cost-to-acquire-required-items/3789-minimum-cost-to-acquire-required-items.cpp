class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        int need=min(need1,need2);
        int mutual=min(costBoth,min(cost1,cost2));
        if(mutual==costBoth)
        return 1LL*costBoth*max(need1,need2);
        else
        return min(
    1LL * cost1 * need1 + 1LL * cost2 * need2,
    min(
        1LL * costBoth * max(need1, need2),
        1LL * costBoth * need +
        1LL * (need1 - need) * cost1 +
        1LL * (need2 - need) * cost2
    )
);
        
    }
};