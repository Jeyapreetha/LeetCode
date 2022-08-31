class Solution {
public:
    string defangIPaddr(string address) {
        
        string res = "";
        string rep = "[.]";
        for(int i = 0; i < address.size(); i++)
            
             if(address[i] == '.')
               res.append(rep);
            else
                res += address[i];
        
           
        
        return res;
    }
};