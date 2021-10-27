for s in benotung.cpp fachnote.cpp fachnoten_liste.cpp ; do
	compile_command="g++ -c -W -Wall -Werror -Weffc++ -Wold-style-cast -std=c++11 -pedantic $s"
	echo $compile_command
	eval $compile_command
	if [ $? -ne 0 ] ; then
		echo build failed
		exit 1
	fi
done
libaufgabe6="ar rs libaufgabe6.a benotung.o fachnote.o fachnoten_liste.o"
echo $libaufgabe6
eval $libaufgabe6
if [ $? -ne 0 ] ; then
	echo build failed
	exit 1
fi
echo build successfull
