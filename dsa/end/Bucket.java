import java.util.ArrayList;
import java.util.Collections;

public class Bucket{
    public static void main(String[] args) {
        double arr[] = {0.42, 0.32, 0.53, 0.21, 0.67, 0.87, 0.34, 0.56, 0.29};
        int n = arr.length;
        ArrayList<Double>[] buckets = new ArrayList[10];
        for(int i=0;i<10;i++){
            buckets[i] = new ArrayList<>();
        }
        for(double i : arr){
            int num = (int)(i*10);
            buckets[num].add(i);
        }
        for(ArrayList<Double> list : buckets){
            Collections.sort(list);
        }

        int i = 0;
        for(ArrayList<Double> list : buckets){
            for(double k : list){
                arr[i++] = k;
            }
        }

        System.out.println("> The output array is .....");
        for(double j : arr){
            System.out.print(j+ " ");
        }
    }
}