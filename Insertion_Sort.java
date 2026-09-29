import java.util.Arrays;

class Insertion_Sort{
    void insert(int ar[]){
        int n=ar.length;
        for(int i=1;i<n;i++){
            int ele=ar[i];
            int j=i-1;
            while(j>=0&&ar[j]>ele){
                ar[j+1]=ar[j];
                j--;
            }
            ar[++j]=ele;
        }
        
    }
    public static void main(String[] args) {
        Insertion_Sort i=new Insertion_Sort();
        int ar[]={1,9,8,65,66666,4,-345,0};  
        i.insert(ar);
        System.out.println(Arrays.toString(ar));
    }
} 