/**
 * BinarySearch
 */
public class BinarySearch {

    public static void main(String[] args) {

        int[] arr = { -18, -13, 0, 1, 4, 7, 9, 10 };
        System.out.println(binarySearch(arr,1)); 
    }

    static int binarySearch(int[] arr, int target)
    {
        int start = 0;
        int end = arr.length - 1;
        while (start <= end) {
            //find the middle element int mid = start+(end-start)/2;
            int mid = start + (end - start) / 2;
            if (target < arr[mid]) {
                end = mid - 1;
            } else if (target > arr[mid]) {
                start = mid + 1;
            } else
                return mid;
        }
        return -1;
    }
}