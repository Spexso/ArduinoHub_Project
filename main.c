#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
void print_menu();

int main(void)
{
	int opt;
	
	   print_menu();
	
	do
	{
		
	scanf("%d", &opt);
	
	switch(opt)
	{
	
    case (0):
	{
		return 0;
	}
    case (1):
    {
    	
    	HANDLE hComm;                       // Handle to the Serial port
    char ComPortName[] = "\\\\.\\COM5"; // Name of the Serial port(May Change) to be opened,
    BOOL Status;

    
    //Setting up the port for writing

    hComm = CreateFile(ComPortName,                  
                       GENERIC_READ | GENERIC_WRITE, 
                       0,                            
                       NULL,                         
                       OPEN_EXISTING,                
                       0,                            
                       NULL);                        

    

    

    DCB dcbSerialParams = {0}; 
    dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

    Status = GetCommState(hComm, &dcbSerialParams); 

   

    dcbSerialParams.BaudRate = CBR_9600;   
    dcbSerialParams.ByteSize = 8;          
    dcbSerialParams.StopBits = ONESTOPBIT; 
    dcbSerialParams.Parity = NOPARITY;     

    Status = SetCommState(hComm, &dcbSerialParams); 

   

    

    COMMTIMEOUTS timeouts = {0};

    timeouts.ReadIntervalTimeout = 50;
    timeouts.ReadTotalTimeoutConstant = 50;
    timeouts.ReadTotalTimeoutMultiplier = 10;
    timeouts.WriteTotalTimeoutConstant = 50;
    timeouts.WriteTotalTimeoutMultiplier = 10;

    

    
	
	       
	char lpBuffer[2] = "1";
	
	//Writing to port

	
    DWORD dNoOFBytestoWrite;     
    DWORD dNoOfBytesWritten = 0; 

    dNoOFBytestoWrite = sizeof(lpBuffer); 

    Status = WriteFile(hComm,              
                       lpBuffer,           
                       dNoOFBytestoWrite,  
                       &dNoOfBytesWritten, 
                       NULL);

   CloseHandle(hComm);
    break;
	}
	case (2):
	{
		HANDLE hComm;                       // Handle to the Serial port
    char ComPortName[] = "\\\\.\\COM5"; // Name of the Serial port(May Change) to be opened,
    BOOL Status;

    
    
//Setting up the Port for writing
    hComm = CreateFile(ComPortName,                  
                       GENERIC_READ | GENERIC_WRITE, 
                       0,                            
                       NULL,                         
                       OPEN_EXISTING,                
                       0,                            
                       NULL);                        

    

    

    DCB dcbSerialParams = {0}; 
    dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

    Status = GetCommState(hComm, &dcbSerialParams); 

   

    dcbSerialParams.BaudRate = CBR_9600;   
    dcbSerialParams.ByteSize = 8;          
    dcbSerialParams.StopBits = ONESTOPBIT; 
    dcbSerialParams.Parity = NOPARITY;     

    Status = SetCommState(hComm, &dcbSerialParams); 

   

    

    COMMTIMEOUTS timeouts = {0};

    timeouts.ReadIntervalTimeout = 50;
    timeouts.ReadTotalTimeoutConstant = 50;
    timeouts.ReadTotalTimeoutMultiplier = 10;
    timeouts.WriteTotalTimeoutConstant = 50;
    timeouts.WriteTotalTimeoutMultiplier = 10;

    

    
	
	      
	
	char lpBuffer[2] = "2" ;
	

	
//Writing to Port
    
	
	DWORD dNoOFBytestoWrite;     
    DWORD dNoOfBytesWritten = 0; 

    dNoOFBytestoWrite = sizeof(lpBuffer); 

    Status = WriteFile(hComm,              
                       lpBuffer,           
                       dNoOFBytestoWrite,  
                       &dNoOfBytesWritten, 
                       NULL);

   CloseHandle(hComm);
    break;
	}
    case (3):
    {
    	
    	HANDLE hComm;                       // Handle to the Serial port
    char ComPortName[] = "\\\\.\\COM5"; // Name of the Serial port(May Change) to be opened,
    BOOL Status;

    
    //Setting up the Port for writing

    hComm = CreateFile(ComPortName,                  
                       GENERIC_READ | GENERIC_WRITE, 
                       0,                            
                       NULL,                         
                       OPEN_EXISTING,                
                       0,                            
                       NULL);                        

    

    

    DCB dcbSerialParams = {0}; 
    dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

    Status = GetCommState(hComm, &dcbSerialParams); 

   

    dcbSerialParams.BaudRate = CBR_9600;   
    dcbSerialParams.ByteSize = 8;          
    dcbSerialParams.StopBits = ONESTOPBIT; 
    dcbSerialParams.Parity = NOPARITY;     

    Status = SetCommState(hComm, &dcbSerialParams); 

   

    

    COMMTIMEOUTS timeouts = {0};

    timeouts.ReadIntervalTimeout = 50;
    timeouts.ReadTotalTimeoutConstant = 50;
    timeouts.ReadTotalTimeoutMultiplier = 10;
    timeouts.WriteTotalTimeoutConstant = 50;
    timeouts.WriteTotalTimeoutMultiplier = 10;

    

    
	
	       
	
	char lpBuffer[2] = "3" ;
	
	//Writing to Port

    DWORD dNoOFBytestoWrite;     
    DWORD dNoOfBytesWritten = 0; 

    dNoOFBytestoWrite = sizeof(lpBuffer); 

    Status = WriteFile(hComm,              
                       lpBuffer,           
                       dNoOFBytestoWrite,  
                       &dNoOfBytesWritten, 
                       NULL);

   CloseHandle(hComm);
    break;
	}
	case (4):
	{
		
		 HANDLE hComm;                       // Handle to the Serial port
    char ComPortName[] = "\\\\.\\COM5"; // Name of the Serial port(May Change) to be opened,
    BOOL Status;

    
    //Setting up the Port for writing

    hComm = CreateFile(ComPortName,                  
                       GENERIC_READ | GENERIC_WRITE, 
                       0,                            
                       NULL,                         
                       OPEN_EXISTING,                
                       0,                            
                       NULL);                        

   

    

    DCB dcbSerialParams = {0}; 
    dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

    Status = GetCommState(hComm, &dcbSerialParams); 

    

    dcbSerialParams.BaudRate = CBR_9600;   
    dcbSerialParams.ByteSize = 8;          
    dcbSerialParams.StopBits = ONESTOPBIT; 
    dcbSerialParams.Parity = NOPARITY;     

    Status = SetCommState(hComm, &dcbSerialParams); 

   

    

    COMMTIMEOUTS timeouts = {0};

    timeouts.ReadIntervalTimeout = 50;
    timeouts.ReadTotalTimeoutConstant = 50;
    timeouts.ReadTotalTimeoutMultiplier = 10;
    timeouts.WriteTotalTimeoutConstant = 50;
    timeouts.WriteTotalTimeoutMultiplier = 10;

    
    //Writing to Port
    
    char lpBuffer[2] = "4";       
    DWORD dNoOFBytestoWrite;     
    DWORD dNoOfBytesWritten = 0; 

    dNoOFBytestoWrite = sizeof(lpBuffer); 

    Status = WriteFile(hComm,              
                       lpBuffer,           
                       dNoOFBytestoWrite,  
                       &dNoOfBytesWritten, 
                       NULL);
                       
     CloseHandle(hComm);               
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	  
	for(int x=1;x<2;++x)
	{
	printf("Please enter the number that you want to square of it:");  
	
	HANDLE hComm;                       // Handle to the Serial port
    char ComPortName[] = "\\\\.\\COM5"; // Name of the Serial port(May Change) to be opened,
    BOOL Status;

    //Setting up the Port for Writing
    

    hComm = CreateFile(ComPortName,                  
                       GENERIC_READ | GENERIC_WRITE, 
                       0,                            
                       NULL,                         
                       OPEN_EXISTING,                
                       0,                            
                       NULL);                        

   

    

    DCB dcbSerialParams = {0}; 
    dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

    Status = GetCommState(hComm, &dcbSerialParams); 

    

    dcbSerialParams.BaudRate = CBR_9600;   
    dcbSerialParams.ByteSize = 8;          
    dcbSerialParams.StopBits = ONESTOPBIT; 
    dcbSerialParams.Parity = NOPARITY;     

    Status = SetCommState(hComm, &dcbSerialParams); 

   

    

    COMMTIMEOUTS timeouts = {0};

    timeouts.ReadIntervalTimeout = 50;
    timeouts.ReadTotalTimeoutConstant = 50;
    timeouts.ReadTotalTimeoutMultiplier = 10;
    timeouts.WriteTotalTimeoutConstant = 50;
    timeouts.WriteTotalTimeoutMultiplier = 10;

    

    //Writing to Port
    
	char lpBuffer[2];
	
	scanf("%s",&lpBuffer);
	       
    DWORD dNoOFBytestoWrite;     
    DWORD dNoOfBytesWritten = 0; 

    dNoOFBytestoWrite = sizeof(lpBuffer); 

    Status = WriteFile(hComm,              
                       lpBuffer,           
                       dNoOFBytestoWrite,  
                       &dNoOfBytesWritten, 
                       NULL);	
    
	   CloseHandle(hComm);
	}
    
    
	
		    			
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    //Setting up the port for Reading
    
    for(int z=1;z<2;++z)
    {

    HANDLE hComm;                       
    char ComPortName[] = "\\\\.\\COM5"; 
    BOOL Status;                        
    DWORD dwEventMask;                  
    char TempChar;                      
    char SerialBuffer[256];             
    DWORD NoBytesRead;                  
    int i = 0;

    
    

    hComm = CreateFile(ComPortName,                  
                       GENERIC_READ | GENERIC_WRITE, 
                       0,                            
                       NULL,                         
                       OPEN_EXISTING,                
                       0,                            
                       NULL);                        

    

    

    DCB dcbSerialParams = {0}; 
    dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

    Status = GetCommState(hComm, &dcbSerialParams); 

    if (Status == FALSE)
        printf("\n    Error! in GetCommState()");

    dcbSerialParams.BaudRate = CBR_9600;   
    dcbSerialParams.ByteSize = 8;          
    dcbSerialParams.StopBits = ONESTOPBIT; 
    dcbSerialParams.Parity = NOPARITY;     

    Status = SetCommState(hComm, &dcbSerialParams); 

    if (Status == FALSE)
    {
        printf("\n    Error! in Setting DCB Structure");
    }
    else 
    {
        COMMTIMEOUTS timeouts = {0};
    timeouts.ReadIntervalTimeout = 50;
    timeouts.ReadTotalTimeoutConstant = 50;
    timeouts.ReadTotalTimeoutMultiplier = 10;
    timeouts.WriteTotalTimeoutConstant = 50;
    timeouts.WriteTotalTimeoutMultiplier = 10;

    if (SetCommTimeouts(hComm, &timeouts) == FALSE)
        printf("\n\n    Error! in Setting Time Outs");
    else
    {  

    

    Status = SetCommMask(hComm, EV_RXCHAR); 

    if (Status == FALSE)
        printf("\n\n    Error! in Setting CommMask");
    else
    {
        Status = WaitCommEvent(hComm, &dwEventMask, NULL); 

    //Reading the Port

    if (Status == FALSE)
    {
        printf("\n    Error! in Setting WaitCommEvent()");
    }
    else 
    {
        
        do
        {
            Status = ReadFile(hComm, &TempChar, sizeof(TempChar), &NoBytesRead, NULL);
            SerialBuffer[i] = TempChar;
            i++;
        } while (NoBytesRead > 0);

        

        printf("\n\n    ");
        int j = 0;
        for (j = 0; j < i - 1; j++) // j < i-1 to remove the dupliated last character
            printf("%c", SerialBuffer[j]);
    }
    printf("\n");
    }
    }
    }

    

    
    
    CloseHandle(hComm);

    }    
	
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////			
        break;
    
}
    case (5):
    {
    HANDLE hComm;                       // Handle to the Serial port
    char ComPortName[] = "\\\\.\\COM5"; // Name of the Serial port(May Change) to be opened,
    BOOL Status;

    
    //Setting up the Port for writing

    hComm = CreateFile(ComPortName,                  
                       GENERIC_READ | GENERIC_WRITE, 
                       0,                            
                       NULL,                         
                       OPEN_EXISTING,                
                       0,                            
                       NULL);                        

   

    

    DCB dcbSerialParams = {0}; 
    dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

    Status = GetCommState(hComm, &dcbSerialParams); 

    

    dcbSerialParams.BaudRate = CBR_9600;   
    dcbSerialParams.ByteSize = 8;          
    dcbSerialParams.StopBits = ONESTOPBIT; 
    dcbSerialParams.Parity = NOPARITY;     

    Status = SetCommState(hComm, &dcbSerialParams); 

   

    

    COMMTIMEOUTS timeouts = {0};

    timeouts.ReadIntervalTimeout = 50;
    timeouts.ReadTotalTimeoutConstant = 50;
    timeouts.ReadTotalTimeoutMultiplier = 10;
    timeouts.WriteTotalTimeoutConstant = 50;
    timeouts.WriteTotalTimeoutMultiplier = 10;

    //Writing to port
    char lpBuffer[2] = "5";       
    DWORD dNoOFBytestoWrite;     
    DWORD dNoOfBytesWritten = 0; 

    dNoOFBytestoWrite = sizeof(lpBuffer); 

    Status = WriteFile(hComm,              
                       lpBuffer,           
                       dNoOFBytestoWrite,  
                       &dNoOfBytesWritten, 
                       NULL);
                       
     CloseHandle(hComm);

/////////////////////////////////////////////////////////////////////////////////////////////////////
    //Setting up the Port for Reading

   for(int e=0; e < 1;e++)
   {
   	
    HANDLE hComm;                       // Handle to the Serial port
    char ComPortName[] = "\\\\.\\COM5"; // Name of the Serial port(May Change) to be opened,
    BOOL Status;                        
    DWORD dwEventMask;                  
    char TempChar;                      
    char SerialBuffer[256];             
    DWORD NoBytesRead;                  
    int i = 0;

    
    

    hComm = CreateFile(ComPortName,                  
                       GENERIC_READ | GENERIC_WRITE, 
                       0,                            
                       NULL,                         
                       OPEN_EXISTING,                
                       0,                            
                       NULL);                        

    

    

    DCB dcbSerialParams = {0}; 
    dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

    Status = GetCommState(hComm, &dcbSerialParams); 

    if (Status == FALSE)
        printf("\n    Error! in GetCommState()");

    dcbSerialParams.BaudRate = CBR_9600;   
    dcbSerialParams.ByteSize = 8;          
    dcbSerialParams.StopBits = ONESTOPBIT; 
    dcbSerialParams.Parity = NOPARITY;     

    Status = SetCommState(hComm, &dcbSerialParams); 

    if (Status == FALSE)
    {
        printf("\n    Error! in Setting DCB Structure");
    }
    

    

    COMMTIMEOUTS timeouts = {0};
    timeouts.ReadIntervalTimeout = 50;
    timeouts.ReadTotalTimeoutConstant = 50;
    timeouts.ReadTotalTimeoutMultiplier = 10;
    timeouts.WriteTotalTimeoutConstant = 50;
    timeouts.WriteTotalTimeoutMultiplier = 10;

    if (SetCommTimeouts(hComm, &timeouts) == FALSE)
        printf("\n\n    Error! in Setting Time Outs");
    

   

    Status = SetCommMask(hComm, EV_RXCHAR); 

    if (Status == FALSE){
	
        printf("\n\n    Error! in Setting CommMask");
     }

    

    

    Status = WaitCommEvent(hComm, &dwEventMask, NULL); 
    
	//Reading the Port 
    

    if (Status == FALSE)
    {
        printf("\n    Error! in Setting WaitCommEvent()");
    }
    else 
    {
       
    int j = 0;   

	for(int t=0;t<100;++t)
	{	
	
	do
        {
            Status = ReadFile(hComm, &TempChar, sizeof(TempChar), &NoBytesRead, NULL);
            SerialBuffer[i] = TempChar;
            i++;
        } while (NoBytesRead > 0);
				    
		
		

        
     
        printf("\n\n    ");
        
		i = i - 1;
	for (j = 0; j < i - 1;++j)
            printf("\r%c", SerialBuffer[j]);
        
        sleep(1);
		j = j -1;
     }

    }
	}
		CloseHandle(hComm);
		break;
	}	        

    }
	
    }while( opt > 0 && opt < 7 );
	
}

void print_menu()
{
    printf("-----------------------------------------------WELCOME TO GTU ARDUINO LAB-----------------------------------------------\n\n\n");
    printf("STUDENT NAME:KAGAN CAKIROGLU\n\n");
    
    
    printf("==============PLEASE SELECT FROM THE FOLLOWING===============\n\n");
    printf("MENU:\n");
    printf("(1)TURN ON LED ON ARDUINO\n");
    printf("(2)TURN OF LED ON ARDUINO\n");
    printf("(3)FLASH ARDUINO LED 3 TIMES\n");
    printf("(4)SEND A NUMBER TO ARDUINO TO COMPUTE SQUARE BY ARDUINO\n");
    printf("(5)BUTTON PRESS COUNTER\n");
    printf("(0)EXIT\n");
    printf("PLEASE ENTER A NUMBER:\n");
}