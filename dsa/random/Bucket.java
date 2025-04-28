import java.util.*;

public class Bucket{
    public static void main(String args[]){
        double arr[] = {0.98,0.94,0.54,0.23,0.10,0.28};
        List<Double>[] buckets = new List[10];

        //initializing all buckets lists
        for(int i = 0;i<10;i++){
            buckets[i] = new ArrayList<>();
        }

        //putting values in buckets
        for(double i : arr){
            int value = (int)(i*10);
            buckets[value].add(i);
        }   

        int k = 0;
        //sorting the buckets
        for(List<Double> list : buckets){
            Collections.sort(list);
            for(double i : list){
                arr[k++] = i;
            }
        }

        for(int i=0;i<6;i++){
            System.out.println(arr[i] + " ");
        }

    }
}