#include <stdio.h>

int	main()
{
	/*
		Comment
	*/
	char *source = "#include <stdio.h>%c%cint%cmain()%c{%c%c/*%c%c%cComment%c%c*/%c%cchar *source = %c%s%c;%c%cprintf(source, 10, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, source, 34, 10, 9, 10);%c}";
	printf(source, 10, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, source, 34, 10, 9, 10);
}