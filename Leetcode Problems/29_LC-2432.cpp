class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int prev_time = 0;
        int max_time = 0;
        int max_id = 0;
        for(int i = 0; i < logs.size(); i++){
            int time = logs[i][1] - prev_time;
            prev_time = logs[i][1];
            if(time > max_time){
                max_time = time;
                max_id = logs[i][0];
            }
            else if(time == max_time)
                max_id = min(max_id, logs[i][0]);
        }
        return max_id;
    }
};
