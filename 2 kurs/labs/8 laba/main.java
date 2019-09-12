import java.io.*;
import java.util.Formatter;
import java.util.Scanner;
public class main {

	public static void main(String[] args) throws IOException {
		FileWriter f = new  FileWriter("C:\\Users\\asus\\Desktop\\lab8.txt");
		f.write("12345\n");
		f.write("iwue9er iefun\ne9irn owicj");
		f.close();
		FileReader fr=new FileReader("C:\\Users\\asus\\Desktop\\lab8.txt");
		Scanner scan = new Scanner(fr);
		int i = 1;
        while (scan.hasNextLine()) {
            System.out.println(i + " : " + scan.nextLine());
            i++;
        }
		fr.close();
		
		String filePath = "C:\\Users\\asus\\Desktop\\lab8.txt";
        String text = "Hello world!\n";

        try {
            FileWriter writer = new FileWriter(filePath, true);
            BufferedWriter bufferWriter = new BufferedWriter(writer);
            bufferWriter.write(text);
            bufferWriter.close();
        }
        catch (IOException e) {
            System.out.println(e);
        }
        FileReader fr1=new FileReader("C:\\Users\\asus\\Desktop\\lab8.txt");
        Scanner scan1 = new Scanner(fr1);
		i = 1;
        while (scan1.hasNextLine()) {
            System.out.println(i + " : " + scan1.nextLine());
            i++;
        }
		fr.close();
        
	}
}
