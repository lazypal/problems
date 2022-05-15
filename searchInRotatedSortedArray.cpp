/**
 * @rohit
 */
class Solution {
public:
    int search(vector<int>& array, int target) {
        int i = 0, j = array.size()-1;
        int pivot = -1;
        while(i < j) {
            int mid = i + (j - i) / 2;
            if(array[mid] > array[array.size()-1]) {
                i = mid + 1;
            } else {
                j = mid;
            }
        }

        pivot = i;
        i = 0;
        j = array.size();

        if(target >= array[pivot] && target <= array[array.size()-1]) {
            i = pivot;
        } else j = pivot;


        while(i <= j) {
            int mid = i + (j - i) / 2;
            if(array[mid] == target) return mid;
            else if(array[mid] > target) j = mid - 1;
            else i = mid + 1;
        }

        return -1;
    }
};