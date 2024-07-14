class Solution {
public:
    long long minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        sort(horizontalCut.begin(),horizontalCut.end());
        sort(verticalCut.begin(),verticalCut.end());
        int i = m - 2,j = n - 2;
        long long cost = 0LL,colCount =  1LL,rowCount = 1LL;
        while(i >= 0 && j >= 0){
            if(horizontalCut[i] > verticalCut[j]){
                cost += horizontalCut[i] * colCount;
                rowCount++;
                i--;
            }
            else{
                cost += verticalCut[j] * rowCount;
                colCount++;
                j--;
            }
        }
        
        while(i >= 0){
            cost += horizontalCut[i] * colCount;
            rowCount++;
            i--;
        }

        while(j >= 0){
            cost += verticalCut[j] * rowCount;
            colCount++;
            j--;
        }
        return cost;
    }
};