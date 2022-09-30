#!/bin/bash
figlet "CRowpro"
printf "\t\tCreated by :
\033[1;91mYKumar\n"
printf "\tAll rights are reserved"
echo
echo
printf
"\033[1;91mDISCLIAMER : "
printf "\033[0mThis tool is made only for education
purpose.\n"
printf "\033[0m\n\n"
printf "\033[1;92mDescription
:"
printf "\033[0m"
echo "This is the tool made for automating the recon
process"
echo
echo "You can use this tool for the following operations"
echo
"1. To view whois information"
echo "2. To identify technologies used by
target"
echo "3. Port Scanning with Nmap"
echo
echo
echo "Enter the target
IP/URL : "
read target
if [ -z "$target" ];
then
echo "ERROR ! No
target specified to perform the recon :/"
else
echo
echo "[*]Gathering whois
information...."
printf "\n***Whois lookup Results***\n\n" >>
result.txt
whois $target >> result.txt
echo "[*]Saving whois
information...."
echo
echo "[*]Starting Whatweb...."
printf "\n\n***Whatweb
lookup Results***\n\n" >> result.txt
whatweb $target >> result.txt
echo
"[*] Saving results...."
echo
echo "[*]Starting Nmap...."
echo
echo
"Nmap Options :"
echo "-v : to increase the verbosity level of the
scan"
echo "-A : to enable OS detection, version detection, script scanning and
traceroute"
echo "-O : to enable OS detection"
echo "-sV : to determine
service/version of the open port"
echo "-sS : to activate TCP scan"
echo
"-sU : to activate UDP scan"
echo "-p port_number : to only scan particuler
port number"
echo "-p- : to scan all 65535 ports"
echo
echo
echo "Enter the
options for Nmap : (like -v -O -sS one by one)"
read ch1 ch2 ch3 ch4 ch5 ch6 ch7 ch8
printf "\n\n*****Nmap results*****\n\n" >> result.txt
nmap $ch1 $ch2 $ch3 $ch4
$ch5 $ch6 $ch7 $ch8 $target >> result.txt
echo "Completed Nmap scan"
printf
"\n\033[0;32mRecon results are stored in --> \033[0mresult.txt\n"
echo
"Recon Finished "
fi 
