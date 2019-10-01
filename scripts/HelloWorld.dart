/* 
  * Rather than having Material Design imported every time, rather just for beginner stuff
  * we are including widgets.dart from Flutter package. In this way, we are having a bare minimum
  * widgets to be used as per need.
*/

import 'package:flutter/widgets.dart';

/*
  * Just like any other programming language, even dart has "main" method. 
  * This can be done in two ways: 
  * Normal curly braces
  * Fat arrow notation
  * Now coming to main, inorder to "run the application" we are using simple runApp() method
*/

// void main(){
// }

void main() => runApp(
  // * Center() is a very commonly used widget, and under this, we are going to pass a "child" element
  Center(
    child: Text(
      "Hello, World!",
      textDirection: TextDirection.ltr,),
  )
);
