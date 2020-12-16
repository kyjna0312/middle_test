union data{
 int n;
 float f;
 char c;
};

int main() {

 union data Data1;
 Data1.n = 5;
 printf("%d\n", Data1.n);
 Data1.c = 'E';
 printf("%c\n", Data1.c);
 printf("%d\n", Data1.n);

 return 0;
}