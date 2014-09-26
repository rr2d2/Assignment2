if ! [ -e sort ]
then
    make
fi

echo “Script Started!”

for a in S
do
  echo "Pass $a"
  echo "---------------------"

  # ===============================================

  for b in Ran
  do
    echo "Pass $b"
	for c in 1 2 3 4
        do
           ./sort -a $a -f input$b$c.txt -o InputInc$c.txt -p
	done
  done
  # ===============================================
  echo              # Space between output blocks in pass of outer loop.
done

exit 0
echo “Script Ended!”

