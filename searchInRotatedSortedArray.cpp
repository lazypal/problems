/**
 * @rohit
 */
class Solution {
public:
    int search(vector<int>& array, int target) {
        int i = 0, j = array.size()-1;
	
        while(i <= j) {
            int mid = i + (j - i) / 2;
            if(array[mid] == target) return mid;
            else {
                if(array[mid] >= array[0] == target >= array[0]) {
                    if(target > array[mid]) {
                        i = mid + 1;
                    } else {
                        j = mid - 1;
                    }
                } else {
                    if(array[mid] >= array[0]) {
                        i = mid + 1;
                    } else {
                        j = mid - 1;
                    }
                }
            }
        }

        return -1;
    }
};