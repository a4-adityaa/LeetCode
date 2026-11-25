class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        bool a=false;
        bool b=false;
        bool c=false;
        bool d=false;
        bool e=true;
        bool f=false;
        if(password.length()>=8){
            f=true;
        }
        string s="!@#$%^&*()-+";
        for(int i=0;i<password.size();i++){
            if(password[i]>='a' && password[i]<='z'){
                a=true;
            }
            if(password[i]>='A' && password[i]<='Z'){
                b=true;
            }
            if(password[i]>='0' && password[i]<='9'){
                c=true;
            }
            for(int j=0;j<s.size();j++){
                if(password[i]==s[j]){
                    d=true;
                }
            }
            
            if(i!=0 && password[i]==password[i-1]){
                e=false;
            }
        }
        if(a&&b&&c&&d&&e&& f){
            return true;
        }
        return false;
    }
};