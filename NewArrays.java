import java.util.*;

public class NewArrays {
    public static void main(String[] args) {
        System.out.println("Arrays");
        int arr[]=new int[5];
        System.out.println(Arrays.toString(arr));
        for (int i : arr) {
            System.out.print(i+", ");
        }
        char arr2[]=new char[26];
        for (int i = 65; i < 91; i++) {
            arr2[i-65]=(char)(i);
        }
        System.out.println();
        System.out.print(Arrays.toString(arr2));
        change(arr2);
        System.out.println(Arrays.toString(arr2));
    }
    static void change(char[] arr)
    {
        arr[3]='A';
    }
}
