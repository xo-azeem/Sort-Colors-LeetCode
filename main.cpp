// Code

class Solution {
public:
    int partition(vector<int>& arr, int low, int high)
    {

        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return (i + 1);
    }

// The Quicksort function Implement

    void quickSort(vector<int>& arr, int low, int high)
    {
        if (low < high)
        {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }

    void sortColors(vector<int>& nums) 
    {
        int n = nums.size();
        quickSort(nums, 0, n - 1 );
    }
};
