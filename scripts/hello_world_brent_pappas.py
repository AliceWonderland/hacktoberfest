# LANGUAGE: Pyhon
# ENV: Windows
# AUTHOR: Brent Pappas
# GITHUB: https://github.com/PappasBrent

import time
import sys

s="Hello, World!"

for i in range(len(s)):
    print(s[i], end=' ')
    sys.stdout.flush()
    time.sleep(0.2)
