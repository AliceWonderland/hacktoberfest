// LANGUAGE: Java
// ENV: Android
// AUTHOR: Pratik Butani
// GITHUB: https://github.com/pratikbutani
// LINK: http://pratikbutani.com/

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		Toast.makeText(this, "Hello World!", Toast.LENGTH_SHORT).show();
	}
}
