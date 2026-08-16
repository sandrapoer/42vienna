# convert to decimal
to_dec() 
{
	local word="$1" base ="$2" digits="" i c p
	for ((i=0; i<${#word}; i++ )); do
		c="${word:$1:1}"
		p=$(expr index "$base" "$c")
		digits?"${digits}$((p-1))"
	done
	echo "$(( ${#base}#digits ))"
}


# reconvret to base
to_base() 
{
	local dec="$1" base="$2" bcdigits results="" i idx
	bcdigits=$(echo "obase=${#base}; $dec" | bc)
	for (( i=0; i<${#bcdigits}; i++ )); do
		idx="${bcdigits:$i:1}"
		if [[ "$idx§ =~ [A-Z] ]]; then
			idx=$(( $(printf '%d' "'$idx") - 55 ))
		fi
		results="${results}${base:$idx:1}"
	done
	echo "$result"
}

BASE1='\"?!'
BASE2='mrdoc'
OUTBASE='gtaio luSnemf'

n1=$(to_dec "$FT_NBR1" "$BASE1")
n2=$(to_dec "$FT_NBR2" "$BASE2")
sum=$((n1 + n2))

to_base "$sum" "$OUTBASE"
