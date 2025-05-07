public class Insertion {
    public static void main(String[] args) {
        int arr[] = new int[10];
        arr = new int[]{10,9,8,7,6,5,4,3,2,1};
        int n = arr.length;
        for(int i=0;i<n;i++){
            int key = arr[i];
            int j = i-1;
            while(j>=0 && arr[j]>key){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }

        System.out.println("> The output array is ....");
        for(int i : arr){
            System.out.print(i+" ");
        }
    }
}
