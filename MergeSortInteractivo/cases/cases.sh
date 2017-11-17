echo $2 > $1.in
for((i=0;i < $2;i++))
do
  echo $(( ( RANDOM % $2 )  + 1 )) >> $1.in 
done
