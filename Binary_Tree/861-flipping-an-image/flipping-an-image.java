class Solution {


    public void reverseRow(int[] arr){

        int start=0;
        int end=arr.length-1;

        while(start<end){

            int temp = arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;

        }
    }
    public int[][] flipAndInvertImage(int[][] image) {

        int n = image.length;
        int n1= image[0].length;

        for(int i=0;i<n;i++){
           reverseRow(image[i]);
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n1;j++){

                if(image[i][j]==0){
                    image[i][j]=1;
                }
                else{
                    image[i][j]=0;
                }
            }
        }
        return image;
        
    }
}