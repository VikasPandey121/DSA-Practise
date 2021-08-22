import java.util.Scanner;
import java.util.Arrays;
public class Main {
  //method to print permutations of specified array  
  void printPermutations(int array[], int n) {
    for (int i = 0; i < n; i++)
      System.out.print("[" + array[i] + "]" + " ");
    //throws the cursor to the next line  
    System.out.println();
  }
  //finds permutation using Heap Algorithm  
  void findPermutation(int array[], int size, int n) {
    // if size becomes 1, it prints the obtained permutation  
    if (size == 1)
      printPermutations(array, n);
    for (int i = 0; i < size; i++) {
      findPermutation(array, size - 1, n);
      //if the length of the array is odd, it swaps the 0th element with the last element   
      if (size % 2 == 1) {
        //performing swapping     
        int temp = array[0];
        array[0] = array[size - 1];
        array[size - 1] = temp;
      }
      //if the size of the array is even, it swaps the ith element with the last element  
      else {
        //taking a temp variable for swapping     
        int temp;
        //performing swapping   
        temp = array[i];
        array[i] = array[size - 1];
        array[size - 1] = temp;
      }
    }
  }
  //main() method  
  public static void main(String args[]) {
    Main p = new Main();
    //defining an array whose permutation is to find  

    System.out.println("Enter the number of list:");
    Scanner scanner = new Scanner(System.in);
    int size = scanner.nextInt();

    int[] array = new int[size];
    for (int i = 0; i < size; i++) {
      array[i] = scanner.nextInt();
    }

    System.out.println("The original sequence is:");

    for (int i = 0; i < size; i++) {
      System.out.print((array[i]) + " ");
    }
    System.out.print("\n");

    //calling the user-defined method  
    p.findPermutation(array, array.length, array.length);
  }
}
