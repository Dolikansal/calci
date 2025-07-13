import java.util.Scanner;
import java.io.*;
public class data_entry {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        File f1 = new File("abc.txt");
        System.out.println("enter the data which you want to write in a file" + f1.getName());

        try{
            FileWriter wr = new FileWriter(f1);
            if(f1.canWrite()){
                while(true){
                    String str = sc.next();
                    if(str.equalsIgnoreCase("stop")){
                        break;
                    }
                    wr.write(str + "/n");
                }
                System.out.println("data enter succesfully");
                wr.close();
            }
            else{
                System.out.println("not written");
            }
        }
        catch(IOException e){
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
    }
}
