public class swapinJava {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        swap(a, b);
        System.out.println("a = " + a + " b = " + b);
        String name = "Saikat bishal";
        System.out.println(name);
    }

    static void swap(int a, int b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    static String changeName(String name)
    {
        name = "Kakoli Bishal";
        return name;
    }
}
