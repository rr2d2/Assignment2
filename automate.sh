echo “Script Started!”

for a in S B I H R
do
  echo "Pass $a"
  echo "---------------------"

  # ===============================================

  for b in Inc Ran Dec
  do
    echo "Pass $b"
	for c in 1 2 3 4
        do
           ./sort -a $a -f input$b$c.txt -o out$a$b$c.txt -t -c
	done
  done
  # ===============================================
  echo              # Space between output blocks in pass of outer loop.
done

exit 0
echo “Script Ended!”

