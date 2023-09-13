/*
it's a really good problem
https://leetcode.com/problems/n-queens/
*/
class Solution {
public:
    vector<vector<string>>res;
    vector<string>cur;
    int l,q = 0;
    map<int , int>forbR,frobC,forbD1 , forbD2;
    bool notForb(int i , int j){
        if(forbD1[i-j] || forbD2[i+j] || forbR[i] || frobC[j])
            return false;
        return true;
    }
    void solve(int i){
        if(i == l){
            res.push_back(cur);
            return;
        }
        for(int j = 0 ; j < l ; j++){
            if(cur[i][j]=='.' && notForb(i , j)){
                cur[i][j]='Q';
                forbD1[i-j]++;
                forbD2[i+j]++;
                forbR[i]++;
                frobC[j]++;
                solve(i+1);
                cur[i][j]='.';
                forbD1[i-j]--;
                forbD2[i+j]--;
                forbR[i]--;
                frobC[j]--;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        l = n;
        cur.resize(n);
        for(int  i = 0; i < n ; i++){
            cur[i].resize(n);
            for(int j = 0 ; j < n ;j++){
                cur[i][j]='.';
            }
        }
    
        solve(0);
        return res;
    }
};