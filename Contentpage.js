async function correctGrammar(text) {
    const apiUrl = "https://api.languagetool.org/v2/check";
    
    const response = await fetch(apiUrl, {
        method: "POST",
        headers: {
            "Content-Type": "application/x-www-form-urlencoded",
        },
        body: new URLSearchParams({
            text: text,
            language: "en" // You can set this to any language supported by LanguageTool
        })
    });
    
    const result = await response.json();
    let correctedText = text;

    // Applying suggestions from the response
    result.matches.forEach(match => {
        const { offset, length, replacements } = match;
        if (replacements.length > 0) {
            // Replace the incorrect part with the first suggestion
            correctedText = correctedText.substring(0, offset) +
                            replacements[0].value +
                            correctedText.substring(offset + length);
        }
    });

    return correctedText;
}

// Usage
const userInput = prompt("Enter a sentence:");
correctGrammar(userInput).then(correctedText => {
    console.log("Corrected Text:", correctedText);
}).catch(error => {
    console.error("Error:", error);
});
