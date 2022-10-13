class Methodoverloading {
    static int add (int a , int b){
        return a+b;
    }
    static int add(int a, int b , int c){
        return a+b+c;

    }
    class Testingmethodoverload{
    public static void main(String[] args) {
       System.out.println(Methodoverloading.add(12,23));
    }
}
}
