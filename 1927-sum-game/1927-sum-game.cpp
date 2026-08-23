class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
        int leftqm=0;
        int rightqm=0;
        int lefts=0;
        int rights=0;
        for(int i=0;i<n;i++){
            if(num[i]=='?'){
                if(i<n/2){
                    leftqm++;
                }else{
                        rightqm++;
                }
        }
            else{
                if(i<n/2){
                    lefts+=num[i]-'0';
                }
                else{
                    rights+=num[i]-'0';
                }
            }}
            
            if((leftqm+rightqm)%2!=0){
                return true;
            }
            int lt=2*lefts+9*leftqm;
            int rt=2*rights+9*rightqm;
            if(lt==rt){
                return false;
            }
            return true;
        
    }
};