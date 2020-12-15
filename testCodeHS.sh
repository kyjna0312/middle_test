for((i=1; i <=15; i++));
do
    echo test$i
        ./ssuCompiler ./testfileHS/test$i.c > ./testfileHS/sem/sem$i
    
    echo interpreter$i
    ./interp a.asm > ./testfileHS/code/code$i
done