#!/bin/bash

# Function to input values into the program
input_values() {
    local testnr=$1
    shift 
    local values=("$@")

    echo "Testcase $testnr"
    # Send input to the executable
    {
        for value in "${values[@]}"; do
            echo "$value"
        done
    } | ./ex2_2
    echo ""
}

# First input set
test1=(4.0 2.0 2.0 1.0 3.0 6.0 3 1.0 1.0 1.0 1.0)
input_values 1 "${test1[@]}"

# Second input set
test2=(2.0 1.0 4.0 2.0 3.0 6.0 3 2.0 3.0 4.0)
input_values 2 "${test2[@]}"

# Third input set
test3=(10.0 6.0 6.0 4.0 8.0 14.0 4 1.0 2.0 3.0 4.0)
input_values 3 "${test3[@]}"

