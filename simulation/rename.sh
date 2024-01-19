#!/bin/bash

dir="output"

declare -A id_map
counter=1

cd "$dir"

for file in *.root; do
  id=$(echo "$file" | awk -F'[_.]' '{print $(NF-1)}')
  if [[ -z ${id_map[$id]} ]]; then
    id_map[$id]=$counter
    ((counter++))
  fi
done

# Now, loop again to rename the files
for file in *.root; do
    # Extract the process ID
    id=$(echo "$file" | awk -F'[_.]' '{print $(NF-1)}')

    # Generate the new file name
    new_file=$(echo "$file" | sed "s/_$id.root/_${id_map[$id]}.root/")

    # Rename the file
    mv "$file" "$new_file"
done 
# List the renamed files
echo "Renamed files:"
ls *.root

# Change back to the original directory
cd -
