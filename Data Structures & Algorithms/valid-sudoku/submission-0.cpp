class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            map<char,int> mp;
            for(int j=0;j<9;j++)
            {   if(board[i][j]=='.'){
                    continue;
                }
                mp[board[i][j]]++;
                cout<<board[i][j];
                if(mp[board[i][j]]>1)
                {   cout<<"1";
                    return false;
                }
            }
        }
        cout<<endl;
         for(int i=0;i<9;i++)
        {
            map<char,int> mp;
            for(int j=0;j<9;j++)
            {   if(board[j][i]=='.'){
                    continue;
                }
                mp[board[j][i]]++;
                cout<<board[j][i];
                if(mp[board[j][i]]>1)
                {    cout<<"me";
                    return false;
                }
            }
        }
    
        int ct=0;
        int r=3,c=3,i=0,j=0;
        map<char,int> mp;
        cout<<endl;
       
            
        // 1. Move through the 9 boxes using their top-left starting points
for (int r = 0; r < 9; r += 3) {
    for (int c = 0; c < 9; c += 3) {
        
        map<char, int> mp; // New map for EVERY 3x3 box

        // 2. Iterate through the 3x3 cells starting from (r, c)
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                char current = board[r + i][c + j];
                
                if (current != '.') {
                    if (mp.count(current)) {
                        return false; // Found a duplicate in this box
                    }
                    mp[current]++;
                }
            }
        }
    }
}
  
        
        return true;
    }
};
