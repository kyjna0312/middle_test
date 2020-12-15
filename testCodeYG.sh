for((i=2; i <=30; i++));
do
    echo test$i
        ./ssuCompiler ./testfileYG/test$i.c > ./testfileYG/sem/sem$i
    
    echo interpreter$i
    ./interp a.asm > ./testfileYG/code/code$i
done