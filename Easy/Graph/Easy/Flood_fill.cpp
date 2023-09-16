class Solution {
public:
    int n , m;
    bool visited[55][55];
    int dRow[4] = {-1,0,1,0};
    int dCol[4] = {0,1,0,-1};
    bool is_valid(int i ,int j)
    {
        return (i>=0 && i< n && j>=0 && j<m);
    }
    void dfs(vector<vector<int>> & img, int sr,int sc,int colour,int fixed)
    {
        visited[sr][sc] = true;
        img[sr][sc] = colour;
        for(int i=0;i<4;i++)
        {
            int nRow = sr + dRow[i];
            int nCol = sc + dCol[i];
            if(is_valid(nRow,nCol) && !visited[nRow][nCol] && img[nRow][nCol] == fixed)
            {
                dfs(img,nRow,nCol,colour,fixed);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        n = image.size();
        m = image[0].size();
        int fixed = image[sr][sc];
        dfs(image,sr,sc,color,fixed);
        return image;
    }
};