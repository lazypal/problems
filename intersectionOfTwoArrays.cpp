/**
 * @rohit
 */
class Solution {
public:
    vector<int> intersection(vector<int>& A, vector<int>& B) {
        unordered_map<int, int> fArrFreq;
        unordered_map<int, int> sArrFreq;

        for(auto i: A) {
            fArrFreq[i]++;
        }

        for(auto i: B) {
            sArrFreq[i]++;
        }

        vector<int> v;

        for(auto i: fArrFreq) {
            if(i.second > 0 && sArrFreq[i.first] > 0) {
                int ele = i.first;
                v.push_back(ele);
            }
        }

        return v;
    }
};