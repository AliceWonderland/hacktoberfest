'''
Description: A simple script for a simple life
Author: Benjamin Norman 2022
'''

import requests
import shutil

class HelloThere():
    def __init__(self):
        self.imageURL = "https://nyc3.digitaloceanspaces.com/memecreator-cdn/media/__processed__/de5/template-hello-there-1519-0c6db91aec9c.jpeg"
        self.imagePath = "./HelloThere.jpeg"
    def getImageHelloThere(self):
        imageRequest = requests.get(self.imageURL, stream = True)
        
        if imageRequest.status_code == 200:
            with open(self.imagePath,'wb') as download:
                shutil.copyfileobj(imageRequest.raw, download)
            return f'Image sucessfully Downloaded: {self.imagePath}'
        else:
            return 'Image Couldn\'t be retrieved'

if __name__ == "__main__":
    inst = HelloThere()
    print("Hello there!")
    print(inst.getImageHelloThere())