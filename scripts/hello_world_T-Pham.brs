' LANGUAGE: BrightScript
' ENV: Roku
' AUTHOR: T-Pham
' GITHUB: https://github.com/T-Pham

sub Main(args as Dynamic)
  h = "h"
  e = "e"
  l = "l"
  o = "o"
  w = "w"
  r = "r"
  d = "d"
  comma = ","
  space = " "
  exclamation = "!"
  capitalize = Uppercase
  capitalH = capitalize(h)
  capitalW = capitalize(w)
  helloWorld = ""
  for each character in "Hello, World!".split("")
    for each stringCharacter in [e, l, o, r, d, comma, space, exclamation, capitalH, capitalW]
      if character = stringCharacter
        helloWorld += stringCharacter
        exit for
      end if
    end for
  end for
  ? helloWorld
end sub

function Uppercase(s as String) as String
  return Ucase(s)
end function
