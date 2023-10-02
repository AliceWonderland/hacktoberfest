import java.util.Random;

//Importing the Scanner class of util package
import java.util.Scanner;

//Main Class of the program
public class Main{

    //Function to generate the computer choice
    public static String generateComputerChoice( Random  random){

        int wordNumber;
        //Choosing a random number using the inbuilt function
        wordNumber = random.nextInt( 3 ) + 1;
        String computerChoice = "";

        //Getting computer choice on the random number
        if( wordNumber == 1 ){
            computerChoice = "rock";
        }else if( wordNumber == 2 ){
            computerChoice = "paper";
        }else if( wordNumber == 3 ){
            computerChoice = "scissors";
        }

        System.out.println( "\nThe Computer already made it's choice" );
        return computerChoice;

    }

    //Function to show the list of available options
    public static void showMenu(){

        System.out.println( "Options to choose from :\n1.Rock\n2.Paper\n3.Scissors" );

    }

    //function to get the user choice
    public static String getUserChoice( Scanner scanner ){

        String userWordChoice = "";
        System.out.print( "\nPlease make yours : " );
        userWordChoice = scanner.nextLine();
        //Returning the user choice
        return userWordChoice;

    }

    //Function to get the user
    public static String chooseWinner( String computerChoice, String userChoice ){

        String winner = "No Winner";
        String customMessage = "Both choose same";
        String finalMessage = "";

        String rockCustomMessage = "The rock smashes the scissor";
        String scissorsCustomMessage = "Scissors cuts paper";
        String paperCustomMessage = "Paper wraps rock";

        //Winner Logic for the game start

        if( computerChoice.equals( "rock" ) && userChoice.equalsIgnoreCase( "scissors" ) ){
            winner = "Computer";
            customMessage = rockCustomMessage;
        }else if( userChoice.equalsIgnoreCase( "rock" ) && computerChoice.equals( "scissors" ) ){
            winner = "User";
            customMessage = rockCustomMessage;
        }

        if( computerChoice.equals( "scissors" ) && userChoice.equalsIgnoreCase( "paper" ) ){
            winner = "Computer";
            customMessage = scissorsCustomMessage;
        }else if( userChoice.equalsIgnoreCase( "scissors" ) && computerChoice.equals( "paper" ) ){
            winner = "User";
            customMessage = scissorsCustomMessage;
        }

        if( computerChoice.equals( "paper" ) && userChoice.equalsIgnoreCase( "rock" ) ){
            winner = "Computer";
            customMessage = scissorsCustomMessage;
        }else if( userChoice.equalsIgnoreCase( "paper" ) && computerChoice.equals( "rock" ) ){
            winner = "User";
            customMessage = paperCustomMessage;
        }

        //Winner Logic for the game ends
        finalMessage = winner + " won ( " + customMessage + " )";

        //Returning the final message
        return finalMessage;

    }

    //Main Function of the program
    public static void main( String [] args ){

        Random random = new Random();
        Scanner scanner = new Scanner(System.in);
        String computerChoice;
        String userChoice;
        String winner;

        showMenu();
        computerChoice = generateComputerChoice( random );
        userChoice = getUserChoice( scanner );
        winner = chooseWinner( computerChoice, userChoice );

        System.out.println( "\nYou choose : " + userChoice + "\nComputer choose : " +computerChoice );
        System.out.println( winner );

    }

} 
