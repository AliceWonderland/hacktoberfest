#!/bin/bash

## LANGUAGE: bash
## AUTHOR: kristiwedertz
## GITHUB: https://github.com/kristiwedertz

COUNT=0
while [ $COUNT -le 10 ] 
do
  echo "Hello world!"
  (( COUNT++ ))
done
