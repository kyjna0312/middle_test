union un{
	int a;
	int b;
};

int main(){
	union un n;

	n.b = 'A';
	n.a = 100;

	return 0;
}


