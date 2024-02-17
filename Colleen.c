// :)
#include <stdio.h>

/*
	Comment Outside of Functions
*/

void	print_smiley()
{
	printf("// :)");
}

int	main()
{
	/*
		Comment inside of main
	*/
	char *source = "%c#include <stdio.h>%c%c/*%c%cComment Outside of Functions%c*/%c%cvoid%cprint_smiley()%c{%c%cprintf(%c// :)%c);%c}%c%cint%cmain()%c{%c%c/*%c%c%cComment inside of main%c%c*/%c%cchar *source = %c%s%c;%c%cprint_smiley();%c%cprintf(source, 10, 10, 10, 10, 9, 10, 10, 10, 9, 10, 10, 9, 34, 34, 10, 10, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, source, 34, 10, 9, 10, 9, 10);%c}";
	print_smiley();
	printf(source, 10, 10, 10, 10, 9, 10, 10, 10, 9, 10, 10, 9, 34, 34, 10, 10, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, source, 34, 10, 9, 10, 9, 10);
}