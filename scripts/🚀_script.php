<?php

echo "hello world";

// run in terminal php 🚀_script.php

print_text("Welcome to the rocket script\n");

// this is camelSnake_Case variable name
$🐪🐍🐪🐍🐪🐍🐪🐍 = "camelSnake_Camel_Snake\n";
// echo $🐪🐍🐪🐍🐪🐍🐪🐍;

// recursive owlbinacci acceleration
function 🦉($n) {
	if ($n == 0 || $n == 1) {
		return 1;
	} else {
		return 🦉($n - 1) + 🦉($n - 2);
	}
}

function print_text($text) {
	$text_array = str_split($text);
	foreach ($text_array as $char) {
		usleep(125000);
		echo $char;
	}
}
 
function 🚀() {
	print_text("Preparing to launch rocket at snake...\n");
	
	for ($i = 10; $i >= 0; $i--) {
		sleep(1);
		if ($i == 0) {
			echo "\nliftoff!\n";
			for ($j = 1; $j < 11; $j++) {
				$🦉🦉🦉 = 🦉(10);
				$🦉🦉 = 🦉($j);
				$trail = "";
				for ($k = 0; $k < $🦉🦉; $k++) {
					$trail .= " ";
				}
				$distance_from_target = $🦉🦉🦉 - $🦉🦉;
				$space_to_target = "";
				for ($k = 0; $k < $distance_from_target; $k++) {
					$space_to_target .= " ";
				}
				$space_to_target .= "🐍";
				if ($j == 10) {
					echo "{$trail}  💥\n";
				} else {
					echo "{$trail}~🚀{$space_to_target}\r";
				}
				usleep(250000);
			}
		} elseif ($i == 9) {
			echo "{$i} \r\r";
		} elseif ($i == 1) {
			echo "{$i} \n";
		} else {
			echo "{$i} \r";
		}
	}
}

🚀(); // call the rocket function!


// toilet function
function 🚽() {
	$🔑💻 = array("🎁", "📱", "🛏️");
	foreach ($🔑💻 as $emoji) {
		echo $emoji;
	}
}
// 🚽();
