#!/bin/bash

text="Hello World"

for ((i=0; i<${#text}; i++)); do
    echo -n "${text:$i:1}"
    sleep 0.5  
done

echo 
