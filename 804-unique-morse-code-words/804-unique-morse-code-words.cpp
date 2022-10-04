class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
       string morseCode[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> uniqueMorseCode;
        
        for(int i = 0; i < words.size(); i++)
        {
            string s;
            for(int j = 0; j < words[i].size(); j++)
            {
                s += morseCode[(int)(words[i][j]-'a')]; 
            }
            uniqueMorseCode.insert(s);
        }
        return uniqueMorseCode.size();
           
    }
};