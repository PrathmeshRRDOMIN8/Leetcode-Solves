class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        map<pair<int,int>,pair<int,int>> Mapp;
        int count = 0;
        for(auto it : points){
            if(it[0]==x || it[1] ==y){
                Mapp[make_pair((abs(it[0]-x)+abs(it[1]-y)),count)] = make_pair(it[0],it[1]);
            }
            count++;
        }
        if(Mapp.size()==0)
            return -1;
        for(auto it: Mapp){
            return it.first.second;
        }
        return -1;
    }
};