
import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Nick {

    private static int clickCount = 0;

    public static void main(String[] args) {
        // Create a JFrame (main window)
        JFrame frame = new JFrame("Click Counter");

        // Create a JButton
        JButton button = new JButton("Click me!");

        // Add an ActionListener to handle button clicks
        button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                clickCount++;
                for (int i = 0; i < clickCount; i++) {
                    System.out.println("Hello, world!");
                }
            }
        });

        // Set up the frame layout and add the button
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
        frame.setLayout(null);

        // Set button size and position
        button.setBounds(100, 80, 100, 30);
        frame.add(button);

        // Make the window visible
        frame.setVisible(true);
    }
}
