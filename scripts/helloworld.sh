#Lang shell 
#env script
#aut deetoo
#github https://github.com/deetoo

#!/bin/bash
echo "Hello World. It is currently `date` and the server was last rebooted on `who -b | awk '{print $3 " at " $4}'`"
