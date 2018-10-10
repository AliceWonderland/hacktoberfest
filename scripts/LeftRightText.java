/*
  LANGUAGE: JAVA
  AUTHOR: naoppy
  GITHUB: https://github.com/naoppy
  
  JRE version must be later than 9.
*/

import javafx.animation.*;
import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.scene.text.FontWeight;
import javafx.scene.text.Text;
import javafx.stage.Stage;
import javafx.util.Duration;

public class LeftRightText extends Application {

    @Override
    public void start(Stage primaryStage) {
        Group group = new Group();

        String text = "Hello, JavaFX";

        Text layoutSample = new Text("H");
        layoutSample.setFont(Font.font("Serif", FontWeight.SEMI_BOLD, 40));
        double sampleHeight = layoutSample.getLayoutBounds().getHeight();

        double time = 1.3;
        Duration moveTime = Duration.seconds(time);
        Duration rotateTime = Duration.seconds(time/4);

        for(int i = 0; i < text.length(); i++) {
            
            Text character = new Text(String.valueOf(text.charAt(i)));
            character.setFill(Color.web("ff1493"));
            character.setFont(Font.font("Serif", FontWeight.SEMI_BOLD, 40));
            group.getChildren().add(character);
            
            TranslateTransition move = new TranslateTransition(moveTime);
            move.setFromX(i % 2 == 0 ? -30 : 800);
            move.setFromY(60+sampleHeight*i);
            move.setToX(400-character.getLayoutBounds().getWidth()/2);
            move.setInterpolator(Interpolator.LINEAR);
            
            RotateTransition turn = new RotateTransition(rotateTime);
            turn.setByAngle(360);
            turn.setCycleCount(4);
            turn.setInterpolator(Interpolator.LINEAR);
            
            ScaleTransition scale = new ScaleTransition(moveTime);
            scale.setFromX(1.5);
            scale.setFromY(1.5);
            scale.setToX(1);
            scale.setToY(1);
            scale.setInterpolator(Interpolator.LINEAR);
            
            ParallelTransition parallel = new ParallelTransition(character, move, turn, scale);
            parallel.play();
        }

        Scene scene = new Scene(group, 800, 650);
        primaryStage.setScene(scene);
        primaryStage.setTitle("Hello, JavaFX!");
        primaryStage.show();

    }

}