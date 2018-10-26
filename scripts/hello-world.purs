-- LANGUAGE: purescript
-- ENV: pulp
-- AUTHOR: Braxton Christensen
-- GITHUB: https://github.com/braxtonchristensen

import Prelude
import Effect.Console (log)

greet :: String -> String
greet name = "Hello, " <> name <> "!"

main = log (greet "World")