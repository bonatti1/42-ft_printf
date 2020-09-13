#include "libftprintf.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int				countc;
	unsigned int	varuint = 4294967295;
	char			*prtpointer = "quarenta e dois";
	int				numero = 0;

	if (argc > 1)
		ft_printf(argv[1], argv[2]);
	else
	{/*
		ft_printf("------------ sem padding -------------\n");
		countc = ft_printf("ft Pct: %% c=");
		ft_printf("%i\n", countc);
		countc =    printf("df Pct: %% c=");
		   printf("%i\n", countc);
		countc = ft_printf("ft Cha: %c c=", 'a');
		ft_printf("%i\n", countc);
		countc =    printf("df Cha: %c c=", 'a');
		   printf("%i\n", countc);
		countc = ft_printf("ft Str: %s c=", "quarenta e dois");
		ft_printf("%i\n", countc);
		countc =    printf("df Str: %s c=", "quarenta e dois");
		   printf("%i\n", countc);
		countc = ft_printf("ft Int_Min: %i c=", -214748348);
		ft_printf("%i\n", countc);
		countc =    printf("df Int_Min: %i c=", -214748348);
		   printf("%i\n", countc);
		countc = ft_printf("ft Int_Max: %i c=", 214748347);
		ft_printf("%i\n", countc);
		countc =    printf("df Int_Max: %i c=", 214748347);
		   printf("%i\n", countc);
		countc = ft_printf("ft Uint_Max: %u c=", varuint);
		ft_printf("%i\n", countc);
		countc =    printf("df Uint_Max: %u c=", varuint);
		   printf("%i\n", countc);
		countc = ft_printf("ft Hex: %x c=", 92);
		ft_printf("%i\n", countc);
		countc =    printf("df Hex: %x c=", 92);
		   printf("%i\n", countc);
		countc = ft_printf("ft HEX: %X c=", 92);
		ft_printf("%i\n", countc);
		countc =    printf("df HEX: %X c=", 92);
		   printf("%i\n", countc);
		countc = ft_printf("ft Ptr: %p c=", prtpointer);
		ft_printf("%i\n", countc);
		countc =    printf("df Ptr: %p c=", prtpointer);
		   printf("%i\n", countc);
		//-----------------------------------------------------------------
		ft_printf("----------- com padding + ------------\n");
		countc = ft_printf("ft Pct: %25% c=");
		ft_printf("%i\n", countc);
		countc =    printf("df Pct: %% c=");
		   printf("%i\n", countc);
		countc = ft_printf("ft Cha: %25c c=", 'a');
		ft_printf("%i\n", countc);
		countc =    printf("df Cha: %25c c=", 'a');
		   printf("%i\n", countc);
		countc = ft_printf("ft Str: %25s c=", "quarenta e dois");
		ft_printf("%i\n", countc);
		countc =    printf("df Str: %25s c=", "quarenta e dois");
		   printf("%i\n", countc);
		countc = ft_printf("ft Int_Min: %21i c=", -214748348);
		ft_printf("%i\n", countc);
		countc =    printf("df Int_Min: %21i c=", -214748348);
		   printf("%i\n", countc);
		countc = ft_printf("ft Int_Max: %21i c=", 214748347);
		ft_printf("%i\n", countc);
		countc =    printf("df Int_Max: %21i c=", 214748347);
		   printf("%i\n", countc);
		countc = ft_printf("ft Uint_Max: %20u c=", varuint);
		ft_printf("%i\n", countc);
		countc =    printf("df Uint_Max: %20u c=", varuint);
		   printf("%i\n", countc);
		countc = ft_printf("ft Hex: %25x c=", 92);
		ft_printf("%i\n", countc);
		countc =    printf("df Hex: %25x c=", 92);
		   printf("%i\n", countc);
		countc = ft_printf("ft HEX: %25X c=", 92);
		ft_printf("%i\n", countc);
		countc =    printf("df HEX: %25X c=", 92);
		   printf("%i\n", countc);
		countc = ft_printf("ft Ptr: %25p c=", prtpointer);
		ft_printf("%i\n", countc);
		countc =    printf("df Ptr: %25p c=", prtpointer);
		   printf("%i\n", countc);
		//-----------------------------------------------------------------
		ft_printf("----------- com padding 1 ------------\n");
		countc = ft_printf("ft Pct: %1% c=");
		ft_printf("%i\n", countc);
		countc =    printf("df Pct: %% c=");
		   printf("%i\n", countc);
		countc = ft_printf("ft Cha: %1c c=", 'a');
		ft_printf("%i\n", countc);
		countc =    printf("df Cha: %1c c=", 'a');
		   printf("%i\n", countc);
		countc = ft_printf("ft Str: %1s c=", "quarenta e dois");
		ft_printf("%i\n", countc);
		countc =    printf("df Str: %1s c=", "quarenta e dois");
		   printf("%i\n", countc);
		countc = ft_printf("ft Int_Min: %1i c=", -214748348);
		ft_printf("%i\n", countc);
		countc =    printf("df Int_Min: %1i c=", -214748348);
		   printf("%i\n", countc);
		countc = ft_printf("ft Int_Max: %1i c=", 214748347);
		ft_printf("%i\n", countc);
		countc =    printf("df Int_Max: %1i c=", 214748347);
		   printf("%i\n", countc);
		countc = ft_printf("ft Uint_Max: %1u c=", varuint);
		ft_printf("%i\n", countc);
		countc =    printf("df Uint_Max: %1u c=", varuint);
		   printf("%i\n", countc);
		countc = ft_printf("ft Hex: %1x c=", 92);
		ft_printf("%i\n", countc);
		countc =    printf("df Hex: %1x c=", 92);
		   printf("%i\n", countc);
		countc = ft_printf("ft HEX: %1X c=", 92);
		ft_printf("%i\n", countc);
		countc =    printf("df HEX: %1X c=", 92);
		   printf("%i\n", countc);
		countc = ft_printf("ft Ptr: %1p c=", prtpointer);
		ft_printf("%i\n", countc);
		countc =    printf("df Ptr: %1p c=", prtpointer);
		   printf("%i\n", countc);
		//-----------------------------------------------------------------
		ft_printf("----------- com padding - ------------\n");
		countc = ft_printf("ft Pct: %-25% c=");
		ft_printf("%i\n", countc);
		countc =    printf("df Pct: %% c=");
		   printf("%i\n", countc);
		countc = ft_printf("ft Cha: %-25c c=", 'a');
		ft_printf("%i\n", countc);
		countc =    printf("df Cha: %-25c c=", 'a');
		   printf("%i\n", countc);
		countc = ft_printf("ft Str: %-25s c=", "quarenta e dois");
		ft_printf("%i\n", countc);
		countc =    printf("df Str: %-25s c=", "quarenta e dois");
		   printf("%i\n", countc);
		countc = ft_printf("ft Int_Min: %-21i c=", -214748348);
		ft_printf("%i\n", countc);
		countc =    printf("df Int_Min: %-21i c=", -214748348);
		   printf("%i\n", countc);
		countc = ft_printf("ft Int_Max: %-21i c=", 214748347);
		ft_printf("%i\n", countc);
		countc =    printf("df Int_Max: %-21i c=", 214748347);
		   printf("%i\n", countc);
		countc = ft_printf("ft Uint_Max: %-20u c=", varuint);
		ft_printf("%i\n", countc);
		countc =    printf("df Uint_Max: %-20u c=", varuint);
		   printf("%i\n", countc);
		countc = ft_printf("ft Hex: %-25x c=", 92);
		ft_printf("%i\n", countc);
		countc =    printf("df Hex: %-25x c=", 92);
		   printf("%i\n", countc);
		countc = ft_printf("ft HEX: %-25X c=", 92);
		ft_printf("%i\n", countc);
		countc =    printf("df HEX: %-25X c=", 92);
		   printf("%i\n", countc);
		countc = ft_printf("ft Ptr: %-25p c=", prtpointer);
		ft_printf("%i\n", countc);
		countc =    printf("df Ptr: %-25p c=", prtpointer);
		   printf("%i\n", countc);
		//-----------------------------------------------------------------
		ft_printf("----------- com padding 0 ------------\n");
		countc = ft_printf("ft Pct: %025% c=");
		ft_printf("%i\n", countc);
		countc =    printf("df Pct: %% c=");
		   printf("%i\n", countc);
		countc = ft_printf("ft Cha: %025c c=", 'a');
		ft_printf("%i\n", countc);
		countc =    printf("df Cha: %25c c=", 'a');
		   printf("%i\n", countc);
		countc = ft_printf("ft Str: %025s c=", "quarenta e dois");
		ft_printf("%i\n", countc);
		countc =    printf("df Str: %25s c=", "quarenta e dois");
		   printf("%i\n", countc);
		countc = ft_printf("ft Int_Min: %021i c=", -214748348);
		ft_printf("%i\n", countc);
		countc =    printf("df Int_Min: %021i c=", -214748348);
		   printf("%i\n", countc);
		countc = ft_printf("ft Int_Max: %021i c=", 214748347);
		ft_printf("%i\n", countc);
		countc =    printf("df Int_Max: %021i c=", 214748347);
		   printf("%i\n", countc);
		countc = ft_printf("ft Uint_Max: %020u c=", varuint);
		ft_printf("%i\n", countc);
		countc =    printf("df Uint_Max: %020u c=", varuint);
		   printf("%i\n", countc);
		countc = ft_printf("ft Hex: %025x c=", 92);
		ft_printf("%i\n", countc);
		countc =    printf("df Hex: %025x c=", 92);
		   printf("%i\n", countc);
		countc = ft_printf("ft HEX: %025X c=", 92);
		ft_printf("%i\n", countc);
		countc =    printf("df HEX: %025X c=", 92);
		   printf("%i\n", countc);
		countc = ft_printf("ft Ptr: %025p c=", prtpointer);
		ft_printf("%i\n", countc);
		countc =    printf("df Ptr: %25p c=", prtpointer);
		   printf("%i\n", countc);
		
		//    printf("----------------- n ------------------\n");
		// numero = 0;
		// countc = ft_printf("ft: casa%n branca.\n", &numero);
		// ft_printf("retorno: %d, ptr: %d\n", countc, numero);
		// countc =    printf("df: casa%n branca.\n", &numero);
		//       printf("retorno: %d, ptr: %d\n", countc, numero);
		   
		   printf("----------------- * -------------------\n");
		numero = 2;
		countc = ft_printf("ft: <%*d> c=", 10, numero);
		ft_printf("%i\n", countc);
		countc = printf("df: <%*d> c=", 10, numero);
		printf("%i\n", countc);
		countc = ft_printf("ft: <%-*d> c=", 10, numero);
		ft_printf("%i\n", countc);
		countc =    printf("df: <%-*d> c=", 10, numero);
		printf("%i\n", countc);
		   printf("------------- precision --------------\n");
		numero = 0;
		countc =    printf("df: <%.*d> c=", 0, numero);
		printf("%i\n", countc);
		countc = ft_printf("ft: <%.*d> c=", 0, numero);
		ft_printf("%i\n", countc);
		countc =    printf("df: <%10.*d> c=", 0, numero);
		printf("%i\n", countc);
		countc = ft_printf("ft: <%10.*d> c=", 0, numero);
		ft_printf("%i\n", countc);
		countc =    printf("df: <%20.*u> c=", 8, numero);
		printf("%i\n", countc);
		countc = ft_printf("ft: <%20.*u> c=", 8, numero);
		ft_printf("%i\n", countc);
		countc =    printf("df: <%10.*x> c=", 8, numero);
		printf("%i\n", countc);
		countc = ft_printf("ft: <%10.*x> c=", 8, numero);
		ft_printf("%i\n", countc);
		countc =    printf("df: <%10.*X> c=", 8, numero);
		printf("%i\n", countc);
		countc = ft_printf("ft: <%10.*X> c=", 8, numero);
		ft_printf("%i\n", countc);*/
		printf("------------ precision str------------\n");
		char *testeprecision = "cinco";
		countc = ft_printf("ft: <%10.*s> c=", 3, testeprecision);
		ft_printf("%i\n", countc);
		countc =    printf("df: <%10.*s> c=", 3, testeprecision);
		printf("%i\n", countc);
		countc = ft_printf("ft: <%10.3s> c=", testeprecision);
		ft_printf("%i\n", countc);
		countc =    printf("df: <%10.3s> c=", testeprecision);
		printf("%i\n", countc);
		printf("-------------- test fixes --------------\n");
		
		countc = ft_printf("ft: <%5%> c=");
		ft_printf("%i\n", countc);
		
		countc = ft_printf("ft: <%-5%> c=");
		ft_printf("%i\n", countc);
		
		countc = ft_printf("ft: <%05%> c=");
		ft_printf("%i\n", countc);
		
		countc = ft_printf("ft: <%-05%> c=");
		ft_printf("%i\n", countc);
		
		countc = ft_printf("ft: <%.7s> c=", "hello");
		ft_printf("%i\n", countc);
		
		countc = ft_printf("ft: <%.s> c=", "hello");
		ft_printf("%i\n", countc);
		
		countc = ft_printf("ft: <%.0s> c=", "hello");
		ft_printf("%i\n", countc);
		
		countc = ft_printf("ft: <%.2s%.7s> c=", "hello", "world");
		ft_printf("%i\n", countc);

		countc = ft_printf("ft: <%.7s%.2s> c=", "hello", "world");
		ft_printf("%i\n", countc);

		countc = ft_printf("ft: <%.5s%.7s> c=", "yo", "boi");
		ft_printf("%i\n", countc);

		countc = ft_printf("ft: <%7.5s> c=", "yolo");
		ft_printf("%i\n", countc);

		countc = ft_printf("ft: <%-7.5s> c=", "yolo");
		ft_printf("%i\n", countc);

		countc = ft_printf("ft: <%08.5i> c=", 34);
		ft_printf("%i\n", countc);

		countc = ft_printf("ft: <%010.5i> c=", -216);
		ft_printf("%i\n", countc);

	}
	return (0);
}