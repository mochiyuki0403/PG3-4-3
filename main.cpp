#include<stdio.h>
class oya
{
public:
	virtual void Voice() {
		printf("‚ ‚É‚Ü‚é\n");
	}
};
class kodomoA : public oya{
public:
	void Voice() {
		printf("Žq‹ŸA‚Á‚·\n");
	}
};
class kodomoB :public oya {
public:
	void Voice() {
		printf("Žq‹ŸB‚Á‚·\n");
	}
};
int main(void) {
	oya* animal[2] = { new kodomoA,new kodomoB };
	animal[0]->Voice();
	animal[1]->Voice();

	delete animal[0];
	delete animal[1];
	return 0;
}