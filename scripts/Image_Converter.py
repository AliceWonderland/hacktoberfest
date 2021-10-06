import tkinter as tk
from tkinter import filedialog
from PIL import Image

root = tk.Tk()
root.title("Image Converter GUI with Python")
canvas1 = tk.Canvas(root, width=360, height=370, bg='azure3', relief='raised')
canvas1.pack()

label1 = tk.Label(root, text="Image Converter", bg='azure3')
label1.config(font=('helvetica', 20))
canvas1.create_window(150, 60, window=label1)

def getPNG():
    global im1
    import_file_path = filedialog.askopenfilename()
    im1 = Image.open(import_file_path)

browse_png = tk.Button(text="Select PNG file", command=getPNG, bg="royalblue", fg='white', font=('helvetica', 12, 'bold'))
canvas1.create_window(150, 130, window=browse_png)

def convert():
    global im1
    im1=im1.convert('RGB')
    export_file_path = filedialog.asksaveasfilename(defaultextension='.jpg')	
    im1.save(export_file_path)

saveasbutton = tk.Button(text="Convert PNG to JPG", command=convert, bg='royalblue', fg='white', font=('helvetica', 12, 'bold'))
canvas1.create_window(150, 180, window=saveasbutton)
root.mainloop()
