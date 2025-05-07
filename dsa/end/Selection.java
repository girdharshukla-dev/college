public class Selection {
    public static void main(String[] args) {
        int arr[]={10,9,8,7,6,5,4,3,2,1};
        for(int i=0;i<10;i++){
            int min = i;
            for(int j=i+1;j<arr.length;j++){
                if(arr[j]<arr[min]){
                    min = j;
                }
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }

        System.out.println("> The output array is");
        for(int i : arr){
            System.out.print(i + "  ");
        }
    }
}
