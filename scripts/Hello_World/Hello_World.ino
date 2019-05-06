int pin = 13;

void setup()
{
  pinMode(pin, OUTPUT);
}

void loop()
{
  toMorseCode("Hello World");
}
void toMorseCode(String message)
{
  for(int i=0; i < message.length(); i++)
  {
    letter(message[i]);
  }
  letter(' ');
}
void letter(char letter)
{
  switch(letter)
  {
    case 'A':
      dot(); dash(); space();
    break;
    case 'B':
      dash(); dot(); dot(); dot(); space();
    break;
    case 'C':
      dash(); dot(); dash(); dot(); space();
    break;
    case 'D':
      dash(); dot(); dot(); space();
    break;
    case 'E':
      dot(); space();
    break;
    case 'F':
      dot(); dot(); dash(); dot(); space();
    break;
    case 'G':
      dash(); dash(); dot(); space();
    break;
    case 'H':
      dot(); dot(); dot(); dot(); space();
    break;
    case 'I':
      dot(); dot(); space();
    break;
    case 'J':
      dot(); dash(); dash(); dash(); space();
    break;
    case 'K':
      dash(); dot(); dash(); space();
    break;
    case 'L':
      dot(); dash(); dot(); dot(); space();
    break;
    case 'M':
      dash(); dash(); space();
    break;
    case 'N':
      dash(); dot(); space();
    break;
    case 'O':
      dash(); dash(); dash(); space();
    break;
    case 'P':
      dot(); dash(); dash(); dot(); space();
    break;
    case 'Q':
      dash(); dash(); dot(); dash(); space();
    break;
    case 'R':
      dot(); dash(); dot(); space();
    break;
    case 'S':
      dot(); dot(); dot(); space();
    break;
    case 'T':
      dash(); space();
    break;
    case 'U':
      dot(); dot(); dash(); space();
    break;
    case 'V':
      dot(); dot(); dot(); dash(); space();
    break;
    case 'W':
      dot(); dash(); dash(); space();
    break;
    case 'X':
      dash(); dot(); dot(); dash(); space();
    break;
    case 'Y':
      dash(); dot(); dash(); dash(); space();
    break;
    case 'Z':
      dash(); dash(); dot(); dot(); space();
    break;
    case 'a':
      dot(); dash(); space();
    break;
    case 'b':
      dash(); dot(); dot(); dot(); space();
    break;
    case 'c':
      dash(); dot(); dash(); dot(); space();
    break;
    case 'd':
      dash(); dot(); dot(); space();
    break;
    case 'e':
      dot(); space();
    break;
    case 'f':
      dot(); dot(); dash(); dot(); space();
    break;
    case 'g':
      dash(); dash(); dot(); space();
    break;
    case 'h':
      dot(); dot(); dot(); dot(); space();
    break;
    case 'i':
      dot(); dot(); space();
    break;
    case 'j':
      dot(); dash(); dash(); dash(); space();
    break;
    case 'k':
      dash(); dot(); dash(); space();
    break;
    case 'l':
      dot(); dash(); dot(); dot(); space();
    break;
    case 'm':
      dash(); dash(); space();
    break;
    case 'n':
      dash(); dot(); space();
    break;
    case 'o':
      dash(); dash(); dash(); space();
    break;
    case 'p':
      dot(); dash(); dash(); dot(); space();
    break;
    case 'q':
      dash(); dash(); dot(); dash(); space();
    break;
    case 'r':
      dot(); dash(); dot(); space();
    break;
    case 's':
      dot(); dot(); dot(); space();
    break;
    case 't':
      dash(); space();
    break;
    case 'u':
      dot(); dot(); dash(); space();
    break;
    case 'v':
      dot(); dot(); dot(); dash(); space();
    break;
    case 'w':
      dot(); dash(); dash(); space();
    break;
    case 'x':
      dash(); dot(); dot(); dash(); space();
    break;
    case 'y':
      dash(); dot(); dash(); dash(); space();
    break;
    case 'z':
      dash(); dash(); dot(); dot(); space();
    break;
    case ' ':
      space(); space(); space();
    break;
    default:
    break;
    
  }
  
}

void dot()
{
  digitalWrite(pin, HIGH);
  delay(250);
  digitalWrite(pin, LOW);
  delay(250);
}

void dash()
{
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(250);
}
void space()
{
  delay(500);
}

