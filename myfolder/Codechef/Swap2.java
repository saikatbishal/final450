package myfolder.Codechef;

public class Swap2 {
    int a, b;
    public static void main(String[] args) {
        int a = 12, b = 7;
        Swap2 sn = new Swap2();
        sn.a = a;
        sn.b = b;
        swapNum(sn);
        System.out.println(sn.a+" "+sn.b);
    }
    static void swapNum(Swap2 sn)
    {
        int temp = sn.a;
        sn.a = sn.b;
        sn.b=temp;
    }
}
