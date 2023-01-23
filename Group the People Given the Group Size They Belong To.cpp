class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>> m;
        vector<vector<int>> ans;
        for(int i = 0; i<groupSizes.size(); i++){
            m[groupSizes[i]].push_back(i);
        }
        for(auto it: m){
            if(it.second.size()==it.first){
                ans.push_back(it.second);
            }
            else{
	          int n = it.first;
              int size = (it.second.size() - 1) / n + 1;
              vector<int> vec[size];
              for (int k = 0; k < size; ++k)
	           {
		          auto start_itr = std::next(it.second.cbegin(), k*n);
		          auto end_itr = std::next(it.second.cbegin(), k*n + n);
		          vec[k].resize(n);
		          if (k*n + n > it.second.size())
		           {
			           end_itr = it.second.cend();
			           vec[k].resize(it.second.size() - k*n);
		           }
		         copy(start_itr, end_itr, vec[k].begin());
               }
                 for (int i = 0; i < size; i++)
                    ans.push_back(vec[i]);
             }
        }
        return ans;
    }
};