// Author: PanDurko
// Language: C#
// Github: https://github.com/PanDurko 

public class Program 
{
    public static void Main(string[] args) 
    {
        Author author = new Author("PanDurko", "https://github.com/PanDurko");
        author.PrintMessage();
    }
}

public class Author() 
{
    private string _name; 
    private string _githubLink; 

    public Author(string name, string githubLink) 
    {
        _name = name; 
        _githubLink = githubLink; 
    }

    public void PrintMessage() 
    {
        Console.WriteLine($"Hello World! by {_name}, github {_githubLink}");
    }
}