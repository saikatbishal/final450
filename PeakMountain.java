class PeakMountain{
    public static void main(String[] args) {
        int[] arr = { 1, 3, 5, 7, 9 };
        System.out.println(findPeakElement(arr));
        
    }

    static int findPeakElement(int[] arr)
    {
        int end = arr.length;
        int start = 0;
        if (arr[end - 1] > arr[end - 2])
            return arr[end - 1];
        while(start<=end)
        {
            int mid = (start + end) / 2;
            if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
                return arr[mid];
            else if(arr[mid]>arr[mid+1])
                end = mid - 1;
            else if(arr[mid]<arr[mid+1])
                start = mid + 1;
        }
        return -1;
    }
}