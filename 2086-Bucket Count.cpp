class Solution {
public:
    int minimumBuckets(string hamsters) {
        int count = 0;
        for (int i = 0; i < hamsters.size(); i++) {
            if (hamsters[i] == 'H') {
                if (i>0 && hamsters[i-1] == 'B') {
                    continue;
                }
                if (i>0 && i+1 < hamsters.size() && hamsters[i-1] == '.' && hamsters[i+1] =='.') {
                    hamsters[i+1] = 'B';
                    count++;
                }
                else if (i+1 < hamsters.size() && hamsters[i+1] == '.') {
                    hamsters[i+1] = 'B';
                    count++;
                }
                else if (i>0 && hamsters[i-1] == '.') {
                    hamsters[i-1] = 'B';
                    count++;
                } else {
                    return -1;
                }
            }
        }
        return count;
    }
};