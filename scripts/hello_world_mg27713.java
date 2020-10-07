// LANGUAGE: Java
// ENV: OpenJDK
// AUTHOR: mg27713
// GITHUB: https://github.com/mg27713

public final enum Mg27713HelloWorld {
  ; // utility only
  
  public static void main(String[] args) {
    throw sneakyThrow(new HelloWorld()); // technically prints HelloWorld, nobody said it couldn't be in an error message :)
  }
  
  private static RuntimeException sneakyThrow(Throwable e) {
    throw Mg27713HelloWorld.<RuntimeException>sneakyThrow2(e);
  }
  
  private static <G extends Throwable> RuntimeException sneakyThrow2(Throwable e) throws G {
    throw (G) e;
  }
  
  private static final class HelloWorld extends Throwable {}
}
