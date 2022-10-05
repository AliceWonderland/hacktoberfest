#!/bin/bash

banner()
{
  echo "+------------------------------------------+"
  printf "| %-40s |\n" "`date`"
  echo "|                                          |"
  printf "|`tput bold` %-40s `tput sgr0`|\n" "$@"
  echo "| This is Alief : github.com/takatux       |"
  echo "+------------------------------------------+"
}

banner "Hello, World!"