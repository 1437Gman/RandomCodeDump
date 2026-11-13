#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

//prototypes

int myStrlen (const char s[]);
void myStrcpy (char dest[], const char src[]);
int myStrcmp (const char a[], const char b[]);

int isPalindrome ();

void CCipher (char str[], int del);

int main() {
	//FOR LOOP EXPERIMENTS
    int i =0;
    
    printf("%d",i);
    for(;i<10;){
        printf("%d",i);
        i++;
        printf("%d",i);
    }
    
    printf("%d",i);
    
    for (i=0;i<10;i<-1){
        printf("%d",i);
        i++;
    }
    
    printf("%d",i);
    
    i=0;
    /*while(i<10){
        for (;;) {
            printf("%d",i);
            i++;
        }
        printf("%d",i);
    }*/
    
    //runs infinitely after checking once
    
    i=0;
    /*do { for (;;) {
        printf("%d",i);
        i++;
    }
    } while (i<10);*/
    
    //runs infinitely never even checks the while part since "runs once without check"
    
    printf("%d",i);
    
    i=0;
    for(i<0;i==0;i<0){
        printf("%d",i);
        i++;
    }
    printf("%d",i);
    
    /*bool bool; //can't do this
    int int;*/
    
    bool boo;
    int inte;
    /*When you declare a local variable inside a function without
    giving it a starting value C does not automatically clean or clear
    that memory it reuses whatever random data (garbage value) was 
    already sitting in that specific memory slot on the stack from
    previous operations*/
    
    printf("\n%d\n%d\n",boo, inte);
    
    //char and %c prolly gives random letters via ascii
    
    //speaking of ascii
    printf("Aa10' ': %d %d %d %d %d\n",'A','a', '1', '0', ' ');
    
    char line[10];
    for (int j =0; j<10; j++) {
        printf("%c ",line[j]);
    }
    printf("\n");
    
    char line2[10]="hello";
    for (int j =0; j<10; j++) {
        printf("%c ",line2[j]);
    }
    printf("\n");
    
    //line2[4]="\0"; gives an error since "xyz" is treated as a 'string literal'
    /*string literals are not just in strlib, and are stored as a string of
    'xyz\0' so here we ended up giving '\0\0'*/
    
    //means it essentially tries to assign a character array to a character
    
    //line2[4]=""; also doesn't work, assigning address not value via this
    line2[4]='\0';
    
    for (int j =0; j<10; j++) {
        printf("%c",line2[j]);
    }
    printf("blimeywhat\n");
    //hellblimeywhat
    
    printf("%d%c\n\n\n",line2[8],line2[7]);	//0[invisout]
    
    //LABSHEET BEGINS HERE
    //SWITCHING TO REGULAR TAB(key) RULES
    
	char c = 'c';
	int posc = c-'a'+1;
	char upper = c-'a'+'A';		//cuz they aint gay in CS
	
	char seven = '7';
	
	printf("%d %c\n",seven,seven);
	
	char a[10] = "Hello";
	char b[] = "Hello";
	char t[6] = {'H','e','l','l','o','\0'};
	char u[8] = {'H','e','l','l','o','\0'};
	char s[6] = {'H','e','l','l'};
	
	printf("%c%c %c%c",u[7],s[5],s[6],s[9]);	//Yes this deadass runs
	
	//You genuinely get a random character for s[6], s[9], and null in other, and it's
	//'h g' not ' h  g' (obviously)
	
	
	char str[10];
	scanf("%s", str);		//arrays are addresses & .'. & not required
	scanf("%10s", str);		//Bounded to n
	scanf("%10[^\n]", str);		//this is NOT %s AT ALL, it's a newline reading type or sumth
					/*scanf stops at whitespace normally;
					also if you take more than 10 inputs in first, it ignores after the cap
					in second it takes exceeding into the next line fgs wtf
					same with 3
					you actually end up not scanf-ing the following scanfs of an overloaded scanf
					
					when you press space in the first one the whole thing freaks out let me show you*/
	
	//Stuff I ran in GDB
					
	char t1;
    	//char str[10];			already declared
	scanf("%s", str);		//arrays are addresses & .'. & not required
	for (int i=0; i<10; i++){
	    printf("%c",str[i]);
	}
	printf("\n");
	scanf("%10s", str);		//Bounded to n
	for (int i=0; i<10; i++){
	    printf("%c",str[i]);
	}
	printf("\n");
	scanf("%10[^\n]", str);		//this is NOT %s AT ALL, it's a newline reading type or sumth
	for (int i=0; i<10; i++){
	    printf("%c",str[i]);
	}
	
	printf("\n");
	scanf("%10[^\n]", &t1);
	printf("%c",t1);
	printf("\n");
	char c1;
	scanf("%10[^\n]", &c1);
	printf("%c",c1);
	printf("\n");
	
	
	
	printf("\n");
	
	
	/*OUTPUT 1
	2383 3474788
	2383p0?
	34747880?
	34747880?
	+
	?
	
	//wherever it says ? there was legit those error characters: question marks in diamonds "unrepresentable" meaning chars.
	
	OUTPUT 2
	uihciuhqliuchwcdcliudw
	uihciuhqli
	uehciuheiuewiuhiue
	uehciuheiu
	ewiuhiueu

	?
	
	OUTPUT 3
	iuqdeiuhdiueqhdiuehdiuehd
	iuqdeiuhdi
	euhdquehiudedqiheiudheq
	euhdquehiu
	dedqiheiud
	h
	?
	
	Since the Q marks may be a GDB thing, they are not imp, the carryforward qualities are.*/
	
	//SO ULTIMATELY
	
	fgets(str, sizeof(str), stdin);	//standard input
	//no overflow and only next on newline, but it comes as \n\0 so u need code to change \n to \0
	
			
				
				//<string.h> TOOLBOX
	
	char delims[010];
	char source[10];
	char destination[10];
	strlen(str); //9 (it is a loop function so do not call inside a loop jic var mix match in lib)
	strcpy(destination, source); //copy (only same size to same size)
	strcmp(a,b);	//compare (0 if equal, <0 if a sorts first, >0 otherwise)
			//if(strcmp[a,b]) --> if !=0
	strcspn(str,"rejected chars r here");	//complement (set theory) span (length of)
				//length of complement to rejects
	//
	strtok(s, delims);	//requires pointers to use, we'll be back later
	
	
				//<ctype.h> TOOLBOX
				
	int resultalph = isalpha((unsigned char)c);
	printf("\n\n%d\n\n",resultalph);
	//deadass not imp for lab due to lack of presence in labsheet, and it just straight simple and memorization, just check it out ig...
	
	char dict[5][20] = {"apple", "banana", "coconut", "date", "fig"};	//looks so nice coincidentally following string logic
	
	int n=5;
	for (int i = 0; i < n; i++) printf("%s\n", dict[i]);	//there's so many reasons why this shouldn't work but it will
	
	
	//Common bugz
	
	char dest[10];
	printf("%s\n", dest);
	char src[10] = "Hellos";
	for (int i = 0; i < 5; i++) dest[i] = src[i];
	printf("%s\n", dest); // prints "Hello" plus garbage
	printf("%c",dest[7]);
	
	//grabage may get cutoff by a coincidental \0 or sumth, idt it matters tho, whenever you don't see a portion of a string that shud be garbage just say garbage anyway
	
	char name[5];
	strcpy(name, "Programming");

	printf("%s",name);
	
	/*genuinely long ass warning msg but then it ACTUALLY PRINTS "Programming" :O*/
	
	char city[20];
	fgets(city, sizeof(city), stdin); // user types "Surat"
	if (strcmp(city, "Surat") == 0); // false! city is "Surat\n"
	printf("\nGet rekt\n");
	
	printf("\nNow we run all of our versions of shit\n");
	
	printf("City name length = %d",myStrlen(city));
	/*Calling a function and inputting a string into that actually edits the original string/array and doesn't make a copy,
	since they had to be memory efficient with it*/
	//Yes this jus a random piece of randomly genuinely deep stuff for no rzn at all
	
	//It has implications yes
	//StrCpy has a void return type, but stil changes and edits the whole array it was called to destination in main
	
	//source = "Cyberpunk"; only direct assignement when defining
	char text[] = "Cyberpunk";
	
	int z;
	for (int i = 0; text[i] != '\0'; i++) {
    		source[i] = text[i];
    		z=i+1;
	}
	source[z] = '\0';
	
	
	myStrcpy(destination, source);
	
	//StrCmp gives the difference between the corresponding elements ascii numbers: either the first place where they differ or when \0 comes, (yes it can be both depending on the context)
	
	printf("%d is the comparison",myStrcmp(destination, source));
	
	//Palindromes
	
	//ts is actually deep fkn hell
	printf("Palindrome question: ");
	printf("%d",isPalindrome());
	
	//Caeser Cipher is the encryption via c = c+del
	printf("\ndestination string is currently %s \n",destination);
	printf("Enter shift/delta for caeser cipher: ");
	int shift;
	scanf("%d",&shift);
	
	CCipher (destination, shift);
	printf("\nEncrypted: %s\n",destination);
	
	CCipher (destination, -shift);
	printf("\nDecrypted: %s\n",destination);
	
	
	
	
	
	
	
	return 0;
}




