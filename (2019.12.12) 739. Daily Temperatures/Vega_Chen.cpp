cclass Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> warmToWait(T.size(), 0);
        vector<pair<int, int>> warmerStack;
        
        for(int i = T.size()-1; i>=0; --i){
            int day = 0;
            while(!warmerStack.empty() && T[i] >= warmerStack.back().first){
                day = day + warmerStack.back().second;
                warmerStack.pop_back();
            }
            ++day;
            if(warmerStack.empty()) day=0;
            warmerStack.push_back(pair<int, int>(T[i], day));
            /*for(int j = 0; j<warmerStack.size(); ++j){
                cout<< warmerStack[j].first <<"("<<warmerStack[j].second<<")"<< " ";
            }*/
            cout<<endl;
            warmToWait[i] = day;
        }
    
    return warmToWait;
    }
};