class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> indices;
        string temp = "";
        temp += x;
        for(int i=0;i<words.size();i++){
            string str = words[i];
            if(any_of(str.begin(),str.end(),[&](const auto &ch){
                return ch == x;
            })){
                indices.push_back(i);
            }
        }
        return indices;
    }
};