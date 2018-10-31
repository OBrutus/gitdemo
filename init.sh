sudo chmod +777 code.c
gcc code.c
echo "At any time to exit press ctrl+C\nDo you Continue [y/n]"
read var
if [ var -ne y ];then
	exit
fi
./a.out
sudo chmod -777 code.c

