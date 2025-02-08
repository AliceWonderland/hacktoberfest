<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Collecting the form data
    $name = $_POST['name'];
    $email = $_POST['email'];
    $message = $_POST['message'];

    // You can process the data here (e.g., save to a database or send an email)

    // Simple validation and success message
    if (!empty($name) && !empty($email) && !empty($message)) {
        // In a real-world scenario, you would sanitize the inputs and send email or save the data
        echo "<h2>Thank you, $name! Your message has been received.</h2>";
    } else {
        echo "<h2>There was an error submitting your message. Please try again.</h2>";
    }
} else {
    echo "<h2>Access Denied!</h2>";
}
?>
