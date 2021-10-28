public class ceilingOfNo {
    public static void main(String[] args) {
        
        int[] arr = {2, 3, 4, 6, 9, 11, 34, 56};
        int target= 13;
        int res = ceilingNo(arr, target);
        System.out.println(res);
    }
    static int ceilingNo(int[] arr , int target){
        int start=0;
       int end = arr.length-1;
        while(start<=end){
            int mid = start +(end - start)/2;

            if(arr[mid] > target){
                end = mid-1;
            }else if(arr[mid]< target){
                start = mid+1;
            }else{
                return mid;
            }
        }
        return start;
    }
}
