typedef __int32 int32_t;
typedef unsigned __int32 uint32_t;
void printf(char* str)
{
    static unsigned short* VideoMemory=(unsigned short*)0xb8000;
    
    for(int i=0; str[i]!='\0';++i){
        VideoMemory[i]=(VideoMemory[i] & 0xFF00)|str[i];
    }
    
}
extern "C" void kernelMain(void* multiboot_structure, uint32_t magicnumber)
{ 
    printf("Hello World");
    while(1);
}

// made by Toblerone, Boss Man and Lele Pons-- I mean Leland 