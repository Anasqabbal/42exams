DIR=$(cat ../subjects/subject.en.txt | awk 'NR == 1 {print $4}')
FILE=$(cat ../subjects/subject.en.txt | awk 'NR == 2 {print $4}')
INC=$(cat ../subjects/subject.en.txt | awk 'NR == 3 {print $3}')
INC1=$(cat ../subjects/subject.en.txt | awk 'NR == 3 {print $4}')
INC2=$(cat ../subjects/subject.en.txt | awk 'NR == 3 {print $5}')
INC3=$(cat ../subjects/subject.en.txt | awk 'NR == 3 {print $6}')


mkdir ../rendu/$DIR
touch ../rendu/$DIR/$FILE

if [ "$INC" = "$func" ] || [ "$INC1" = "$func" ] || [ "$INC2" = "$func" ] || [ "$INC3" = "$func" ]
then
	echo "#include <unistd.h>" >> $DIR/$FILE
fi

func="malloc,"
func1="malloc"

if [ "$INC" = "$func" ] || [ "$INC1" = "$func" ] || [ "$INC2" = "$func" ] || [ "$INC3" = "$func" ]
then
	echo "#include <stdlib.h>" >> $DIR/$FILE
fi

# echo "$INC"
# echo "$INC1"
# echo "$INC2"
# echo "$INC3"
# echo "$func"

if [[ "$INC" = "$func" ]]
then
	echo "it is equal"
fi