for((i=2; i <=30; i++));
do
    echo t$i
        ./ssuCompiler ./testfileYG/t$i.c > ./testfileYG/sem/sem$i
    
    echo interpreter$i
    ./interp a.asm > ./testfileYG/code/code$i
done