// LANGUAGE: Dart
// ENV: DartVM
// AUTHOR: Bhoomik Shetty
// GITHUB: https://github.com/Bhoomik250303

String message = "Hello, World!";
int windowWidth = 15;
String spaceStr = '';
String temp = '';
String eclipseStr = '';

void main() {
  for (int i = message.length; i >= 0; i--) {
    spaceStr = '';
    temp = message.substring(0, i);
    eclipseStr = message.substring(i);
    for (int j = 0; j < windowWidth - message.length; j++) {
      spaceStr = spaceStr + '_';
    }
    print(eclipseStr + spaceStr + temp);
  }
}
