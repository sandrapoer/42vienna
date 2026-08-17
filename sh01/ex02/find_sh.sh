find . -name "*.sh" -exec basename -s .sh {} \;

# find .               -> recursively 
# -type f              -> files
# -name "*.sh"         -> ending in .sh
# exec basename -s .sh -> extract name of file (basename) without path and remove suffix 
# {}                   -> placeholder for paht that find found
# \;                   -> end of execution command