//FUNCTIONS

int myStrlen (const char s[]) { //deadass just cuz safety first
	int L =0;
	while (s[L] != '\0'){	//Remember why no ""
		L++;
	}
	return L;
}

void myStrcpy (char dest[], const char src[]){
	int i = 0;
	while (src[i] != '\0'){
		dest[i] = src[i];
		i++;
	}
	
	dest[i]='\0';
	//yes this dznt deal with darbade of length dest- length src
	
}

int myStrcmp (const char a[], const char b[]){
	int i = 0;
	while (a[i] != '\0'&&a[i]==b[i]) {
		i++;
	}
	
	return a[i]-b[i];
}
		
int isPalindrome () {
	char s[200];
	printf("Enter a string: ");
	fgets(s, sizeof(s), stdin);
	
	int len = strlen(s);
	int len2 = myStrlen(s);
	
	if (len != len2){
		return -44;
	}
	//break; doesn't work here
	
	//yes this part is just me being a nerd and wanting to check if the thing I made is correct
	
	if (len>0 && s[len-1]=='\n'){
		s[len-1] = '\0';
		len--;
	}
	//think what would happen if len was 0
	
	/*If a user presses Ctrl+D (Linux/Mac) or Ctrl+Z (Windows) immediately without typing anything—or if you redirect an empty text
	file into the program—fgets reads zero characters and len is 0.*/
	//fgets also stops readin when destination memory is exceded
	
	int left = 0, right = len-1;
	bool isPal = true;
	
	//deep begins here
	while (left<right) {
		while (left<right && !isalnum((unsigned char) s[left])) left++;
		while (left<right && !isalnum((unsigned char) s[right])) right--;
		
		//The point of this is to straight up ignore punctuation and spaces and all
		//it essentially skips a character from only one side
		/*it's in a loop since if there's consecutive !isalnum: the opposite side will get an increment at the end of the
		bigger while loop, which causes read mismatch (obviously)*/
		//unsigned char is cuz ctype library can't read in the normal way
		
		/*if you didn't get this, read the bigger while loop completely and then come back, still no get then
		just try and understand urself from scratch*/
		//Basically it's deep, dw
		
		if(tolower((unsigned char) s[left]) != tolower((unsigned char) s[right])) {
			isPal = false;
			break;
		}
		
		left++, right--;
		
	}
	
	if (isPal) {
		printf("\nPal\n");
		return 1;
	}
	else {
		printf("\nUnPal\n");
		return -1;
	}

}

void CCipher (char str[], int del) {
	
	printf("\nEncrypting...\n");
	int n = strlen(str);
	for (int i = 0; i<n; i++) {
		if (islower((unsigned char) str[i])) {
			str[i] = 'a'+((str[i]-'a'+del)%26+26)%26;
			printf("Changed %d",i);
		}
		if (isupper((unsigned char) str[i])) {
			str[i] = 'A'+((str[i]-'A'+del)%26+26)%26;
			printf("Changed %d",i);			
		}
		
	printf("...\n");
	}
	
	printf("Encrypted");
}
			

					

//Disclaimer: There is genuinely ABSURD potential for bugs in ts
//Every other thing I have had to debug especially since I barely understand what I'm doing lmao




