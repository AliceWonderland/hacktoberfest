import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.IOException;
import java.util.ArrayList;
import java.util.InputMismatchException;

class HelloWorldSiAlm {
    private static void SayHello(String str) throws IOException {
        //Creates buffered image w/ a height of 32 and width of 144
        BufferedImage image = new BufferedImage(144, 32, BufferedImage.TYPE_INT_RGB);

        //uses buffered image to create an graphics object
        Graphics g = image.getGraphics();

        //Sets graphic font to Italic Dialog with a size of 24
        g.setFont(new Font("Dialog", Font.ITALIC, 24));

        //Creates a 2D graphic object by casting the "g" object to Graphics2D
        Graphics2D graphics = (Graphics2D) g;


        graphics.setRenderingHint(RenderingHints.KEY_TEXT_ANTIALIASING,
                RenderingHints.VALUE_TEXT_ANTIALIAS_ON);
        graphics.drawString(str, 6, 24);


        for (int y = 0; y < 32; y++) { //Loops over the height of the BufferedImage
            StringBuilder sb = new StringBuilder(); //Creates a StringBuilder
            for (int x = 0; x < 144; x++) //Loops over width of the BufferedImage
                sb.append(image.getRGB(x, y) == -16777216 ? " " : image.getRGB(x, y) == -1 ? "#" : "*"); //Appends to the image using "#" and "*" characters
            if (sb.toString().trim().isEmpty()) continue;
            System.out.println(sb); //Prints the String builder
        }
    }

    public static void main(String[] args) {
        try {
            SayHello("Hello,");
            SayHello("Hacktober");
            SayHello("fest");
        } catch(IOException i) {
            System.out.println("Oh no! Spooky scary Exceptions");
        }
        
    }
}