public class command_line {
    public static void main(String[] args) {
        if(args.length == 0){
            System.out.println("no command line");
        }
        else{
            System.out.println("command line arguments");
            for(int i = 0; i<args.length ; i++){
                System.out.println("arguments: "+(i+1) + ":" + args[i]);
            }
        }
    }
}
