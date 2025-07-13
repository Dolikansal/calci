import java.util.Scanner;
public class matrix_mul {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int m1 = sc.nextInt();
        
        int mat1[][] = new int[n1][m1];
        System.out.println("enter first matrix: ");
        for(int i = 0; i < n1; i++) {
            for(int j = 0; j < m1; j++) {
                mat1[i][j] = sc.nextInt();
            }
        }
        
        int n2 = sc.nextInt();
        int m2 = sc.nextInt();
    
        if (m1 != n2) {
            System.out.println("Matrix multiplication not possible - columns of first matrix must match rows of second matrix");
            return;
        }
        
        int mat2[][] = new int[n2][m2];
        System.out.println("enter second matrix: ");
        for(int i = 0; i < n2; i++) {
            for(int j = 0; j < m2; j++) {
                mat2[i][j] = sc.nextInt();
            }
        }

        // int res[][] = new int[n1][m2];
        // for(int i = 0; i < n1; i++) {
        //     for(int j = 0; j < m2; j++) {
        //         for(int k = 0; k < m1; k++) {  
        //             res[i][j] += mat1[i][k] * mat2[k][j];
        //         }
        //     }
        // }
        
        // System.out.println("Multiplication of two matrices: ");
        // for(int i = 0; i < n1; i++) {
        //     for(int j = 0; j < m2; j++) {
        //         System.out.print(res[i][j] + " ");
        //     }
        //     System.out.println();
        // }

        System.out.println("sum of two matrxi is: ");
        int result[][] = new int [n1][m1];
        for(int i = 0; i<n1 ; i++){
            for(int j =0 ; j<m1; j++){
                result[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
          for(int i = 0; i < n1; i++) {
            for(int j = 0; j < m2; j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();
        }
    }
}