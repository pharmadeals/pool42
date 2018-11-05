ifconfig | grep ether  | cut -c 8-999 | tr -d ' ' | tr -d '\t'
