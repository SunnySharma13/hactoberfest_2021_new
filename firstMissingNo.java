public class firstMissingNo {
    public static void main(String[] args) {
       // int[] arr= {3, 4, -1, 1};
        int[] arr = {1, 2, 0};
       // int[] arr = {7, 8, 9, 11, 12}; 
       int res = firstMissingno(arr);
        System.out.println(res);
    }
    static int firstMissingno(int[] arr){
        int i= 0;
        while(i<arr.length){
            int correct = arr[i]-1;
            // if(arr[i] != i+1){
            //     return i+1;
            // }
            if(arr[i]> 0 && arr[i]<arr.length && arr[i] != arr[correct]){
                int temp = arr[i];
                arr[i] = arr[correct];
                arr[correct] = temp;
            }else{
                i++;
            }
        }
        for(int index =0; index<arr.length; index++){
            if(arr[index] != index+1){
                return index+1;
            }
        }
        return -1;
    }
}
