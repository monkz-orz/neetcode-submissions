class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> vecto;
        vector<double> fleet;
        for(int i = 0; i < position.size(); i++){
            vecto.push_back({position[i], speed[i]});
        }

        sort(vecto.rbegin(), vecto.rend());

        for(auto& pr : vecto){
            fleet.push_back((double)(target - pr.first) / pr.second);
            if(fleet.size() >= 2 && fleet.back() <= fleet[fleet.size() - 2] ){
                fleet.pop_back();
            }
        }

        return fleet.size();
    }
};
