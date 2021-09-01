public class OrderAgnosticBinarySearch {

    public static void main(String[] args) {
        int[] arr = { 1, 3, 15, 19, 33, 96, 101, 234 };
        int[] arr2 = { 234, 101, 96, 33, 19, 15, 3, 1 };
        System.out.println(orderAgnosticBS(arr, 101) + 1);
        System.out.println(orderAgnosticBS(arr2, 15) + 1);
    }

    static int orderAgnosticBS(int[] arr, int target) {
        int start = 0;
        int end = arr.length-1;
        boolean flag = arr[0] < arr[end];
        if (flag) 
        {
            while (start <= end) 
            {
                int mid = start + (end - start) / 2;
                if(target<arr[mid])
                    end = mid - 1;
                else if(target>arr[mid])
                    start = mid + 1;
                else
                    return mid;
            }
        }
        else 
        {
            while (start <= end) 
            {
                int mid = start + (end - start) / 2;
                if(target<arr[mid])
                    start = mid + 1;
                else if(target>arr[mid])
                    end = mid - 1;
                else
                    return mid;
            }
        }
        return -1;
    }
}