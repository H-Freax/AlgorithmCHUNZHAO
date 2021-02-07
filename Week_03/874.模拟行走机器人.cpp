class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int dx[4]={0,1,0,-1};
        int dy[4]={1,0,-1,0};
       
        set<pair<int,int>> obstacleSet;
        for(vector<int> obstacle : obstacles){
            obstacleSet.insert(make_pair(obstacle[0],obstacle[1]));
        }

        int ans=0;
        int x=0;int y=0;int di=0;
        for(int i :commands){
            if(i==-1){
                di=(di+1)%4;
            }else if(i==-2){
                di=(di+3)%4;
            }else{
                for(int k=0;k<i;k++){
                    int nx=x+dx[di];
                    int ny=y+dy[di];
                    if(obstacleSet.find(make_pair(nx,ny))==obstacleSet.end()){
                        x=nx;
                        y=ny;
                        ans=max(ans,x*x+y*y);
                    }
                }
            }
        }
        return ans;
    }
};