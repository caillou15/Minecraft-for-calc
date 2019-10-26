/*
===============================================================================

 Ptune3 is SH7305 CPG&BSC tuning utility for PRIZM fx-CG50/Graph 90+E  v0.21

 copyright(c)2014,2015,2016,2017 by sentaro21
 e-mail sentaro21@pm.matrix.jp

===============================================================================
*/

#define OPTION_REG	// CS3BCR,CS4BCR,CS6BCR,CS3WCR,CS4WCR,CS6WCR mod enable

extern char points[];
extern char pointss[];
extern unsigned char *cls;

char* strcat( char *si, const char* s2 );

void Print( char* );
void PrintMiniXY(int , int , char*, int ,int );
//int sprintf62s(  char*,int , char*);
//int sprintf62(  char*,int , char*);
//void IntToHex( unsigned int , unsigned char*);
//void HexPrintXY(int , int , unsigned char *, unsigned int );

void SetStatusMessage( char*, char  );
void StatusArea( char*, char  );
void StatusArea_sub(void);

//---------------------------------------------------------------------------------------------

void PrintXYR(int ,int ,char *,int );
void Fkey_dispN(int ,char *);
void Fkey_DISPN(int ,char *);
void Fkey_dispR(int ,char *) ;
void Fkey_Clear(int );
void Fkey_dispNP(int );
void Fkey_dispNM(int );
void Fkey_dispNInit(int );
void func_menu1(void);
void func_menu2(void);
//int YesNo( char*);
//void ErrorMSG(char*, int );
//void ErrorADRS(char*, int );
void MSG1(char*);
//void MSG2(char*, char*);
void MSGpop(void);

extern char *strcat(char *, const char *);

