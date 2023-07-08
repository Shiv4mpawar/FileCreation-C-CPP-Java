import java.io.*;

public class RandomAccess
{
    public static void main(String Arg[]) throws Exception
    { 
        RandomAccessFile fobj = new RandomAccessFile("Infosystems.txt","rw");  // rw :- reading and writing 

        fobj.writeUTF("abcdefghij");  // unicode transformation formate

        fobj.seek(0);
        System.out.println("Data from file : "+fobj.readUTF());

        fobj.seek(5);
        fobj.writeUTF("****");

        fobj.seek(0);
        System.out.println("Data from fiel : "+fobj.readUTF());
    }
}
