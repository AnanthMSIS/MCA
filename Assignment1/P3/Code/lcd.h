#define bit(x) (1<<x)

void delay_ms(int j) ;
void LCD_CMD(char command);
void LCD_INIT(void);
void LCD_STRING (char* msg);
void LCD_CHAR (char msg);

