union data{
	int n;
	float f;
	char c;
};

int main() {
	union data Data1;
	Data1.n = 5;
	
	Data1.c = 'E';
	
	return 0;
}


