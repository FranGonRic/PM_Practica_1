void setup()
{
DDRB = DDRB | B11111100; // Data Direction Register B: Inputs 0-6, Output 7
}

void loop()
{

asm (
"inicio: \n\t"
".EQU ledVC, 0x07 \n\t" 
".EQU ledAC, 0x06 \n\t" 
".EQU ledRC, 0x05 \n\t" 
".EQU ledVP, 0x04 \n\t" 
".EQU ledAP, 0x03 \n\t" 
".EQU ledRP, 0x02 \n\t" 

"sbi 0x05, ledVC \n\t"
"cbi 0x05, ledRC \n\t"
"sbi 0x05, ledRP \n\t"
"call tiempo \n\t"
"call tiempo \n\t"
"call tiempo \n\t"
"call tiempo \n\t"
"call tiempo \n\t"
"call tiempo \n\t"
"cbi 0x05, ledVC \n\t"
"sbi 0x05, ledAC \n\t"
"call tiempo \n\t"
"cbi 0x05, ledAC \n\t"
"cbi 0x05, ledRP \n\t"
"sbi 0x05, ledRC \n\t"
"sbi 0x05, ledVP \n\t"
"call tiempo \n\t"
"call tiempo \n\t"
"call tiempo \n\t"
"call tiempo \n\t"
"cbi 0x05, ledVP \n\t"
"sbi 0x05, ledAP \n\t"
"call tiempo \n\t"
"cbi 0x05, ledAP \n\t"


"jmp main \n\t"

"tiempo: \n\t"
"LDI r22, 80 \n\t"
"LOOP_3: \n\t"
"LDI r21, 255 \n\t"
"LOOP_2: \n\t"
"LDI r20, 255 \n\t"
"LOOP_1: \n\t"
"DEC r20 \n\t"
"BRNE LOOP_1 \n\t"
"DEC r21 \n\t"
"BRNE LOOP_2 \n\t"
"DEC r22 \n\t"
"BRNE LOOP_3 \n\t"
"ret \n\t"
);
}
