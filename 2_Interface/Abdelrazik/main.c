#include "ADC.h"
#include "Bitwise.h"
#include "DIO.h"
#include "std_types.h"
#include "Mem_Maps.h"


uint8 name[] = "Ahmad Abdelrazik\n";

int main()
{
	uint8 it = 0;
	UART_init();
	while(1)
	{
		while(name[it] != '\0')
		{
			UART_Tx(name[it]);
			it++;
		}
		it = 0;
	}
	return (0);
}
