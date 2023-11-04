/**
* Author: Ahmad Abdelrazik.
* Date: 11 / 08 /2023
* Brief: DIO drivers.
*/

/******* Macros Start *******/

#define A0 0
#define A1 1
#define A2 2
#define A3 3
#define A4 4
#define A5 5
#define A6 6
#define A7 7





#define Clear_Bit(Reg, bit) Reg &= ~(1 << bit)
#define Set_Bit(Reg, bit)   Reg |= (1 << bit)
#define Read_Bit(Reg, bit)  ((Reg >> bit) & 1)

/******* Macros End *********/

void DIO_INIT(uint8);
void DIO_WriteChannel(char ,char);
char DIO_ReadChannel(char);
