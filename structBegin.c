#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>



int main () {
	
	char c = 'A';
	
	if (isalpha(c)) {
		printf("c is an alphabet\n");
	}
	else {
		printf("Not alphabet\n");
	}
	
	bool w = isalpha(c);
	
	printf("%d %c\n",w,w);
	
	//Anyways, structures now
	
	struct student {
		char name[50];
		int ID;
		double CG;
	};
	
	struct student first;
	struct student second;
	
	//already has a value so you can't:
	/*first.name = "David Martinez";
	second.name = {'L','u','c','y'};*/
	
	strcpy(first.name, "David Martinez");
	
	struct student third = {"Rebecca",2031,7.5};
	
	/*If you assign 8.75 to a float, the compiler initially saves it as a
	double, then converts to a float after seeing dtype, also gives a warning
	about precision loss.
	If you write 8.75f, it automatically saves as a float.*/
	
	printf ("\nEnter roll number of David: \n") ;	//1437
	if ( scanf ("%d", & first.ID ) != 1)
		return 1;
		
	printf ("\nEnter roll number of Lucy: ") ;		//0073
	if ( scanf ("%d", & second.ID ) != 1)
		return 1;
		
	printf ("\nEnter 'Lucy': ") ;
	if ( scanf ("%s", second.name ) != 1)
		return 1;
		
	printf ("\nEnter CGPA of David: ") ;
	if ( scanf ("%lf", & first . CG ) != 1)
		return 1;
	
	printf ("\nEnter CGPA of Lucy: ") ;
	if ( scanf ("%lf", & second . CG ) != 1)
		return 1;
		
	struct student students2[3];
	
	//Maine, Rick, OptimusPrime
	
	for (int i =0; i<3; i++) {
		if (scanf("%s %d %lf", students2[i].name, &students2[i].ID, &students2[i].CG) != 3) {
			printf("Invalid input/coder gey idrk");
			return -23;
		}
	
	}
	
	printf("\n\n\nNewly added records: \n\n");
	
	for (int i =0; i<3; i++) {
		printf("%s\n",students2[i].name);
		printf("%d\n",students2[i].ID);
		printf("%lf\n",students2[i].CG);
	}
	
	printf("\n");
	
	
	
	
	return 0;

}


