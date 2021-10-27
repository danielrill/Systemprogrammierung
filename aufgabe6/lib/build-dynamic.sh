for s in benotung.cpp fachnote.cpp fachnoten_liste.cpp ; do
	compile_command="g++ -g -c -W -Wall -Werror -Weffc++ -Wold-style-cast -std=c++11 -pedantic -fpic $s"
	echo $compile_command
	eval $compile_command
	if [ $? -ne 0 ] ; then
		echo build failed
		exit 1
	fi
done
libaufgabe6="g++ -shared benotung.o fachnote.o fachnoten_liste.o -o libaufgabe6.so"
echo $libaufgabe6
eval $libaufgabe6
if [ $? -ne 0 ] ; then
	echo build failed
	exit 1
fi
echo build successfull
