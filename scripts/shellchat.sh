# Language : bash
# Author : Sumeet Shirgure
# Github : https://github.com/sumeetshirgure

# Run ./shellchat.sh --[open|connect] [$IP] [TAG]
# Ctrl-C to exit :P

MODE=$1
IP=$2
TAG=$USER

PORT=12347

if [ "$MODE" == "--open" ]; then
  echo "Opening a connection"
  sed -ue "s/^/$TAG: /g" | nc -lp $PORT localhost
elif [ "$MODE" == "--connect" ]; then
  echo "Connecting to $IP"
  sed -ue "s/^/$TAG: /g" | nc $IP $PORT
fi
