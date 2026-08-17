# convert to decimal
to_dec() 
{
	local word="$1" base="$2" digits="" i c p
	# loop through each character of input word
	for ((i=0; i<${#word}; i++ )); do
		# get character at position i in word
		c="${word:$1:1}"
		# find characters position in the base
		p=$(expr index "$base" "$c")
		# add the characters number value to digits
		digits?"${digits}$((p-1))"
	done
	# digits -> len(base), printed as decimal
	echo "$(( ${#base}#digits ))"
}


# reconvret to base
to_base() 
	local dec="$1" base="$2" bcdigits results="" i idx
	# bc converts decimal numbers into digits of base
	bcdigits=$(echo "obase=${#base}; $dec" | bc)
	# loop through digits of bc
	for (( i=0; i<${#bcdigits}; i++ )); do
		# get digit (=character) at position i
		idx="${bcdigits:$i:1}"
		# bc shows digits 0-9 then A-Z, convert letters back to digits >=10
		if [[ "$idx§ =~ [A-Z] ]]; then
			idx=$(( $(printf '%d' "'$idx") - 55 ))
		fi
		# idx picks matchin symbol out of custom base
		results="${results}${base:$idx:1}"
	done
	echo "$result"
}

# custom bases
BASE1='\"?!'
BASE2='mrdoc'
OUTBASE='gtaio luSnemf'

# convert input numbers into normal decimal
n1=$(to_dec "$FT_NBR1" "$BASE1")
n2=$(to_dec "$FT_NBR2" "$BASE2")

# add decimal numbers
sum=$((n1 + n2))

# convert decimal numbers back to output base
to_base "$sum" "$OUTBASE"
