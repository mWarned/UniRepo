#!/bin/bash

# Highlight
HL='\033[0;31m'
NC='\033[0m'

# Function to input values into the program
input_values() {
  local testnr=$1
  local filename=$2

  echo -e "${HL}Testcase $testnr${NC}"
  echo "Input data:"
  cat $filename

  while IFS= read -r line; do
    echo "$line" | ./ex2_1
  done < "$filename"

  echo -e "${HL}End of file reached. You can now input manually.${NC}"
  exec < /dev/tty
}

# First input set
input_values 1 "test1.in"
echo ""
# Second input set
# input_values 2 "test2.in"
echo ""
# Third input set
# input_values 3 "test3.in"

