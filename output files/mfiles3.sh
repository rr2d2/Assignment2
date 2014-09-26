echo “script started”

for a in S B I H R
   do 
     echo “pass $a”
     echo “———————”
  for d in 1 2 3 4
   do
	for b in Inc Ran Dec
	do
	   echo “Pass $b”
		for c in 7 8 9
		do
           mv out$a$b$d.txt  out$a$b$d$c.txt
		   mv out$a$b$d$c.txt  $a$d
		done
	done
	echo
   done
  done
  exit 0
   echo “script ended”