#include <p18f4550.h>

unsigned char angulo =0XFF;

void delay_dez_micro_segundo(void){
	int i;
	for(i = 0; i < 1; i++){}
}


void delay_mili_segundo(void){
	int i;
	for(i = 0; i < 71; i++){delay_dez_micro_segundo();}
}


void delay_n_mili_segundo(int val){
	for(; val > 0; val--){delay_mili_segundo();}
}


void servo_45(void){
	PORTDbits.RD0 = 1;
	delay_mili_segundo();
	delay_dez_micro_segundo();//1
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();//26
	PORTDbits.RD0 = 0;
	delay_n_mili_segundo(16);
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
}


void servo_90(void){
	PORTDbits.RD0 = 1;
	delay_mili_segundo();
	delay_dez_micro_segundo();//1
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();
	delay_dez_micro_segundo();//50
	PORTDbits.RD0 = 0;
	delay_n_mili_segundo(15);
}


void servo_135(void){
		PORTDbits.RD0 = 1;
		delay_mili_segundo();
		delay_dez_micro_segundo();//1
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();//75
		PORTDbits.RD0 = 0;
		delay_n_mili_segundo(12);
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
		delay_dez_micro_segundo();
}

void int_alta(void);


#pragma code test = 0x0008
	void desvio(void){
		_asm
		goto int_alta
		_endasm
	}
#pragma


#pragma interrupt int_alta
void int_alta(void){
    if(INTCONbits.INT0IF)
	angulo = ~angulo;
	INTCONbits.INT0IF = 0;
}


void main(){
    ADCON1=0B00001111;
	TRISDbits.RD0 = 0;
    TRISBbits.RB0 = 1;

	RCONbits.IPEN = 1;
	INTCONbits.GIEH = 1;
	INTCONbits.GIEL = 1;

    INTCONbits.TMR0IE = 1;
    INTCONbits.RBIE = 1;
	INTCONbits.INT0IE = 1;
	INTCON2bits.INTEDG0 = 0;
	INTCONbits.INT0IF = 0;

	while(1){
        if  (angulo)
        {
            servo_45();          
        }
        else
        {
            servo_90();
        }
	}
}