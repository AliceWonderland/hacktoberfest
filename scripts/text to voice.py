import win32com.client as wincl
speak=wincl.Dispatch("SAPI.SpVoice")
speak.Speak("hello world")
