public class FindMinValue {

    public static void main(String[] args){
        int arr[] = {2,45,56,-5,8};
        int n = arr.length;

        System.out.println("Minimum value in array : "+minValue(arr , n));
    }

    public static int minValue(int arr[] , int n){
        if (n == 1)
            return arr[0];
        else
            return Math.min(arr[n-1] , minValue(arr, n-1));
    }

}
