#!/bin/zsh
code "Partition&Flex/@Partition&Flex.anm"
for d ($(cat cped.txt)); do
    open "${d}/README.md"
    find "${d}" -type f -d 1 | grep -v README | xargs code 
    open "${d}"
    read \?"Now: ${d}; press any key when you finish to edit: "
    sed -i -e "s/${d}//g" cped.txt
done
echo "Done!"