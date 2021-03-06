#ifndef _KEYPAD_CONFIG_H_ 
#define _KEYPAD_CONFIG_H_ 
  
  
/*******************************************************/  
/**************** Public Definitions *******************/  
/*******************************************************/  
  
/*Comment!: ROW Index*/
/*Range!  : DIO_u8PIN0-DIO_u8PIN31*/
/*Comment!: must be configured as output*/
#define KEYPAD_u8ROW1       DIO_u8PIN0
#define KEYPAD_u8ROW2       DIO_u8PIN1
#define KEYPAD_u8ROW3       DIO_u8PIN2
#define KEYPAD_u8ROW4       DIO_u8PIN3

/*Comment!: Column Index*/
/*Range!  : DIO_u8PIN0-DIO_u8PIN31*/
/*Comment!: must be configured as input*/
#define KEYPAD_u8COLUMN1    DIO_u8PIN4
#define KEYPAD_u8COLUMN2    DIO_u8PIN5
#define KEYPAD_u8COLUMN3    DIO_u8PIN6
#define KEYPAD_u8COLUMN4    DIO_u8PIN7

#define KEYPAD_u8PRESSEDSTATE DIO_u8HIGH
  
#endif 
