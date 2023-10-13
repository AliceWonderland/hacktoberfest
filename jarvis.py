import pyttsx3
import datetime
import speech_recognition as sr
import wikipedia
import webbrowser
import os

engine=pyttsx3.init('sapi5')
voices=engine.getProperty('voices')
engine.setProperty('voice',voices[0].id)




def speak(audio):
    engine.say(audio)
    engine.runAndWait()

def wishme():
    hour=int(datetime.datetime.now().hour)
    if hour>=0 and hour<12:
        speak("good morning !")
        
    elif hour>=12 and hour<18:
        speak("good afternoon!")
    
    else:
        speak("good evening!")
     
    speak("I am jarvis sir. Please tell me how may i help you")

def takecommand():
    r=sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening.......")
        r.pause_threshold=1
        audio=r.listen(source)
        
    try:
        print("Recognizing....")
        query= r.recognize_google(audio,language='en-in')
        print(f"User said: {query}\n")
        
    except Exception as e:
        #print(e)
        print("Say that again please...")
        return "None"
    return query

if __name__=="__main__":
    wishme()
    while True:
        query=takecommand().lower()
    
        if 'wikipedia' in query:
            speak('searching Wikipedia...')
            query=query.replace("Wikipedia","")
            results= wikipedia.summary(query, sentences=2)
            speak("According to Losta Roy Bikram Sha")
            speak(results)
        elif 'open youtube' in query:
             webbrowser.open("youtube.com")
        elif 'open google' in query:
             webbrowser.open("google.com")
        elif 'open stackoverflow' in query:
             webbrowser.open("stackoverflow.com")  
        elif 'play music' in query:
            music_dir= 'I:\muisc'   
            songs=os.listdir(music_dir)
            print(songs)
            os.startfile(os.path.join(music_dir,songs[0]))
        elif 'the time' in query:
            strTime= datetime.datetime.now().strftime("%H:%M:%S")
            speak(f"Sir,The time is {strTime}")
        
        elif 'open code' in query:
            codepath="C:\\Users\\manda\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe"
            os.startfile(codepath)
                       
                        
        
