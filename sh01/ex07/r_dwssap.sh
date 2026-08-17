cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | cut -d: -f1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | paste -sd, - | sed 's/,/, /g; s/$/./'

# show content of system login
# remove lines with comments = starting with #
# -n suppresses automatic printin, n skips line, p prints line
# ectracts column before : -> username
# reverse character order
# print lines of given variable range including line2 value
# join with commas
# comma separated and last ends with .
