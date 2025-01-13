# include <stdio.h>



struct address{
	char province[20];
	char district[50];
	char city[50];
	int ward;
};

struct students{
	int roll_no;
	char name[50];
	struct address a1;
	int mark;
};

int main(){
	struct students s1;
	scanf("%d", &s1.roll_no);
	scanf("%s", s1.name);
	scanf("%s", s1.a1.province);
	scanf("%s", s1.a1.district);
	scanf("%s", s1.a1.city);
	scanf("%d", &s1.a1.ward);
	scanf("%d", &s1.mark);
	
	printf("%d %s %s %s %s %d %d", s1.roll_no, s1.name, s1.a1.province, s1.a1.district, s1.a1.city, s1.a1.ward, s1.mark);
	return 0;
}