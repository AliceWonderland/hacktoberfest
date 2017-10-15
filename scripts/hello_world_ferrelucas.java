/**
 * LANGUAGE: JAVA
 * AUTHOR: Lucas Ferreira
 * GITHUB: https://github.com/ferrelucas
*/

/**
 * This java HelloWorld reads CONTRIBUTORS.md file taking the names and contacts of each contributor
 * and printing them on the console as a big HELLO to the open source world (:
 *
 * Hacktoberfest OpenSource Starter Project at https://github.com/AliceWonderland/hacktoberfest
 *
 * Java Classes used: String, Scanner, File, FileNotFoundException.
 * Try it on https://repl.it
*/

import java.util.Scanner;
import java.io.*;

public class hello_world_ferrelucas {

    public static void main(String[] args) {
    	Scanner sc = getScannerFromFile("../CONTRIBUTORS.md");
    	if (sc == null) return;

    	String line;
    	System.out.println("Hello, world! A hello from all of us:\n");
    	while(sc.hasNextLine()) {
    		line = sc.nextLine();
    		if(line.contains("Name:")) {
    			String name = getNameFrom(line);
    			String contact = getContactFrom(line);
    			System.out.println(name + " " + contact);
    		}
    	}
    }

    private static Scanner getScannerFromFile(String file) {
    	Scanner sc;
    	try{
    		sc = new Scanner(new File("../CONTRIBUTORS.md"));
    		return sc;
    	}catch(FileNotFoundException e) {
    		System.out.println("There is no CONTRIBUTORS.md file.");
    		return null;
    	}
    }

    private static String getNameFrom(String line) {
    	int nameStart = line.indexOf("[");
    	int nameEnd = line.indexOf("]");
    	if (nameStart < 0 || nameEnd < 0) return "";
    	return line.substring(nameStart+1, nameEnd);
    }

    private static String getContactFrom(String line) {
    	int contactStart = line.indexOf("(");
    	if (contactStart < 0) return "";
    	return line.substring(contactStart, line.length());
    }

}
