class Solution {
public:
    int maxWords(string str)
    {
        int maxWord = 0;
        string word;
        stringstream s(str);
            int count = 0;
                while (s >> word)
                    maxWord++;
        return maxWord;
    }
    int mostWordsFound(vector<string>& sentences) {
        
        int n = sentences.size();
        int maxW = 0,c;
       
        for(int i = 0; i < n; i++)
        {
            c = maxWords(sentences[i]);
               maxW = max(maxW,c);
        }
     
        return maxW;
        
    }
};