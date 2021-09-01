import java.util.Scanner;

/**
 * Ceil
 */
public class Ceil {

    public static void main(String[] args) {
        int[] arr = { 2, 3, 5, 9, 14, 16, 18 };
        System.out.println("Enter a target for ceil");
        Scanner sc = new Scanner(System.in);
        int target = sc.nextInt();
        sc.close();
        System.out.println(arr[binFloor(arr, target)]); 
    }

    static int binCeil(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] > target) {
                end = mid - 1;
            } else if (arr[mid] < target) {
                start = mid + 1;
            }
        }
        return start;
    }

    static int binFloor(int[] arr, int target)
    {
        int start = 0;
        int end = arr.length - 1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] > target) {
                end = mid - 1;
            } else if (arr[mid] < target) {
                start = mid + 1;
            }
        }
        // System.out.println(start+" "+end);
        return end;
    }
}