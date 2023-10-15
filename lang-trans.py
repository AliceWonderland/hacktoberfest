import tkinter as tk
from tkinter import ttk
from googletrans import Translator

def translate_text():
    # Get the user input from the text widget
    text_to_translate = text_input.get(1.0, "end-1c")
    
    # Detect the source language (optional)
    detected_language = translator.detect(text_to_translate)
    source_language_label.config(text=f"Source Language: {detected_language.lang}")

    # Translate the text to the selected language
    target_language = selected_language.get()
    translation = translator.translate(text_to_translate, src=detected_language.lang, dest=target_language)

    # Display the translation in the text widget
    translated_text.delete(1.0, "end")
    translated_text.insert("insert", translation.text)

# Create the main window
root = tk.Tk()
root.title("Language Translator App")

# Create a label for the source language
source_language_label = ttk.Label(root, text="Source Language: Detecting...")
source_language_label.pack()

# Create a text input widget
text_input = tk.Text(root, height=5, width=40)
text_input.pack()

# Create a dropdown list for selecting the target language
languages = ["en", "es", "fr", "de", "ja", "ko", "zh-CN"]
selected_language = ttk.Combobox(root, values=languages)
selected_language.set("en")
selected_language.pack()

# Create a translate button
translate_button = ttk.Button(root, text="Translate", command=translate_text)
translate_button.pack()

# Create a label for the translated text
translated_text = tk.Text(root, height=5, width=40)
translated_text.pack()

# Initialize the translator
translator = Translator()

# Start the main loop
root.mainloop()
