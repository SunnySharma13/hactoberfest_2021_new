package ArrayProblemsLeetcode.GoodQuestions;
//ceiling of number means finding a smallest number which is just greater or equal to the target number
public class CeilingOfNumber {
    public static void main(String[] args) {
        //array should be sorted first -> applying binary search for best optimization
       int [] arr={1,4,5,9,13,17,20,23,30};
       int  target= 31;
       int ans=ceilingOfNum(arr,target);
        System.out.println(ans);
    }
    private static int ceilingOfNum(int[] arr, int target) {
        int start=0;
        int end=arr.length-1;
        if(target>arr[end]){
            return -1;
        }

        while(start<=end){
            int mid=start+(end-start)/2;
            if(target>arr[mid]){
                start=mid+1;
            }else if(target<arr[mid]){
                end=mid-1;
            }else {
                return arr[mid];
            }
        }
        return arr[start] ;
    }
}
