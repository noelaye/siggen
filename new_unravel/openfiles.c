


//-------------------------------------------------------------------------


extern void iob[];
extern const char word_100127C; 
extern const char aShow_status[]; 
extern const char word_10012CC; 
extern const char word_10012D0; 
extern const char asc_10012D4[]; 
extern const char aX86[]; 
extern const char ValueName[]; 
extern const char asc_1001330[]; 
extern char aHardwareDescri[47]; 
extern char SubStr[]; 
extern char aAfpadminfileen[]; 
extern char aAfpadminfilecl[]; 
extern char ProcName[]; 
extern const char aSfmapi_dll[]; 
extern char Delim[]; 
extern char asc_1001408[]; 
extern char aSSS[7]; 
extern char a__[3]; 
extern const char aLd[]; 
extern const char aGlobalflag[]; 
extern const char SubKey[]; 
extern char aUnknowntypeidx[15]; 
extern char Format[]; 
extern char aSystemProcessP[20]; 
extern char aUnknownProcess[]; 
extern char MultiByteStr[]; 
extern const char aNtAuthority[]; 
extern const char Name[]; 
extern const char LibFileName[]; 
extern char aSetthreaduilan[20]; 
extern int dword_10015D4; 
extern int dword_10015F8; 
extern const char aC_0[]; 
extern const char aS_0[]; 
extern char asc_100160C[3]; 
extern const char aS_1[]; 
extern char asc_1001620[2]; 
extern const char asc_1001624[]; 
extern char Str[]; 
extern const char a__0[]; 
extern const char asc_1001638[]; 
extern const char Str2[]; 
extern char asc_100164C[3]; 
extern const char aF[]; 
extern char a_[28]; 
extern char a__0[]; 
extern const char aS_2[]; 
extern char aD[3]; 
extern char aC_1[3]; 
extern char aAdmin[7]; 
extern const char aSS[]; 
extern char aIpc[5]; 
extern const char asc_10016EC[]; 
extern char aD_0[3]; 
extern const char asc_10016FC[]; 
extern const char aS_3[]; 
extern const char asc_1001708[]; 
extern const char aS_4[]; 
extern const char Buffer[]; 
extern void sub_1001919;
extern void sub_1001D77;
extern void sub_10022B4;
extern void sub_1002CF6;
extern void sub_100314D;
extern void sub_100364C;
extern void sub_100425C;
extern int dword_100D048; 
extern int dword_100D054; 
extern int dword_100D058; 
extern int dword_100D068; 
extern int dword_100D06C; 
extern int dword_100D070[]; 
extern int dword_100D074[]; 
extern void lpAddress; 
extern void dword_100D680; 
extern void dword_100D684; 
extern int dword_100D688; 
extern int dword_100D68C; 
extern void hConsoleOutput; 
extern struct _CONSOLE_SCREEN_BUFFER_INFO ConsoleScreenBufferInfo; 
extern void phkResult; 
extern void hObject; 
extern char byte_100D6B8; 
extern char Str1; 
extern int dword_100DCC0; 
extern char byte_100DCC4; 
extern int dword_100DCD8; 
extern int word_100DCDC; 
extern int dword_100DCE4; 
extern int dword_100DCE8; 
extern int TlsIndex; 

//-------------------------------------------------------------------------



















































































int  sub_10017E5(int, int, void lpString1); 
void  sub_100297F();
void  sub_10029A7();
void  sub_10029D2();
void  sub_10029FA();
 int  sub_1002A27(const char *a1);
int  sub_1002C59(int a1, int a2);
 int  sub_10030F2(void lpString); 
void  sub_100389B(char *Str); 
void  sub_10038BF(void Str, int a2); 
void  sub_1003902(void lpString1, void lpString2); 
 int  sub_1003946(void lpString1, int a2); 
void  sub_1003A58(void lpString2, void lpString1); 
 int  sub_1003A9C(char *a1, const char *a2, const char *a3, const char *a4, const char *a5);
 int  sub_100403D(void Str); 
 int  sub_10040C9(void Str); 
char  sub_1004FCA(char * lpMultiByteStr, void lpWideCharStr, int cchWideChar); 
int  sub_1005021();
char  sub_1005093(char Data); 
const void * sub_10050D2(void *a1);
void  sub_1005119(void lpAddress); 
char  sub_1005137(int a1);
char  sub_1005243(int a1);
char  sub_1005358(int a1);
int  sub_1005506(int a1);
void  sub_10055BE(void hConsoleOutput, int a2, int a3); 
int  sub_10056A4(int, void lpString1, int, int, int, int, int); 
int  sub_1005BD6(const char *this, void lpString1, int a3, int a4); 
int  sub_1005CD4();
void  sub_1005D43(void, void, void); 
int  sub_1006688(int a1, int a2, int a3, void lpString1); 
 int  sub_1006836(int a1, void hObject); 
void  sub_1006B1C(int a1);


int  sub_1006E52(void *this, char a2);
int  sub_1006ED4();


void  sub_1007025();
int  sub_10070B4(void lpWideCharStr); 
const char * sub_10070D7(void lpString1, void lpString2, int a3); 
const char * sub_100711F();
unsigned int  sub_1007143(void lpString2); 
int  sub_10071B3(void lpString, int a2, int a3); 
const char * sub_10071F0(void lpString, int a2, int a3); 
int  sub_1007284(void lpString, int a2, int a3); 
 int  sub_10072F0(int a1);
void  sub_1007355();
unsigned int  sub_10073CA();
void  sub_1007421();
int * sub_10074AA(void lpWideCharStr, char lpMultiByteStr, int cbMultiByte); 
const char * sub_1007509(void lpString2, void lpString1, int iMaxLength); 
const char * sub_1007555(char * lpMultiByteStr, void lpWideCharStr, int cchWideChar); 
unsigned int  sub_10075A6(void lpString2); 
int  sub_1007629(void lpString2, int Radix); 
void  sub_10076BD(void lpString2); 
 int  sub_1007750(void lpString2, int Radix, int a3); 
 int  sub_1007863(int a1, int a2);
void  sub_1007A6D(int a1, int a2, int a3);
int  sub_1007B40(void Str1, void Str2, int a3, void MaxCount); 
int  sub_1007BAD(int uID, void lpString1, int iMaxLength); 
void  sub_1007C8B(int a1, void lpBuffer); 
const char * sub_1007E09(void lpString, int a2); 
unsigned int  sub_1007F7A(int a1);
const char * sub_1007FD1(int this, void lpString1, int a3, int a4); 
const char * sub_10080FF(int uID); 
 int  sub_100816F(void lpString); 
void  sub_10081BD(int a1, void lpString, int a3); 
 int  sub_1008203(int a1, int a2, void lpString); 
void  sub_10082EF(char *lpString, int a2, int a3); 
void  sub_100839E(unsigned int a1, void *a2, int a3, int a4);
void  sub_1008DFD(int a1);
void * sub_1008E1E();
void  sub_1008E48(int a1);
void  sub_1008E92(int a1);
void  sub_1008ECB(int a1);
int  sub_1008EE9(int a1, unsigned int a2, int a3);
int  sub_1008F2D(int a1, int a2, int a3, int a4);
void  sub_1008F96(int a1);
int  sub_1009021(int a1, int a2, void Str2, int a4, void MaxCount); 
int  sub_1009167(int a1, void lpString2, int a3); 
int  sub_10091DB(int a1, int a2);
int  sub_1009233(int a1, int a2);
int  sub_100928B(int a1, int a2);
int  sub_10092E3(int a1, double a2); 
int  sub_100933B(int this, int a2, unsigned int a3);
 int  sub_10093AC(int a1, unsigned int a2);
int  sub_10093EF(int a1, int a2, void lpString2, int a4); 
int  sub_100942A(int a1, unsigned int a2);
int  sub_1009485(int a1, unsigned int a2);
int  sub_10094BE(int a1, unsigned int a2);
 int  sub_10094ED(int a1, unsigned int a2);
int  sub_1009529(int a1, unsigned int a2);
int  sub_100955E(int a1, unsigned int a2);
int  sub_1009593(int a1, int a2, unsigned int a3);
int  sub_100962A(int a1, int a2, void lpString, int iMaxLength); 
int  sub_100971F(int a1, unsigned int a2, unsigned int a3);
 int  sub_1009756(int a1, unsigned int a2, unsigned int a3);
 int  sub_100978D(int a1, int a2, void lpString2, int a4); 
 int  sub_1009830(int a1, unsigned int a2, int a3);
 int  sub_1009897(int a1, int a2, int a3, void lpString2, int a5); 
 int  sub_10098D4(int a1, unsigned int a2, unsigned int a3, int a4);
int  sub_100990E(int a1, void Str2, int a3, void MaxCount); 
 int  sub_1009932(void lpString2); 
 int  sub_1009A23(void lpString2); 
 int  sub_1009B4F(void lpWideCharStr, int a2, int a3); 
void  sub_1009C6B(void Str1); 
 int  sub_1009C8F(void lpWideCharStr); 
int  sub_1009D95(void Str1); 
void  sub_1009E54(void Str1, int a2, int a3); 
void  sub_1009FB4(void Str1); 
void  sub_1009FD1(void lpWideCharStr, int a2, int a3, int a4); 
void  sub_100A1DA(void lpWideCharStr, int a2, int a3); 
 int  sub_100A1FB(int a1, void lpNameBuffer, void nSize, int a4, int a5, int a6); 
 int  sub_100A444(int a1, int a2, int a3);
void  sub_100A48D(int a1, void lpString1, void lpString2, void a4, void lpWideCharStr); 
void  sub_100A585(int a1, void lpString2, void lpWideCharStr, int a4); 
const char * sub_100A6C7(int a1, int a2, int a3, void lpString1, int a5); 
void  sub_100A992(int a1, unsigned int a2, int a3, int a4, int a5);
void  sub_100AF0D(int a1, int a2, void lpWideCharStr, int a4, int a5); 
void  sub_100B184(int a1, unsigned int a2, int a3, int a4, int a5);
int  sub_100B38C(void *File, int a2, void lpWideCharStr, int a4, int a5); 
int  sub_100B3EC(int a1, void lpWideCharStr, int a3, int a4); 






void memset(void,void,void); 
void memset(void a,void aa,void aaa) 
{
}
void ExitProcess(void); 
void ExitProcess(void a) 
{
}
void lstrlenA(void); 
void lstrlenA(void a) 
{
}
void send(void,void,void,void); 
void send(void a,void aa,void aaa,void aaaa) 
{
}
void WriteFile(void,void,void,void,void); 
void WriteFile(void a,void aa,void aaa,void aaaa,void aaaaa) 
{
}
void GetTempPathA(void,void); 
void GetTempPathA(void a,void aa) 
{
}
void GetSystemDirectoryA(void,void); 
void GetSystemDirectoryA(void a,void aa) 
{
}
void lstrcatA(void,void); 
void lstrcatA(void a,void aa) 
{
}
void CreateFileA(void,void,void,void,void,void,void); 
void CreateFileA(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa,void aaaaaaa) 
{
}
void CloseHandle(void); 
void CloseHandle(void a) 
{
}
void lstrcpyA(void,void); 
void lstrcpyA(void a,void aa) 
{
}
void GetFileAttributesA(void); 
void GetFileAttributesA(void a) 
{
}
void LoadLibraryA(void); 
void LoadLibraryA(void a) 
{
}
void RegOpenKeyExA(void,void,void,void,void); 
void RegOpenKeyExA(void a,void aa,void aaa,void aaaa,void aaaaa) 
{
}
void RegCloseKey(void); 
void RegCloseKey(void a) 
{
}
void RegCreateKeyExA(void,void,void,void,void,void,void,void,void); 
void RegCreateKeyExA(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa,void aaaaaaa,void aaaaaaaa,void aaaaaaaaa) 
{
}
void CreateMutexA(void,void,void,void,void); 
void CreateMutexA(void a,void aa,void aaa,void aaaa,void aaaaa) 
{
}
void GetLastError(void); 
void GetLastError(void ) 
{
}
void GetModuleFileNameA(void,void,void); 
void GetModuleFileNameA(void a,void aa,void aaa) 
{
}
void SetFileAttributesA(void,void); 
void SetFileAttributesA(void a,void aa) 
{
}
void DeleteFileA(void); 
void DeleteFileA(void a) 
{
}
void CopyFileA(void,void,void); 
void CopyFileA(void a,void aa,void aaa) 
{
}
void RegSetValueExA(void,void,void,void,void,void); 
void RegSetValueExA(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa) 
{
}
void URLDownloadToFileA(void,void,void,void,void); 
void URLDownloadToFileA(void a,void aa,void aaa,void aaaa,void aaaaa) 
{
}
void Sleep(void); 
void Sleep(void a) 
{
}
void ShellExecuteA(void,void,void,void,void,void); 
void ShellExecuteA(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa) 
{
}
void ExitThread(void); 
void ExitThread(void a) 
{
}
void GetTickCount(void); 
void GetTickCount(void ) 
{
}
void CreateThread(void,void,void,void,void,void); 
void CreateThread(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa) 
{
}
void fopen(void,void); 
void fopen(void a,void aa) 
{
}
void fgets(void); 
void fgets(void a) 
{
}
void strstr(void,void); 
void strstr(void a,void aa) 
{
}
void fclose(void); 
void fclose(void a) 
{
}
void RegDeleteValueA(void,void); 
void RegDeleteValueA(void a,void aa) 
{
}
void memcpy(void,void); 
void memcpy(void a,void aa) 
{
}
void GetEnvironmentVariableA(void,void,void); 
void GetEnvironmentVariableA(void a,void aa,void aaa) 
{
}
void GetWindowsDirectoryA(void,void); 
void GetWindowsDirectoryA(void a,void aa) 
{
}
void lstrcpynA(void,void,void); 
void lstrcpynA(void a,void aa,void aaa) 
{
}
void CharLowerA(void); 
void CharLowerA(void a) 
{
}
void lstrcmpA(void,void); 
void lstrcmpA(void a,void aa) 
{
}
void GetFileSize(void,void); 
void GetFileSize(void a,void aa) 
{
}
void CreateFileMappingA(void,void,void,void,void,void); 
void CreateFileMappingA(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa) 
{
}
void MapViewOfFile(void,void,void,void,void); 
void MapViewOfFile(void a,void aa,void aaa,void aaaa,void aaaaa) 
{
}
void UnmapViewOfFile(void); 
void UnmapViewOfFile(void a) 
{
}
void GetDriveTypeA(void); 
void GetDriveTypeA(void a) 
{
}
void GetCurrentThread(void); 
void GetCurrentThread(void ) 
{
}
void SetThreadPriority(void,void); 
void SetThreadPriority(void a,void aa) 
{
}
void RegQueryValueExA(void,void,void,void,void,void); 
void RegQueryValueExA(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa) 
{
}
void GetProcessHeap(void); 
void GetProcessHeap(void ) 
{
}
void HeapAlloc(void,void,void); 
void HeapAlloc(void a,void aa,void aaa) 
{
}
void socket(void,void,void); 
void socket(void a,void aa,void aaa) 
{
}
void recv(void,void,void,void); 
void recv(void a,void aa,void aaa,void aaaa) 
{
}
void HeapFree(void,void,void); 
void HeapFree(void a,void aa,void aaa) 
{
}
void closesocket(void); 
void closesocket(void a) 
{
}
void sendto(void,void,void,void,void,void); 
void sendto(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa) 
{
}
void GetModuleHandleA(void); 
void GetModuleHandleA(void a) 
{
}
void GetProcAddress(void,void); 
void GetProcAddress(void a,void aa) 
{
}
void inet_addr(void); 
void inet_addr(void a) 
{
}
void gethostbyname(void); 
void gethostbyname(void a) 
{
}
void lstrcmpiA(void,void); 
void lstrcmpiA(void a,void aa) 
{
}
void tolower(void); 
void tolower(void a) 
{
}
void GlobalFree(void); 
void GlobalFree(void a) 
{
}
void InterlockedIncrement(void); 
void InterlockedIncrement(void a) 
{
}
void InterlockedDecrement(void); 
void InterlockedDecrement(void a) 
{
}
void SetFilePointer(void,void,void,void); 
void SetFilePointer(void a,void aa,void aaa,void aaaa) 
{
}
void ReadFile(void,void,void,void,void); 
void ReadFile(void a,void aa,void aaa,void aaaa,void aaaaa) 
{
}
void GetSystemTime(void); 
void GetSystemTime(void a) 
{
}
void GlobalAlloc(void,void); 
void GlobalAlloc(void a,void aa) 
{
}
void GetTempFileNameA(void,void,void,void); 
void GetTempFileNameA(void a,void aa,void aaa,void aaaa) 
{
}
void FindNextFileA(void,void); 
void FindNextFileA(void a,void aa) 
{
}
void FindFirstFileA(void,void); 
void FindFirstFileA(void a,void aa) 
{
}
void FindClose(void); 
void FindClose(void a) 
{
}
void connect(void,void,void); 
void connect(void a,void aa,void aaa) 
{
}
void RegEnumKeyA(void,void,void,void); 
void RegEnumKeyA(void a,void aa,void aaa,void aaaa) 
{
}
void FileTimeToLocalFileTime(void,void); 
void FileTimeToLocalFileTime(void a,void aa) 
{
}
void FileTimeToSystemTime(void,void); 
void FileTimeToSystemTime(void a,void aa) 
{
}
void GetLocalTime(void); 
void GetLocalTime(void a) 
{
}
void GetTimeZoneInformation(void); 
void GetTimeZoneInformation(void a) 
{
}
void WideCharToMultiByte(void,void,void,void,void,void,void,void); 
void WideCharToMultiByte(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa,void aaaaaaa,void aaaaaaaa) 
{
}













//----- (010017E5) --------------------------------------------------------

//----- (01001919) --------------------------------------------------------

//----- (01001D77) --------------------------------------------------------

//----- (010022B4) --------------------------------------------------------

//----- (0100297F) --------------------------------------------------------
void  sub_100297F()
{
  int v0; 
  const char *v1; 

  v0 = 1;
  do
  {
    v1 = sub_10080FF(v0);
    sub_1007C8B((int)(iob[0] + 32), v1);
    ++v0;
  }
  while ( v0 <= 0x25 );
}

//----- (010029A7) --------------------------------------------------------
void  sub_10029A7()
{
  int v0; 
  const char *v1; 

  v0 = 121;
  do
  {
    v1 = sub_10080FF(v0);
    sub_1007C8B((int)(iob[0] + 32), v1);
    ++v0;
  }
  while ( v0 <= 0x92 );
}

//----- (010029D2) --------------------------------------------------------
void  sub_10029D2()
{
  int v0; 
  const char *v1; 

  v0 = 100;
  do
  {
    v1 = sub_10080FF(v0);
    sub_1007C8B((int)(iob[0] + 32), v1);
    ++v0;
  }
  while ( v0 <= 0x70 );
}

//----- (010029FA) --------------------------------------------------------
void  sub_10029FA()
{
  int v0; 
  const char *v1; 

  v0 = 250;
  do
  {
    v1 = sub_10080FF(v0);
    sub_1007C8B((int)(iob[0] + 32), v1);
    ++v0;
  }
  while ( v0 <= 0x103 );
}

//----- (01002A27) --------------------------------------------------------
 int  main(const char *a1)
{
  void v1; 
  int v2; 
  void *v4; 
  void *v5; 
  const char SubKey; 
  int v7; 
  char v8; 
  void lpString2; 
  char v10; 
  int MachineName; 
  char v12; 
  int v13; 
  int String; 
  char v15; 
  int v16; 
  void phkResult; 
  void hKey; 
  void cbData; 
  int SubStr; 
  char v21; 
  int v22; 
  void Memory; 

  memcpy((void *)&SubKey, "HARDWARE\\DESCRIPTION\\SYSTEM\\CENTRALPROCESSOR\\0", 0x5Cu);
  v7 = dword_100D048;
  v8 = aHardwareDescri[46];
  lpString2 = a1;
  memset(&v10, 0, 0x1A0u);
  MachineName = 0;
  memset(&v12, 0, 0x1F8u);
  v13 = 0;
  String = 0;
  memset(&v15, 0, 0x1F8u);
  v16 = 0;
  phkResult = 0;
  hKey = 0;
  cbData = 255;
  lstrlenW((const char *)&String);
  SubStr = 0;
  memset(&v21, 0, 0x1F8u);
  v22 = 0;
  v4 = malloc(0x1FCu);
  Memory = (void)v4;
  if ( !v4 )
    return 4;
  if ( lstrlenW(lpString2) )
  {
    lstrcpyW((char *)&MachineName, L"\\\\");
    lstrcatW((char *)&MachineName, lpString2);
  }
  else
  {
    lstrcpyW((char *)&MachineName, lpString2);
  }
  if ( RegConnectRegistryW((const char *)&MachineName, void_LOCAL_MACHINE, &hKey)
    || RegOpenKeyExW(hKey, &SubKey, 0, 0x20019u, &phkResult) )
  {
    RegCloseKey(&hKey );
    return 4;
  }
  v1 = RegQueryValueExW(phkResult, L"Identifier", 0, 0, Memory, &cbData);
  if ( v1 == 234 )
  {
    v5 = realloc(Memory, 2 * cbData);
    Memory = (void)v5;
    v1 = RegQueryValueExW(phkResult, "Identifier", 0, 0, (void)v5, &cbData);
  }
  if ( v1 )
  {
    RegCloseKey(&phkResult );
    RegCloseKey(&hKey );
    return 4;
  }
  RegCloseKey(&phkResult );
  RegCloseKey(&hKey );
  lstrcpyW((char *)&SubStr, L"x86");
  v2 = (wcsstr((const char *)Memory, (const char *)&SubStr) != 0) + 2;
  if ( Memory )
    free(Memory);
  return v2;
}

//----- (01002C59) --------------------------------------------------------
int  sub_1002C59(int a1, int a2)
{
  void *v2; 
  const char *v3; 
  int v4; 
  int result; 
  const char *v6; 
  int v7; 
  int v8; 
  const char *v9; 

  v2 = 0x80u;
  v3 = (const char *)v2;
  v4 = 0;
  if ( v2 )
  {
    v7 = a2;
    v8 = a1;
    memset(&v2 , 0, 0x80u);
    if ( sub_10017E5(v8, v7, (void)v2) )
    {
      v4 = sub_1006688(0, 0, 0, v3);
    }
    else
    {
      v9 = sub_100711F();
      sub_1007C8B((int)(iob[0] + 64), v9);
    }
    delete((void *)v3);
    result = v4;
  }
  else
  {
    SetLastError(8u);
    v6 = sub_10080FF(0x9Cu);
    sub_1007C8B((int)(iob[0]+ 64), v6);
    sub_1007F7A((int)(iob[0]+ 64));
    result = 0;
  }
  return result;
}

//----- (01002CF6) --------------------------------------------------------

//----- (010030F2) --------------------------------------------------------
 int  sub_10030F2(void lpString)
{
   int v1; 
  int v2; 
  const char *v4; 

  v1 = sub_1002A27(lpString);
  if ( v1 == 4 )
  {
    v2 = 192;
LABEL_7:
    v4 = sub_10080FF(v2);
    sub_1007C8B((int)(iob[0] + 64), v4);
    return 1;
  }
  if ( v1 == 2 )
  {
    if ( lstrlenW(lpString) )
      v2 = 194;
    else
      v2 = 193;
    goto LABEL_7;
  }
  return 0;
}

//----- (0100314D) --------------------------------------------------------

//----- (0100364C) --------------------------------------------------------

//----- (0100389B) --------------------------------------------------------
void  sub_100389B(char *Str)
{
  return wcsstr(Str, L"\\PIPE\\srvsvc") != 0;
}

//----- (010038BF) --------------------------------------------------------
void  sub_10038BF(void Str, int a2)
{
  return !lstrcmpW(Str, L"*") || !lstrlenW(Str) || wtol(Str) == a2;
}

//----- (01003902) --------------------------------------------------------
void  sub_1003902(void lpString1, void lpString2)
{
  return !lstrcmpW(lpString1, L"*") || !lstrlenW(lpString1) || !lstrcmpiW(lpString1, lpString2);
}

//----- (01003946) --------------------------------------------------------
 int  sub_1003946(void lpString1, int a2)
{
   int result; 
  char v3; 
  const char *v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 

  if ( !lstrcmpW(lpString1, L"*") || !lstrlenW(lpString1) )
    return 1;
  v4 = sub_10080FF(0x4Eu);
  if ( CompareStringW(0x800u, 1u, lpString1, -1, v4, -1) == 2 )
  {
    result = 1;
    if ( (a2 & 1) != 1 )
      return 0;
    v3 = (a2 & 2) == 2;
LABEL_9:
    if ( !v3 )
      return result;
    return 0;
  }
  v5 = sub_10080FF(0x4Fu);
  if ( CompareStringW(0x800u, 1u, lpString1, -1, v5, -1) == 2 )
  {
    if ( (a2 & 2) != 2 )
      return 0;
    result = 1;
    v3 = (a2 & 1) == 1;
    goto LABEL_9;
  }
  v6 = sub_10080FF(0xADu);
  if ( CompareStringW(0x800u, 1u, lpString1, -1, v6, -1) != 2 )
  {
    v7 = sub_10080FF(0xAEu);
    if ( CompareStringW(0x800u, 1u, lpString1, -1, v7, -1) != 2 || (a2 & 2) != 2 || (a2 & 1) != 1 )
      return 0;
    return 1;
  }
  result = 1;
  if ( (a2 & 1) != 1 || (a2 & 2) != 2 )
    return 0;
  return result;
}

//----- (01003A58) --------------------------------------------------------
void  sub_1003A58(void lpString2, void lpString1)
{
  return !lstrcmpW(lpString2, L"*") || !lstrlenW(lpString2) || !lstrcmpiW(lpString1, lpString2);
}

//----- (01003A9C) --------------------------------------------------------
 int  sub_1003A9C(char *a1, const char *a2, const char *a3, const char *a4, const char *a5)
{
   int v5; 
  void v6; 
  void v7; 
  void v8; 
  int v9; 
  char *v10; 
  const char *v11; 
  void v12; 
  void v13; 
  void v14; 
  int v15; 
  void v16; 
  char *v17; 
  const char *v18; 
  void v20; 
  void v21; 
  void v22; 
  const char *v23; 
  const char *v24; 
  void v25; 
  int v26; 
  int v27; 
  const char *v28; 
  const char *v29; 
  int v30; 
  const char *v31; 
  const char *v32; 
  const char *v33; 
  int v34; 
  void servername; 
  void Str; 
  void lpString1; 
  const char *v38; 
  void lpString2; 
  int v40; 
  char v41; 
  int v42; 
  int LibFileName; 
  char v44; 
  void entriesread; 
  void totalentries; 
  void resume_handle; 
  void Buffer; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
   int v53; 
   int v54; 
  void i; 
   int v56; 
  void hLibModule; 
  void v58; 
  void v59; 

  v34 = dword_100D048;
  servername = a1;
  Str = a2;
  lpString1 = a3;
  v38 = a4;
  v5 = 0;
  lpString2 = a5;
  v40 = 0;
  memset(&v41, 0, 0x3F4u);
  v42 = 0;
  LibFileName = 0;
  memset(&v44, 0, 0x204u);
  entriesread = 0;
  totalentries = 0;
  resume_handle = 0;
  Buffer = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  while ( 1 )
  {
    v6 = NetFileEnum(servername, 0, 0, 3u, &Buffer, 0xFFFFFFFFu, &entriesread, &totalentries, &resume_handle);
    v54 = v6;
    if ( v6 == 5 )
      break;
    if ( !v6 || v6 == 234 )
    {
      for ( i = 0; i < entriesread; Buffer += 20 )
      {
        if ( !sub_100389B(*((char **)Buffer + 3)) )
        {
          v20 = sub_10038BF(Str, *Buffer);
          v8 = sub_1003902(lpString1, *((void *)Buffer + 4));
          v56 = sub_1003946(v38, *(Buffer + 1));
          v7 = sub_1003A58(lpString2, *((void *)Buffer + 3));
          if ( v20 )
          {
            if ( v8 )
            {
              if ( v56 )
              {
                if ( v7 )
                {
                  memset(&v40, 0, 0x3F8u);
                  v42 = 0;
                  v21 = *Buffer;
                  v53 = 1;
                  v22 = NetFileClose(servername, v21);
                  v9 = *(Buffer + 3);
                  if ( v22 )
                  {
                    v24 = sub_10080FF(0x40u);
                    wsprintfW((char *)&v40, v24, v9);
                    v11 = (const char *)&v40;
                    v10 = iob[0] + 64;
                  }
                  else
                  {
                    v23 = sub_10080FF(0x3Eu);
                    wsprintfW((char *)&v40, v23, v9);
                    v11 = (const char *)&v40;
                    v10 = iob[0] + 32;
                  }
                  sub_1007C8B((int)v10, v11);
                }
              }
            }
          }
        }
        ++i;
      }
      if ( v54 == 234 )
        continue;
    }
    if ( Buffer )
    {
      NetApiBufferFree(Buffer);
      Buffer = 0;
    }
    while ( 1 )
    {
      if ( !GetSystemDirectoryW((char *)&LibFileName, 0x104u)
        || (lstrcatW((char *)&LibFileName, L"\\SFMAPI.DLL"), v12 = LoadLibraryW((const char *)&LibFileName), hLibModule = v12, !v12) )
        goto LABEL_37;
      v14 = GetProcAddress(&v12 , "AfpAdminConnect");
      v58 = GetProcAddress(&hLibModule , "AfpAdminFileClose");
      v13 = GetProcAddress(&hLibModule , "AfpAdminFileEnum");
      v54 = ( int)v13;
      if ( !v58 || !v14 || !v13 || ((int ( *)(void, int *))v14)(servername, &v51) )
        goto LABEL_50;
      v15 = ((int ( *)(int, int *,  int, void *, void *, int *))v54)(
              v51,
              &v49,
              -1,
              &entriesread,
              &totalentries,
              &v50);
      v54 = v15;
      if ( v15 == 5 )
        break;
      if ( !v15 || v15 == 234 )
      {
        for ( i = 0; i < entriesread; v49 += 24 )
        {
          if ( !sub_100389B(*(char **)(v49 + 20)) )
          {
            v25 = sub_10038BF(Str, *v49);
            v59 = sub_1003902(lpString1, *(void *)(v49 + 16));
            v56 = sub_1003946(v38, *(v49 + 4));
            v16 = sub_1003A58(lpString2, *(void *)(v49 + 20));
            if ( v25 )
            {
              if ( v59 )
              {
                if ( v56 )
                {
                  if ( v16 )
                  {
                    memset(&v40, 0, 0x3F8u);
                    v42 = 0;
                    v26 = *v49;
                    v53 = 1;
                    if ( ((int ( *)(int, int))v58)(v51, v26) )
                    {
                      v30 = *(Buffer + 3);
                      v31 = sub_10080FF(0x40u);
                      wsprintfW((char *)&v40, v31, v30);
                      v18 = (const char *)&v40;
                      v17 = iob[0] + 64;
                    }
                    else
                    {
                      v27 = *(v49 + 20);
                      v28 = sub_10080FF(0x3Eu);
                      wsprintfW((char *)&v40, v28, v27);
                      v18 = (const char *)&v40;
                      v17 = iob[0] + 32;
                    }
                    sub_1007C8B((int)v17, v18);
                  }
                }
              }
            }
          }
          ++i;
        }
        if ( v54 == 234 )
          continue;
      }
      if ( !v53 )
      {
        v32 = sub_10080FF(0xB0u);
        sub_1007C8B((int)(iob[0] + 32), v32);
      }
      if ( v49 )
      {
        NetApiBufferFree((void)v49);
        v49 = 0;
      }
      v5 = 1;
      goto LABEL_48;
    }
    SetLastError(5u);
LABEL_50:
    v33 = sub_10080FF(0x9Cu);
    sub_1007C8B((int)(iob[0] + 64), v33);
    sub_1007F7A((int)(iob[0]+ 64));
LABEL_48:
    FreeLibrary(hLibModule);
    return v5;
  }
  SetLastError(5u);
LABEL_37:
  v29 = sub_10080FF(0x9Cu);
  sub_1007C8B((int)(iob[0] + 64), v29);
  sub_1007F7A((int)(iob[0] + 64));
  return 0;
}

//----- (0100403D) --------------------------------------------------------
 int  sub_100403D(void Str)
{
   int v1; 
   int result; 
  void *v3; 
  int v4; 
  const char *v5; 
  void *v6; 

  v1 = 0;
  if ( Str )
  {
    v4 = lstrlenW(Str);
    v3 = new(2 * v4 + 2);
    if ( v3 )
    {
      v6 = v3;
      wcstok((char *)Str, L".");
      v1 = 1;
    }
    else
    {
      SetLastError(8u);
      v5 = sub_10080FF(0x9Cu);
      sub_1007C8B((int)(iob[0] + 64), v5);
      sub_1007F7A((int)(iob[0]+ 64));
    }
    if ( v6 )
      delete(v6);
    result = v1;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (010040C9) --------------------------------------------------------
 int  sub_10040C9(void Str)
{
  const char *v1; 
  void *v3; 
  int v4; 
  struct hostent *v5; 
  void *v6; 
  const char *v7; 
  int v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  int v12; 
   int v13; 
  struct WSAData WSAData; 
  unsigned int addr; 

  v1 = Str;
  v12 = dword_100D048;
  if ( !Str )
    return 0;
  v13 = 0;
  v6 =  new(0x101u);
  v3 = v6;
  if ( !v6 )
  {
    v4 = 8;
LABEL_5:
    SetLastError(v4);
    v7 = sub_10080FF(0x9Cu);
    sub_1007C8B((int)(iob[0] + 64), v7);
    sub_1007F7A((int)(iob[0] + 64));
    return 0;
  }
  if ( WSAStartup(0x202u, &WSAData) )
  {
    v4 = WSAGetLastError();
    goto LABEL_5;
  }
  memset(&v3 , 0, 0x100u);
  sub_10074AA(v1, (char)v3, 256);
  if ( sub_1009932(v1) )
  {
    addr = inet_addr((const char *)&v3 );
    v5 = gethostbyaddr((const char *)&addr, 4, 2);
    goto LABEL_13;
  }
  if ( sub_1009A23(v1) )
  {
    v5 = gethostbyname((const char *)&v3 );
LABEL_13:
    if ( v5 )
    {
      sub_1007555(v5->h_name, (void)v1, 15);
      v13 = sub_100403D(v1);
    }
    else
    {
      v8 = WSAGetLastError();
      SetLastError(v8);
      v9 = sub_10080FF(0x9Cu);
      sub_1007C8B((int)(iob[0] + 64), v9);
      sub_1007F7A((int)(iob[0] + 64));
    }
    goto LABEL_16;
  }
  v10 = sub_10080FF(0x9Cu);
  sub_1007C8B((int)(iob[0] + 64), v10);
  v11 = sub_10080FF(0xA4u);
  sub_1007C8B((int)(iob[0] + 64), v11);
LABEL_16:
  WSACleanup();
   delete(v3);
  return v13;
}

//----- (0100425C) --------------------------------------------------------

//----- (01004FCA) --------------------------------------------------------
char  sub_1004FCA(char * lpMultiByteStr, void lpWideCharStr, int cchWideChar)
{
  unsigned int v3; 
  void v4; 
  char result; 

  v3 = cchWideChar;
  if ( !cchWideChar )
    v3 = strlen(lpMultiByteStr);
  v4 = lpWideCharStr;
  if ( MultiByteToWideChar(0, 1u, lpMultiByteStr, v3, lpWideCharStr, v3) == v3 )
  {
    v4[v3] = 0;
    result = 1;
  }
  else
  {
    SetLastError(0x459u);
    result = 0;
  }
  return result;
}

//----- (01005021) --------------------------------------------------------
int  sub_1005021()
{
  void cbData; 
  void Type; 
  int Data; 

  if ( !RegOpenKeyExW(
          void_LOCAL_MACHINE,
          L"SYSTEM\\CurrentControlSet\\Control\\Session Manager",
          0,
          0x2001Fu,
          &phkResult) )
  {
    cbData = 4;
    if ( !RegQueryValueExW(phkResult, L"GlobalFlag", 0, &Type, (char *)&Data, &cbData) && Type == 4 )
      return Data;
    RegCloseKey(&phkResult );
  }
  return 0;
}

//----- (01005093) --------------------------------------------------------
char  sub_1005093(char Data)
{
  char result; 

  if ( RegSetValueExW(phkResult, L"GlobalFlag", 0, 4u, &Data, 4u) )
  {
    RegCloseKey(&phkResult );
    result = 0;
  }
  else
  {
    result = 1;
  }
  return result;
}

//----- (010050D2) --------------------------------------------------------
const void * sub_10050D2(void *a1)
{
  const void *result; 
  const void *v2; 
  void *v3; 
  struct _MEMORY_BASIC_INFORMATION Buffer; 

  v3 = a1;
  result = VirtualAlloc(0, *a1, 0x1000u, 4u);
  v2 = result;
  if ( result )
  {
    if ( VirtualQuery(result, &Buffer, 0x1Cu) )
      *v3 = Buffer.RegionSize;
    result = v2;
  }
  return result;
}

//----- (01005119) --------------------------------------------------------
void  sub_1005119(void lpAddress)
{
  return VirtualFree(lpAddress, 0, 0x4000u);
}

//----- (01005137) --------------------------------------------------------
char  sub_1005137(int a1)
{
  int v1; 
   int v2; 
  void *v3; 
  void v5; 
  void v6; 
  unsigned int v7; 
  int v8; 
  int *v9; 
   int v10; 
  int v11; 
  unsigned int v12; 
  char v13; 
  int v14; 

  v12 = 0;
  v2 = 56;
  dword_100D684 = &v13;
  v1 = NtQuerySystemInformation(17, &v13, 56, &v12);
  while ( v1 == -1073741820 && v12 > v2 )
  {
    if ( dword_100D684 != &v13 )
      sub_1005119(dword_100D684);
    v14 = v12 + 4096;
    v3 = (void *)sub_10050D2((void *)&v14);
    dword_100D684 = v3;
    if ( !v3 )
      return 0;
    v2 = v14;
    v1 = NtQuerySystemInformation(17, v3, v14, &v12);
  }
  if ( v1 < 0 )
  {
    if ( dword_100D684 != &v13 )
      sub_1005119(dword_100D684);
    return 0;
  }
  v6 = dword_100D684;
  v5 = dword_100D684;
  while ( 1 )
  {
    v7 = *(v5 + 3);
    if ( v7 < 0x80 )
    {
      v11 = 3 * v7;
      dword_100D070[v11] = *(v5 + 12);
      dword_100D074[v11] = *(v5 + 13);
    }
    v8 = *v5;
    if ( !v8 )
      break;
    v5 = (char *)v6 + v8;
  }
  RtlInitUnicodeString(&dword_100D068, L"UnknownTypeIdx");
  v9 = dword_100D070;
  v10 = 129;
  do
  {
    if ( !*(char *)v9 )
    {
      *v9 = dword_100D068;
      *(v9 + 1) = dword_100D06C;
    }
    v9 += 3;
    --v10;
  }
  while ( v10 );
  return 1;
}

//----- (01005243) --------------------------------------------------------
char  sub_1005243(int a1)
{
  int v1; 
   int v2; 
  void *v3; 
  void v5; 
  void v6; 
  void v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  unsigned int v12; 
  char v13; 
  int v14; 
  unsigned int v15; 

  v12 = 0;
  v2 = 36;
  dword_100D680 = &v13;
  v1 = NtQuerySystemInformation(64, &v13, 36, &v12);
  while ( v1 == -1073741820 && v12 > v2 )
  {
    if ( dword_100D680 != &v13 )
      sub_1005119(dword_100D680);
    v14 = v12 + 4096;
    v3 = (void *)sub_10050D2((void *)&v14);
    dword_100D680 = v3;
    if ( !v3 )
      return 0;
    v2 = v14;
    v1 = NtQuerySystemInformation(64, v3, v14, &v12);
  }
  if ( v1 < 0 )
  {
    if ( dword_100D680 != &v13 )
      sub_1005119(dword_100D680);
    return 0;
  }
  v6 = dword_100D684;
  v7 = dword_100D680;
  v5 = dword_100D684;
  while ( 1 )
  {
    v8 = *(v5 + 13) + *((char *)v5 + 25);
    v14 = (int)v5;
    while ( 1 )
    {
      if ( *(v8 + 20) )
      {
        v15 = 0;
        v9 = (int)((char *)v7 + 8);
        if ( *v7 )
        {
          do
          {
            v10 = *(v9 + 20);
            ++v15;
            if ( (char)v10 >= 0 )
            {
              v5 = (void)v14;
              if ( *v9 == *(v8 + 4) )
              {
                *v9 = v8;
                *(v9 + 20) = v10 | 0x80;
                v7 = dword_100D680;
                v6 = dword_100D684;
              }
            }
            v9 += 28;
          }
          while ( v15 < *v7 );
        }
      }
      v11 = *v8;
      if ( !v11 )
        break;
      v8 = (int)((char *)v6 + v11);
    }
    if ( !*v5 )
      break;
    v5 = (char *)v6 + *v5;
  }
  return 1;
}

//----- (01005358) --------------------------------------------------------
char  sub_1005358(int a1)
{
  void *v1; 
  char result; 
  int v3; 
  unsigned int v4; 
  void *v5; 
  void v6; 
  unsigned int v7; 
  char *v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  void dwSize; 
  char Dest; 
  char v18; 

  v15 = dword_100D048;
  dword_100D68C = (int)&dword_100D688;
  dword_100D688 = (int)&dword_100D688;
  dwSize = 65536;
  v1 = (void *)sub_10050D2(&dwSize);
  lpAddress = v1;
  if ( v1 )
  {
    v4 = dwSize;
    v3 = NtQuerySystemInformation(5, v1, dwSize, 0);
    while ( v3 == -1073741820 )
    {
      if ( !VirtualFree(lpAddress, v4, 0x4000u)
        || 2 * v4 < v4
        || (dwSize = 2 * v4, v5 = (void *)sub_10050D2(&dwSize), lpAddress = v5, !v5) )
        goto LABEL_13;
      v4 = dwSize;
      v3 = NtQuerySystemInformation(5, v5, dwSize, 0);
    }
    if ( v3 >= 0 )
    {
      v6 = lpAddress;
      dwSize = 0;
      while ( 1 )
      {
        v7 = 0;
        if ( *(v6 + 15) )
        {
          v9 = (int)((char *)v6 + 56);
          v8 = "%wZ";
        }
        else
        {
          v9 = *(v6 + 17);
          v8 = "System Process (%p)";
        }
        sprintf(&Dest, v8, v9);
        RtlInitAnsiString(&v18, &Dest);
        RtlAnsiStringToUnicodeString((char *)v6 + 56, &v18, 1);
        v10 = RtlAllocateHeap(*(*(*MK_FP(__FS__, 24) + 48) + 24), 8, 4 * *(v6 + 1) + 16);
        if ( !v10 )
          break;
        *(v10 + 4) = v10;
        *v10 = v10;
        *(v10 + 8) = v6;
        v11 = (int)((char *)v6 + 184);
        if ( *(v6 + 1) )
        {
          v12 = v10 + 12;
          do
          {
            *v12 = v11;
            v11 += 64;
            ++v7;
            v12 += 4;
          }
          while ( v7 < *(v6 + 1) );
        }
        v14 = dword_100D68C;
        *v10 = &dword_100D688;
        *(v10 + 4) = v14;
        *v14 = v10;
        dword_100D68C = v10;
        v13 = *v6;
        if ( !v13 )
          return 1;
        dwSize += v13;
        v6 = (char *)lpAddress + dwSize;
      }
    }
LABEL_13:
    result = 0;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (01005506) --------------------------------------------------------
int  sub_1005506(int a1)
{
  int v1; 
  int result; 
  int v3; 
  int v4; 
  int v5; 
  char Dest; 
  char v7; 

  v1 = dword_100D688;
  v5 = dword_100D048;
  while ( v1 != (void)&dword_100D688 )
  {
    result = *(v1 + 8);
    if ( *(result + 68) == a1 )
      return result;
    v1 = *v1;
  }
  result = RtlAllocateHeap(*(*(*MK_FP(__FS__, 24) + 48) + 24), 8, 200);
  v3 = result;
  if ( result )
  {
    *(result + 8) = result + 16;
    sprintf(&Dest, "Unknown Process");
    RtlInitAnsiString(&v7, &Dest);
    RtlAnsiStringToUnicodeString(v3 + 72, &v7, 1);
    *(v3 + 84) = a1;
    *(v3 + 4) = v3;
    *v3 = v3;
    v4 = dword_100D68C;
    *(v3 + 4) = dword_100D68C;
    *v3 = &dword_100D688;
    *v4 = v3;
    result = v3 + 16;
    dword_100D68C = v3;
  }
  return result;
}

//----- (010055BE) --------------------------------------------------------
void  sub_10055BE(void hConsoleOutput, int a2, int a3)
{
  void result; 
  void v4; 
  const void *v5; 
  int v6; 
  int v7; 
  void lpBuffer; 
  char String1; 
  char v10; 
  void NumberOfCharsWritten; 
  int v12; 
  void dwCursorPosition; 

  v4 = hConsoleOutput;
  v7 = dword_100D048;
  lpBuffer = (void)a2;
  result = 0;
  String1 = 0;
  memset(&v10, 0, 0x9Cu);
  NumberOfCharsWritten = 0;
  v12 = 0;
  if ( hConsoleOutput )
  {
    dwCursorPosition.Y = *(char *)(a3 + 6);
    dwCursorPosition.X = 0;
    memset(&String1, 0, 0x50u);
    SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
    v5 = sub_10070D7(&String1, &word_10012D0, 79);
    WriteConsoleW(v4, v5, 0x4Fu, &NumberOfCharsWritten, 0);
    result = SetConsoleCursorPosition(v4, dwCursorPosition);
    if ( lpBuffer )
    {
      v6 = lstrlenW(lpBuffer);
      result = WriteConsoleW(v4, lpBuffer, v6, &NumberOfCharsWritten, 0);
    }
  }
  return result;
}

//----- (010056A4) --------------------------------------------------------

//----- (01005BD6) --------------------------------------------------------
int  sub_1005BD6(const char *this, void lpString1, int a3, int a4)
{
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  void lpString2; 
  void v10; 
   int v11; 

  lpString2 = this;
  v10 = lpString1;
  CHString__CHString(&lpString2);
  v11 = 0;
  if ( *(CHString__GetData(&lpString2) + 4) > a4 )
  {
    if ( a3 == 2 )
    {
      CHString__Right(&lpString2, &a4, a4 - 6);
      (v11) = 1;
      v5 = CHString__GetData(&a4);
      v6 = CHString__Find(&a4, &word_100127C, *(v5 + 4));
      v7 = CHString__Mid(&a4, &a3, v6);
      (v11) = 2;
      CHString___(&a4, v7);
      (v11) = 1;
      CHString___CHString(&a3);
      v8 = CHString__Mid(&lpString2, &a3, 0);
      (v11) = 3;
      CHString__Format(&lpString2, (const char *)L"%s%s%s", *v8, L"..", a4);
      (v11) = 1;
      CHString___CHString(&a3);
      (v11) = 0;
      CHString___CHString(&a4);
    }
  }
  lstrcpyW(lpString1, lpString2);
  v11 = -1;
  return CHString___CHString(&lpString2);
}

//----- (01005CD4) --------------------------------------------------------
int  sub_1005CD4()
{
  int v0; 
  int v1; 
  int v2; 

  v0 = RtlAllocateHeap(*(*(*MK_FP(__FS__, 24) + 48) + 24), 8, 96);
  v1 = v0;
  if ( !v0 )
    return 0;
  if ( !sub_1005137(v0) )
  {
    v2 = *MK_FP(__FS__, 24);
LABEL_8:
    RtlFreeHeap(*(*(v2 + 48) + 24), 0, v1);
    return 0;
  }
  if ( !sub_1005243(v1) )
  {
    v2 = *MK_FP(__FS__, 24);
    goto LABEL_8;
  }
  if ( !sub_1005358(v1) )
  {
    v2 = *MK_FP(__FS__, 24);
    goto LABEL_8;
  }
  return v1;
}

//----- (01005D43) --------------------------------------------------------

//----- (01006688) --------------------------------------------------------
int  sub_1006688(int a1, int a2, int a3, void lpString1)
{
  char v4; 
  int v5; 
  void v6; 
  int result; 
  int v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  int v13; 

  v4 = sub_1005021();
  v9 = sub_10080FF(0xE7u);
  if ( !lstrcmpiW(lpString1, v9) )
  {
    if ( *(*(*MK_FP(__FS__, 24) + 48) + 105) & 0x40 )
    {
      sub_1005093(v4);
      v5 = 229;
      goto LABEL_11;
    }
LABEL_3:
    v5 = 233;
LABEL_11:
    v11 = sub_10080FF(v5);
    sub_1007C8B((int)(iob[0] + 64), v11);
    RegCloseKey(&phkResult );
    return 1;
  }
  v10 = sub_10080FF(0xE6u);
  if ( !lstrcmpiW(lpString1, v10) )
  {
    if ( !(*(*(*MK_FP(__FS__, 24) + 48) + 104) & 0x4000) )
    {
      sub_1005093(v4);
      v5 = 228;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  if ( !lstrcmpiW(lpString1, L"SHOW_STATUS") )
  {
    if ( !(*(*(*MK_FP(__FS__, 24) + 48) + 105) & 0x40) )
      goto LABEL_3;
LABEL_10:
    v5 = 234;
    goto LABEL_11;
  }
  if ( !(*(*(*MK_FP(__FS__, 24) + 48) + 105) & 0x40) )
  {
    RegCloseKey(&phkResult );
    v12 = sub_10080FF(0xE3u);
    sub_1007C8B((int)(iob[0] + 64), v12);
    return 1;
  }
  RegCloseKey(&phkResult );
  v6 = GetStdHandle(0xFFFFFFF4u);
  hConsoleOutput = v6;
  if ( v6 )
    GetConsoleScreenBufferInfo(v6, &ConsoleScreenBufferInfo);
  v13 = (int)sub_10080FF(0xB9u);
  sub_10055BE(hConsoleOutput, v13, (int)&ConsoleScreenBufferInfo);
  hObject = (void)-1;
  dword_100DCC0 = 0;
  byte_100D6B8 = 0;
  byte_100DCC4 = 0;
  sub_1004FCA("File", &Str1, 4);
  result = sub_1005CD4();
  v8 = result;
  if ( result )
  {
    sub_1005D43(a1, a2, a3);
    if ( hObject != (void)-1 )
      CloseHandle(&hObject );
    RtlDestroyQueryDebugBuffer(v8);
    return 1;
  }
  return result;
}

//----- (01006836) --------------------------------------------------------
 int  sub_1006836(int a1, void hObject)
{
   int v2; 
  unsigned int v3; 
  void v4; 
  void *v5; 
  void *v6; 
  void *v7; 
  void v8; 
  void *v10; 
  void v11; 
  void cchName; 
  void cchReferencedDomainName; 
  enum _SID_NAME_USE peUse; 
  void *v15; 
  void TokenHandle; 
  struct _LUID Luid; 
  struct _TOKEN_PRIVILEGES NewState; 
  void ReturnLength; 
  void *v20; 
  void *v21; 
  void *v22; 
  void lpString2; 
  void lpString1; 

  cchName = 1;
  cchReferencedDomainName = 1;
  peUse = 8;
  GetCurrentProcess();
  v2 = 0;
  v15 = 0;
  TokenHandle = 0;
  v11 = GetCurrentProcess();
  if ( !OpenProcessToken(v11, 0x28u, &TokenHandle) )
    return 0;
  if ( !LookupPrivilegeValueW(0, L"SeSecurityPrivilege", &Luid)
    || (NewState.Privileges[0].Luid.LowPart = Luid.LowPart, NewState.Privileges[0].Luid.HighPart = Luid.HighPart, NewState.PrivilegeCount = 0, NewState.Privileges[0].Attributes = -2147483646, !AdjustTokenPrivileges(TokenHandle, 0, &NewState, 0x10u, 0, 0)) )
  {
    if ( TokenHandle )
    {
      v3 = (unsigned int)TokenHandle;
LABEL_9:
      CloseHandle((void)&v3 );
    }
    return 0;
  }
  v4 = OpenProcess(0x400u, 0, hObject);
  hObject = (void)v4;
  if ( !v4 )
    return 0;
  if ( !OpenProcessToken(v4, 8u, &v15) )
  {
    v3 = hObject;
    goto LABEL_9;
  }
  ReturnLength = 0;
  if ( !GetTokenInformation(&TokenHandle , TokenUser, 0, 0, &ReturnLength) && GetLastError() != 122
    || !&v20
    || !GetTokenInformation(v15, TokenUser, &v20, ReturnLength, &ReturnLength) )
  {
    CloseHandle((void)&hObject );
    if ( v15 )
      CloseHandle(&v15 );
    return 0;
  }
  v21 =  new(0xCu);
  v5 =  new(0x14u);
  v6 = v5;
  v22 = v5;
  if ( !v21 || !v5 )
  {
    CloseHandle((void)&hObject );
    if ( v15 )
    {
      CloseHandle(&v15 );
      v15 = 0;
    }
    if ( v6 )
       delete(v6);
    if ( !v21 )
      return 0;
    v10 = v21;
    goto LABEL_35;
  }
  LookupAccountSidW(0, v20, 0, &cchName, 0, &cchReferencedDomainName, &peUse);
  lpString2 = (void) new(2 * cchName + 2);
  v7 =  new(2 * cchReferencedDomainName + 2);
  lpString1 = (void)v7;
  if ( !lpString2 )
  {
LABEL_27:
    if ( !lpString1 )
      return 0;
    v10 = (void *)lpString1;
LABEL_35:
     delete(v10);
    return 0;
  }
  if ( !v7 )
  {
     delete(lpString2);
    goto LABEL_27;
  }
  v8 = LookupAccountSidW(0, v20, lpString2, &cchName, (void)v7, &cchReferencedDomainName, &peUse);
  CloseHandle((void)&hObject );
  if ( v15 )
  {
    CloseHandle(&v15 );
    v15 = 0;
  }
   delete(v22);
   delete(v21);
  if ( v8 )
  {
    if ( lstrcmpiW(lpString1, L"NT AUTHORITY") )
    {
      lstrcpyW((void)a1, lpString2);
      v2 = 1;
    }
  }
   delete(lpString2);
   delete((void *)lpString1);
  return v2;
}

//----- (01006B1C) --------------------------------------------------------
void  sub_1006B1C(int a1)
{
  void result; 
  void v2; 
  int v3; 
  int v4; 

  if ( a1 != dword_100D048 || a1 & 0xFFFF0000 )
  {
    
    memset(&v3, 0, 0x50u);
    SetUnhandledExceptionFilter(0);
    UnhandledExceptionFilter((struct _EXCEPTION_POINTERS *)&v4);
    v2 = GetCurrentProcess();
    result = TerminateProcess(v2, 0x502u);
  }
  return result;
}

//----- (01006E52) --------------------------------------------------------
int  sub_1006E52(void *this, char a2)
{
  void *v2; 
  int result; 

  v2 = this;
  if ( a2 & 2 )
  {
    unknown_libname_1(this, 12, *(this - 1), type_info___type_info);
    if ( a2 & 1 )
       delete((char *)v2 - 4);
    result = (int)((char *)v2 - 4);
  }
  else
  {
    type_info___type_info();
    if ( a2 & 1 )
       delete(v2);
    result = (int)v2;
  }
  return result;
}

//----- (01006ED4) --------------------------------------------------------
int  sub_1006ED4()
{
  return 0;
}

//----- (01007025) --------------------------------------------------------
void  sub_1007025()
{
  int v1; 
  int v2; 
  int v3; 
  int v4; 
  void long v5; 
  int v6; 
  struct _OSVERSIONINFOEXW VersionInformation; 

  v6 = dword_100D048;
  memset(&VersionInformation, 0, sizeof(VersionInformation));
  VersionInformation.dwMajorVersion = dword_100D054;
  VersionInformation.dwMinorVersion = dword_100D058;
  VersionInformation.dwOSVersionInfoSize = 284;
  VersionInformation.wServicePackMajor = word_100DCDC;
  v1 = VerSetConditionMask(0, 0, 2, 3);
  v3 = VerSetConditionMask(v1, v2, 1, 3);
  *&v5 = VerSetConditionMask(v3, v4, 32, 3);
  return VerifyVersionInfoW(&VersionInformation, 3u, v5);
}

//----- (010070B4) --------------------------------------------------------
int  sub_10070B4(void lpWideCharStr)
{
  return WideCharToMultiByte(1u, 0, &lpWideCharStr , -1, 0, 0, 0, 0) - 1;
}

//----- (010070D7) --------------------------------------------------------
const char * sub_10070D7(void lpString1, void lpString2, int a3)
{
  char *v3; 
  int i; 
  const char *result; 

  v3 = lpString1;
  if ( lpString1!=0 && lpString2!=0 )
  {
    lstrcpyW(lpString1, &word_10012CC);
    for ( i = a3; i; --i )
      lstrcatW(v3, lpString2);
    result = v3;
  }
  else
  {
    result = &word_10012CC;
  }
  return result;
}

//----- (0100711F) --------------------------------------------------------
const char * sub_100711F()
{
  const char *result; 

  result = *(const char **)(*(*MK_FP(__FS__, 44) + 4 * TlsIndex) + 4);
  if ( !result )
    result = &word_10012CC;
  return result;
}

//----- (01007143) --------------------------------------------------------
unsigned int  sub_1007143(void lpString2)
{
  unsigned int result; 
  int v2; 
  int v3; 

  if ( lpString2 )
  {
    v3 = *MK_FP(__FS__, 44) + 4 * TlsIndex;
    v2 = *v3;
    if ( *(*v3 + 4)
      || (result = (unsigned int)calloc(0x103u, 2u), *(v2 + 4) = result, result) )
      result = (unsigned int)lstrcpynW(*(void *)(v2 + 4), lpString2, 255);
  }
  else
  {
    SetLastError(0x57u);
    result = sub_10073CA();
  }
  return result;
}

//----- (010071B3) --------------------------------------------------------
int  sub_10071B3(void lpString, int a2, int a3)
{
  void v3; 
  int v4; 
  int v5; 

  v3 = lpString;
  if ( lpString )
  {
    v4 = lstrlenW(lpString);
    if ( v4 )
    {
      v5 = a3;
      while ( v5 < (unsigned int)v4 )
      {
        if ( v3[v5] == a2 )
          return (int)&v3[v5];
        ++v5;
      }
    }
  }
  return 0;
}

//----- (010071F0) --------------------------------------------------------
const char * sub_10071F0(void lpString, int a2, int a3)
{
  const char *v3; 
  int v4; 
  unsigned int v5; 
  const char v6; 
  const char *v7; 
  int v8; 
  const char *v9; 
  char v10; 
  const char *result; 
  int v12; 
  unsigned int v13; 
  int v14; 

  if ( lpString
    && (v3 = (const char *)a2, a2)
    && (v12 = lstrlenW(lpString), v5 = v12, v13 = v12, v4 = lstrlenW(v3), v14 = v4, v5 + a3 >= v4)
    && v4
    && v5
    && (a2 = a3, a3 < v5) )
  {
    v6 = *v3;
    v7 = &lpString[a3];
    while ( 1 )
    {
      v8 = 0;
      if ( *v7 != v6 )
      {
LABEL_12:
        v10 = v8 == v14;
      }
      else
      {
        v9 = v7;
        while ( 1 )
        {
          v10 = v8 == v14;
          if ( v8 >= (unsigned int)v14 )
            break;
          ++v8;
          ++v9;
          if ( *v9 != v3[v8] )
            goto LABEL_12;
        }
      }
      if ( v10 )
        break;
      ++a2;
      ++v7;
      if ( a2 >= v13 )
        goto LABEL_15;
    }
    result = &lpString[a2];
  }
  else
  {
LABEL_15:
    result = 0;
  }
  return result;
}

//----- (01007284) --------------------------------------------------------
int  sub_1007284(void lpString, int a2, int a3)
{
  void v3; 
  int v4; 
  int v5; 
  int v6; 
  const char v7; 
  int v8; 
  char v9; 

  v3 = lpString;
  if ( lpString )
  {
    v4 = a2;
    if ( a2 )
    {
      lpString = (void)lstrlenW(lpString);
      v5 = lstrlenW((void)v4);
      a2 = v5;
      if ( lpString )
      {
        if ( v5 )
        {
          v6 = a3;
          while ( v6 < (unsigned int)lpString )
          {
            v7 = v3[v6];
            v8 = 0;
            if ( v7 == *(char *)v4 )
            {
LABEL_9:
              v9 = v8 == a2;
            }
            else
            {
              while ( 1 )
              {
                v9 = v8 == a2;
                if ( v8 >= (unsigned int)a2 )
                  break;
                ++v8;
                if ( v7 == *(char *)(v4 + 2 * v8) )
                  goto LABEL_9;
              }
            }
            if ( !v9 )
              return (int)&v3[v6];
            ++v6;
          }
        }
      }
    }
  }
  return 0;
}

//----- (010072F0) --------------------------------------------------------
 int  sub_10072F0(int a1)
{
  void v1; 
   int v2; 
  void v3; 
  void v4; 
  int v6; 
  const char ProcName; 

  v6 = dword_100D048;
  v2 = 0;
  memcpy((void *)&ProcName, "SetThreadUILanguage", 0x14u);
  v1 = LoadLibraryW(L"kernel32.dll");
  v3 = v1;
  if ( v1 )
  {
    v4 = GetProcAddress(&v1 , &ProcName);
    if ( v4 )
    {
      v2 = 1;
      ((int ( *)(int))v4)(a1);
    }
    FreeLibrary(v3);
  }
  return v2;
}

//----- (01007355) --------------------------------------------------------
void  sub_1007355()
{
  int v0; 

  v0 = *(*MK_FP(__FS__, 44) + 4 * TlsIndex);
  if ( *(v0 + 4) )
  {
    free(*(void **)(v0 + 4));
    *(v0 + 4) = 0;
  }
  if ( *(v0 + 8) )
  {
    free(*(void **)(v0 + 8));
    *(v0 + 8) = 0;
  }
  if ( *(v0 + 12) )
  {
    free(*(void **)(v0 + 12));
    *(v0 + 12) = 0;
  }
  sub_1008E92(v0 + 16);
  if ( dword_100DCD8 == 1 )
    WSACleanup();
}

//----- (010073CA) --------------------------------------------------------
unsigned int  sub_10073CA()
{
  unsigned int result; 
  void v1; 
  const char *hMem; 

  hMem = 0;
  v1 = GetLastError();
  sub_10072F0(0);
  result = FormatMessageW(0x1300u, 0, v1, 0x400u, (char *)&hMem, 0, 0);
  if ( hMem )
  {
    result = sub_1007143(hMem);
    if ( hMem )
      result = (unsigned int)LocalFree((void)hMem);
  }
  return result;
}

//----- (01007421) --------------------------------------------------------
void  sub_1007421()
{
  int v1; 
  int String2; 
  char v3; 
  int v4; 
  int NameBuf; 
  char v6; 
  int v7; 
  void Error; 

  v1 = dword_100D048;
  String2 = 0;
  memset(&v3, 0, 0x1F8u);
  v4 = 0;
  NameBuf = 0;
  memset(&v6, 0, 0x1F8u);
  v7 = 0;
  Error = 0;
  WNetGetLastErrorW(&Error, (char *)&String2, 0xFFu, (char *)&NameBuf, 0xFFu);
  sub_1007143((const char *)&String2);
  return Error;
}

//----- (010074AA) --------------------------------------------------------
int * sub_10074AA(void lpWideCharStr, char lpMultiByteStr, int cbMultiByte)
{
  char v3; 
  int v4; 
  int v5; 
  const char *v6; 
  char *v7; 
  int v8; 
  int *result; 
  char v10; 
  unsigned int v11; 

  if ( lpWideCharStr && (v3 = lpMultiByteStr, lpMultiByteStr) )
  {
    v10 = cbMultiByte;
    v8 = cbMultiByte;
    v7 = lpMultiByteStr;
    v11 = (unsigned int)cbMultiByte >> 2;
    v6 = lpWideCharStr;
    memset(&lpMultiByteStr , 0, 4 * ((unsigned int)cbMultiByte >> 2));
    v5 = (int)&v3[4 * v11];
    v4 = v10 & 3;
    while ( v4 )
    {
      *v5++ = 0;
      --v4;
    }
    WideCharToMultiByte(1u, 0, &v6 , -1, v7, v8, 0, 0);
    result = (int *)v3;
  }
  else
  {
    SetLastError(0x57u);
    sub_10073CA();
    result = &dword_10015D4;
  }
  return result;
}

//----- (01007509) --------------------------------------------------------
const char * sub_1007509(void lpString2, void lpString1, int iMaxLength)
{
  void v3; 
  int v4; 
  void v5; 
  char *v6; 
  const char *v7; 
  int v8; 
  const char *result; 

  if ( lpString2 && (v3 = lpString1, lpString1) )
  {
    v8 = iMaxLength;
    v7 = lpString2;
    v4 = iMaxLength;
    v5 = lpString1;
    v6 = lpString1;
    while ( v4 )
    {
      *v5 = 0;
      ++v5;
      --v4;
    }
    lstrcpynW(v6, v7, v8);
    result = v3;
  }
  else
  {
    SetLastError(0x57u);
    sub_10073CA();
    result = &word_10012D0;
  }
  return result;
}

//----- (01007555) --------------------------------------------------------
const char * sub_1007555(char * lpMultiByteStr, void lpWideCharStr, int cchWideChar)
{
  void v3; 
  int v4; 
  void v5; 
  const char *v6; 
  char *v7; 
  int v8; 
  const char *result; 

  if ( lpMultiByteStr && (v3 = lpWideCharStr, lpWideCharStr) )
  {
    v8 = cchWideChar;
    v7 = lpWideCharStr;
    v6 = lpMultiByteStr;
    v4 = cchWideChar;
    v5 = lpWideCharStr;
    while ( v4 )
    {
      *v5 = 0;
      ++v5;
      --v4;
    }
    MultiByteToWideChar(1u, 0, v6, -1, v7, v8);
    result = v3;
  }
  else
  {
    SetLastError(0x57u);
    sub_10073CA();
    result = &word_10012D0;
  }
  return result;
}

//----- (010075A6) --------------------------------------------------------
unsigned int  sub_10075A6(void lpString2)
{
  unsigned int result; 
  int Str; 
  char *EndPtr; 
  int v4; 
  char v5; 
  int v6; 

  Str = 0;
  EndPtr = 0;
  v4 = dword_100D048;
  memset(&v5, 0, 0x1F8u);
  v6 = 0;
  if ( lpString2 )
  {
    lstrcpyW((char *)&Str, lpString2);
    result = (unsigned int)wcstod((const char *)&Str, &EndPtr);
  }
  else
  {
    SetLastError(0x57u);
    result = sub_10073CA();
    
  }
  return result;
}

//----- (01007629) --------------------------------------------------------
int  sub_1007629(void lpString2, int Radix)
{
  int result; 
  int Str; 
  char *EndPtr; 
  int v5; 
  char v6; 
  int v7; 

  Str = 0;
  EndPtr = 0;
  v5 = dword_100D048;
  memset(&v6, 0, 0x1F8u);
  v7 = 0;
  if ( (unsigned int)Radix < 2 || (unsigned int)Radix > 0x24 )
  {
    result = -1;
  }
  else
  {
    if ( lpString2 )
    {
      lstrcpyW((char *)&Str, lpString2);
      result = wcstol((const char *)&Str, &EndPtr, Radix);
    }
    else
    {
      SetLastError(0x57u);
      sub_10073CA();
      result = 0;
    }
  }
  return result;
}

//----- (010076BD) --------------------------------------------------------
void  sub_10076BD(void lpString2)
{
  void result; 
  int Str; 
  char *lpString; 
  int v5; 
  char v6; 
  int v7; 

  Str = 0;
  lpString = 0;
  v5 = dword_100D048;
  memset(&v6, 0, 0x1F8u);
  v7 = 0;
  if ( lpString2 )
  {
    lstrcpyW((char *)&Str, lpString2);
    wcstod((const char *)&Str, &lpString);
    
    result = lstrlenW(lpString) == 0;
  }
  else
  {
    SetLastError(0x57u);
    sub_10073CA();
    result = 0;
  }
  return result;
}

//----- (01007750) --------------------------------------------------------
 int  sub_1007750(void lpString2, int Radix, int a3)
{
  const char *v3; 
  int v5; 
  int v6; 
  int Str; 
  char *lpString; 
  int v13; 
  char v14; 
  int v15; 

  Str = 0;
  lpString = 0;
  v3 = lpString2;
  v13 = dword_100D048;
  memset(&v14, 0, 0x1F8u);
  v15 = 0;
  if ( (unsigned int)Radix < 2 || (unsigned int)Radix > 0x24 )
    return 0;
  if ( !lpString2 )
  {
    SetLastError(0x57u);
    sub_10073CA();
    return 0;
  }
  lstrcpyW((char *)&Str, lpString2);
  v6 = wcstol((const char *)&Str, &lpString, Radix);
  v5 = lstrlenW(lpString);
  if ( v5 || a3 == v5 && v6 < 0 )
    return 0;
  lstrcpyW((char *)&Str, v3);
  wcstod((const char *)&Str, &lpString);
  if ( a3 )
  {
    
    return 0;
  }
  
  return 1;
}

//----- (01007863) --------------------------------------------------------
 int  sub_1007863(int a1, int a2)
{
  void v3; 
  void *v4; 
  const void *v5; 
  void v6; 
  void *v7; 
  void *v8; 
  void v9; 
  void v10; 
  void v11; 
  void v12; 
  void v13; 
  void v14; 
  void v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  void NumberOfBytesRead; 
  void NumberOfCharsWritten; 
  void dwMode; 
  int v27; 
   int v28; 
  void hConsoleHandle; 
  int Buffer; 

  v17 = dword_100D048;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = a1;
  v23 = 0;
  NumberOfBytesRead = 0;
  NumberOfCharsWritten = 0;
  dwMode = 0;
  v27 = 0;
  v28 = 0;
  if ( !a1 )
  {
    SetLastError(0x57u);
    sub_10073CA();
    return 0;
  }
  v3 = GetStdHandle(0xFFFFFFF6u);
  v4 = v3;
  hConsoleHandle = v3;
  if ( v3 )
  {
    if ( v3 != void_FLAG_PROTECT_FROM_CLOSE|void_FLAG_INHERIT && v3 != (void)-1 )
    {
      v28 = 1;
      goto LABEL_9;
    }
    GetConsoleMode(v3, &dwMode);
    if ( SetConsoleMode(v4, 1u) )
    {
      while ( 1 )
      {
LABEL_9:
        while ( 1 )
        {
          if ( v28 != 1 )
          {
            if ( !ReadConsoleW(hConsoleHandle, &Buffer, 1u, &NumberOfBytesRead, 0) )
            {
              SetConsoleMode(hConsoleHandle, dwMode);
              return 0;
            }
          }
          else
          {
            if ( !ReadFile(&hConsoleHandle , &Buffer, 1u, &NumberOfBytesRead, 0) )
              return 0;
            if ( !NumberOfBytesRead )
            {
LABEL_12:
              v9 = dwMode;
              v10 = hConsoleHandle;
              *(char *)(v22 + 2 * v23) = 0;
              SetConsoleMode(v10, v9);
              wsprintfW((char *)&v18, L"%s", L"\n\n");
              v11 = GetStdHandle(0xFFFFFFF5u);
              WriteConsoleW(v11, &v18, 2u, &NumberOfCharsWritten, 0);
              return 1;
            }
          }
          if ( Buffer == 13 )
            goto LABEL_12;
          if ( Buffer != 8 )
            break;
          if ( v23 )
          {
            wsprintfW((char *)&v18, L"%c", 8);
            v12 = GetStdHandle(0xFFFFFFF5u);
            WriteConsoleW(v12, &v18, 1u, &NumberOfCharsWritten, 0);
            wsprintfW((char *)&v18, L"%c", 0);
            v13 = GetStdHandle(0xFFFFFFF5u);
            WriteConsoleW(v13, &v18, 1u, &NumberOfCharsWritten, 0);
            wsprintfW((char *)&v18, L"%c", 8);
            v14 = GetStdHandle(0xFFFFFFF5u);
            WriteConsoleW(v14, &v18, 1u, &NumberOfCharsWritten, 0);
            --v23;
          }
        }
        if ( v23 == a2 - 1 )
          break;
        if ( Buffer != 10 )
        {
          v16 = v23++;
          v8 = 0;
          *(char *)(v22 + 2 * v16) = Buffer;
          v7 = &NumberOfCharsWritten;
          v6 = 1;
          v5 = L"*";
LABEL_21:
          v15 = GetStdHandle(0xFFFFFFF5u);
          WriteConsoleW(v15, v5, v6, v7, v8);
        }
      }
      v8 = 0;
      v7 = &NumberOfCharsWritten;
      v6 = 1;
      v5 = &dword_10015F8;
      goto LABEL_21;
    }
  }
  return 0;
}

//----- (01007A6D) --------------------------------------------------------
void  sub_1007A6D(int a1, int a2, int a3)
{
  int v3; 
  void result; 
  int Str; 
  int SubStr; 
  int v7; 
  char v8; 
  int v9; 
  char v10; 
  int v11; 

  Str = 0;
  SubStr = 0;
  v3 = a1;
  v7 = dword_100D048;
  memset(&v8, 0, 0x1F8u);
  v9 = 0;
  memset(&v10, 0, 0x1F8u);
  v11 = 0;
  if ( a1 && a2 )
  {
    wsprintfW((char *)&Str, L"|%s|", a2);
    wsprintfW((char *)&SubStr, L"|%s|", v3);
    if ( a3 )
    {
      CharUpperW((char *)&Str);
      CharUpperW((char *)&SubStr);
    }
    result = wcsstr((const char *)&Str, (const char *)&SubStr) != 0;
  }
  else
  {
    SetLastError(0x57u);
    sub_10073CA();
    result = 0;
  }
  return result;
}

//----- (01007B40) --------------------------------------------------------
int  sub_1007B40(void Str1, void Str2, int a3, void MaxCount)
{
  int result; 

  if ( Str1 && Str2 )
  {
    if ( a3 )
    {
      if ( MaxCount )
        result = wcsnicmp(Str1, Str2, MaxCount);
      else
        result = lstrcmpiW(Str1, Str2);
    }
    else
    {
      if ( MaxCount )
        result = wcsncmp(Str1, Str2, MaxCount);
      else
        result = lstrcmpW(Str1, Str2);
    }
  }
  else
  {
    SetLastError(0x57u);
    sub_10073CA();
    result = 0;
  }
  return result;
}

//----- (01007BAD) --------------------------------------------------------
int  sub_1007BAD(int uID, void lpString1, int iMaxLength)
{
  int v4; 
  int v5; 
  int v6; 
  void *v7; 
  int v8; 
  void *v9; 
  int v10; 

  if ( !dword_100DCE8 )
  {
    sub_10072F0(0);
    dword_100DCE8 = 1;
  }
  if ( !lpString1 )
  {
    SetLastError(0x57u);
    sub_10073CA();
    return 0;
  }
  v5 = *MK_FP(__FS__, 44) + 4 * TlsIndex;
  v4 = *v5;
  v6 = iMaxLength;
  if ( *(*v5 + 12) )
  {
    if ( dword_100DCE4 >= (unsigned int)iMaxLength )
      goto LABEL_11;
    v9 = *(void **)(*v5 + 12);
    dword_100DCE4 = iMaxLength;
    v7 = realloc(v9, 2 * iMaxLength + 2);
  }
  else
  {
    dword_100DCE4 = iMaxLength;
    v7 = calloc(iMaxLength + 5, 2u);
  }
  *(*v5 + 12) = v7;
  if ( !v7 )
  {
    SetLastError(0x8007000Eu);
    sub_10073CA();
    return 0;
  }
LABEL_11:
  v10 = LoadStringW(0, uID, *(void *)(v4 + 12), v6);
  v8 = v10;
  if ( v10 )
    sub_1007509(*(void *)(v4 + 12), lpString1, v6);
  return v8;
}

//----- (01007C8B) --------------------------------------------------------
void  sub_1007C8B(int a1, void lpBuffer)
{
  const char *v2; 
  int v3; 
  void v4; 
  void v5; 
  void *v6; 
  void *v7; 
  void v8; 
  int v9; 
  int v10; 
  int MultiByteStr; 
  char v12; 
  void *File; 
  void NumberOfCharsWritten; 
  void *v15; 
  int v16; 
   int v17; 
  void nNumberOfCharsToWrite; 
  void hConsoleOutput; 

  v2 = lpBuffer;
  v3 = a1;
  v10 = dword_100D048;
  MultiByteStr = 0;
  memset(&v12, 0, 0xFCu);
  File = (void *)a1;
  NumberOfCharsWritten = 0;
  v15 = 0;
  v16 = 0;
  if ( !a1 || !lpBuffer )
  {
    SetLastError(0x57u);
    sub_10073CA();
    return;
  }
  v17 = 0;
  nNumberOfCharsToWrite = lstrlenW(lpBuffer);
  if ( (char *)v3 == iob[0] + 32 )
    goto LABEL_7;
  if ( (char *)v3 != iob[0] + 64 )
  {
    v17 = 1;
LABEL_7:
    v4 = -11;
    goto LABEL_8;
  }
  v4 = -12;
LABEL_8:
  v5 = GetStdHandle(v4);
  hConsoleOutput = v5;
  if ( v17 || !((char)v5 & 1) )
  {
    v8 = 0;
    while ( v8 < nNumberOfCharsToWrite )
    {
      sub_10074AA(&v2[v8], (char *)&MultiByteStr, 255);
      v8 += 255;
      fprintf(File, (const char *)&MultiByteStr);
      fflush(File);
    }
  }
  else
  {
    if ( sub_1007284(v2, (int)L"%", 0) )
    {
      v9 = lstrlenW(v2);
      v6 = calloc(v9 + 10, 2u);
      v7 = v6;
      if ( v6 )
      {
        wsprintfW((void)v6, v2);
        v2 = (const char *)v7;
      }
    }
    else
    {
      v7 = v15;
    }
    WriteConsoleW(hConsoleOutput, v2, nNumberOfCharsToWrite, &NumberOfCharsWritten, 0);
    if ( v7 )
      free(v7);
  }
}

//----- (01007E09) --------------------------------------------------------
const char * sub_1007E09(void lpString, int a2)
{
  int v2; 
  int v3; 
  void v4; 
  const char *v5; 
  int v6; 
  const char *result; 
  void *v8; 
  void v9; 
  int v10; 
  void *v11; 
  void *v12; 
   int String; 
  int v14; 
  unsigned int v15; 
  const char *v16; 

  v2 = 0;
  String = 37;
  if ( !lpString || !a2 )
    return &word_10012CC;
  v10 = *MK_FP(__FS__, 44) + 4 * TlsIndex;
  v3 = *v10;
  if ( !*(*v10 + 16) && (v11 = sub_1008E1E(), *(v3 + 16) = v11, !v11)
    || (v4 = sub_1008ECB(*(v3 + 16)), v4 < (unsigned int)a2)
    && sub_10093AC(*(v3 + 16), a2 - v4 + 1) != a2 - v4 + 1 )
    goto LABEL_24;
  v5 = lpString;
  if ( !sub_1007284(lpString, (int)&String, 0) || (v6 = lstrlenW(v5), v14 = v6, !v6) )
    return v5;
  v12 = calloc(2 * v6 + 10, 2u);
  v8 = v12;
  if ( !v12 )
  {
LABEL_24:
    v9 = -2147024882;
LABEL_20:
    SetLastError(v9);
    sub_10073CA();
    return &word_10012CC;
  }
  v15 = 0;
  if ( v14 )
  {
    do
    {
      v16 = &lpString[v15];
      if ( sub_10071B3((const char *)&String, lpString[v15], 0) )
        *((char *)v8 + v2++) = 37;
      *((char *)v8 + v2++) = *v16;
      ++v15;
    }
    while ( v15 < v14 );
  }
  *((char *)v8 + v2) = 0;
  if ( sub_100978D(*(v3 + 16), a2, (void)v8, 0) )
  {
    free(v8);
    result = (const char *)sub_10094BE(*(v3 + 16), a2);
    if ( result )
      return result;
    v9 = -2147286787;
    goto LABEL_20;
  }
  SetLastError(0x8007000Eu);
  sub_10073CA();
  free(v8);
  return &word_10012CC;
}

//----- (01007F7A) --------------------------------------------------------
unsigned int  sub_1007F7A(int a1)
{
  unsigned int result; 
  void v2; 
  const char *hMem; 

  hMem = 0;
  v2 = GetLastError();
  sub_10072F0(0);
  result = FormatMessageW(0x1300u, 0, v2, 0x400u, (char *)&hMem, 0, 0);
  if ( hMem )
  {
    sub_1007C8B(a1, hMem);
    result = (unsigned int)LocalFree((void)hMem);
  }
  return result;
}

//----- (01007FD1) --------------------------------------------------------
const char * sub_1007FD1(int this, void lpString1, int a3, int a4)
{
  int v5; 
  void *v6; 
  void *v7; 
  const char *v8; 
  const char *v9; 
  void v10; 
  const char *v11; 
  int v12; 

  v12 = this;
  if ( !lpString1 )
  {
    SetLastError(0x57u);
    sub_10073CA();
    return &word_10012CC;
  }
  if ( sub_10070B4(lpString1) <= a3 )
    v5 = a3;
  else
    v5 = sub_10070B4(lpString1);
  v10 = 2 * v5;
  v7 = calloc(2 * v5, 2u);
  v6 = calloc(v10, 2u);
  v8 = (const char *)v6;
  if ( !v6 )
    goto LABEL_16;
  if ( !v7 )
  {
    free(v6);
LABEL_16:
    if ( v7 )
      free(v7);
    return lpString1;
  }
  lstrcpyW((void)v6, lpString1);
  wsprintfW((void)v7, v8);
  v12 = sub_10070B4((void)v7);
  lstrcpyW((void)v8, &word_10012CC);
  lstrcpyW((void)v7, &word_10012CC);
  if ( v12 >= (unsigned int)a3 )
  {
    lstrcpyW((void)v7, lpString1);
    wsprintfW((void)v8, (void)v7);
    lstrcpynW((void)v7, v8, a3 + 1);
    v11 = sub_1007E09((void)v7, 1);
    lstrcpyW((void)v8, v11);
  }
  else
  {
    sub_10070D7((void)v7, L" ", a3 - v12);
    if ( a4 )
    {
      lstrcpyW((void)v8, (void)v7);
      v9 = lpString1;
    }
    else
    {
      lstrcpyW((void)v8, lpString1);
      v9 = (const char *)v7;
    }
    lstrcatW((void)v8, v9);
  }
  lstrcpyW((void)lpString1, v8);
  free((void *)v8);
  free(v7);
  return lpString1;
}

//----- (010080FF) --------------------------------------------------------
const char * sub_10080FF(int uID)
{
  int v1; 
  const char *result; 
  int v3; 
  void *v4; 
  char v5; 

  v3 = *MK_FP(__FS__, 44) + 4 * TlsIndex;
  v1 = *v3;
  if ( *(*v3 + 8) || (v4 = calloc(0x103u, 2u), *(v1 + 8) = v4, v4) )
  {
    v5 = sub_1007BAD(uID, *(void *)(v1 + 8), 254) == 0;
    result = &word_10012CC;
    if ( !v5 )
      result = *(const char **)(v1 + 8);
  }
  else
  {
    result = &word_10012CC;
  }
  return result;
}

//----- (0100816F) --------------------------------------------------------
 int  sub_100816F(void lpString)
{
  char *v1; 

  v1 = (char *)lpString;
  if ( !lpString )
  {
    SetLastError(0x57u);
    sub_10073CA();
    return 0;
  }
  if ( lstrlenW(lpString) <= 1 || !wcschr(L"-/", *v1) )
    return 0;
  return 1;
}

//----- (010081BD) --------------------------------------------------------
void  sub_10081BD(int a1, void lpString, int a3)
{
  void v3; 

  if ( a1 && (v3 = lpString, lpString) )
  {
    if ( sub_100816F(lpString) )
      return sub_1007A6D((int)(v3 + 1), a1, 1);
  }
  else
  {
    SetLastError(0x57u);
    sub_10073CA();
  }
  return 0;
}

//----- (01008203) --------------------------------------------------------
 int  sub_1008203(int a1, int a2, void lpString)
{
  const char *v3; 
  int v4; 
  int v5; 
  int v6; 
   int v8; 
  int v9; 
  char v10; 
   int v11; 
  int v12; 
   int v13; 
  int v14; 
  const void *v15; 
  int v16; 
  int v17; 

  v11 = -1;
  v3 = lpString;
  v4 = a2;
  v12 = dword_100D048;
  if ( a2 && lpString )
  {
    v8 = sub_100816F(lpString);
    v5 = 0;
    v13 = v8;
    v14 = 0;
    if ( !a1 )
      return v11;
    v15 = (const void *)v4;
    while ( 1 )
    {
      memcpy(&v16, v15, 0x418u);
      v9 = v17;
      v6 = v9 & 0x40000;
      if ( v6 )
        v11 = v5;
      if ( v13 )
      {
        if ( sub_10081BD((int)&v16, v3, 1) )
          return v14;
      }
      else
      {
        if ( v6 )
          return v5;
      }
      v15 = (char *)v15 + 1048;
      v5 = v14 + 1;
      v10 = v14++ + 1 < (unsigned int)a1;
      if ( !v10 )
        return v11;
    }
  }
  SetLastError(0x57u);
  sub_10073CA();
  return -1;
}

//----- (010082EF) --------------------------------------------------------
void  sub_10082EF(char *lpString, int a2, int a3)
{
  char *v3; 
  void *v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  char *v9; 

  v3 = wcschr(lpString, 0x3Au);
  v9 = v3;
  if ( v3 )
  {
    v8 = lstrlenW(v3) - 1;
    v7 = lstrlenW(lpString) - v8 - 1;
    v5 = a3;
    *a3 = calloc(v8 + 5, 2u);
    v4 = calloc(v7 + 5, 2u);
    v6 = a2;
    *a2 = v4;
    if ( *v5 )
    {
      if ( v4 )
      {
        lstrcpyW(*(void *)v5, v9 + 1);
        lstrcpynW(*(void *)v6, lpString, v7 + 1);
        return;
      }
      free(*(void **)v5);
      *v5 = 0;
    }
    if ( *v6 )
    {
      free(*(void **)v6);
      *v6 = 0;
    }
    *v5 = 0;
    *v6 = 0;
  }
}

//----- (0100839E) --------------------------------------------------------
void  sub_100839E(unsigned int a1, void *a2, int a3, int a4)
{
  const char *v4; 
  unsigned int v5; 
  int v6; 
  int v7; 
  int v8; 
   int v9; 
  int v10; 
  int v11; 
   int v12; 
  char *v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  const char *v19; 
  int *v20; 
  const char *v21; 
  int v22; 
  int ( *v23)(void, void, void); 
  int v24; 
  int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  int v29; 
  int v30; 
  int v31; 
  const char *v32; 
  int *v33; 
  int v34; 
  int v36; 
  const char *v37; 
  int v38; 
  const char *v39; 
  const char *v40; 
  const char *v41; 
  const char *v42; 
  const char *v43; 
  const char *v44; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  const char *v48; 
  int v49; 
  int v50; 
  int v51; 
  const char *v54; 
  int *v55; 
  double v56; 
  const char *v58; 
  const char *v59; 
  const char *v60; 
  const char *v61; 
  const char *v62; 
  const char *v63; 
  int v64; 
  int v65; 
  int String2; 
  char v67; 
  int String; 
  void *v69; 
   int v70; 
  char v71; 
   int v72; 
  void lpString2; 
   int v74; 
  void *lpString; 
  int v76; 
   int v77; 
   int v78; 
   int v79; 
  void Str2; 
   int v81; 

  v64 = dword_100D048;
  v65 = a4;
  String2 = 0;
  memset(&v67, 0, 0x3FCu);
  String = 0;
  v69 = a2;
  v70 = 0;
  memset(&v71, 0, 0x3FCu);
  v72 = 0;
  if ( !a2 || !v65 )
  {
    SetLastError(0x57u);
    goto LABEL_145;
  }
  if ( !sub_1007025() )
  {
    v4 = sub_10080FF(0x157Fu);
LABEL_142:
    sub_1007143(v4);
    return 0;
  }
  v5 = 0;
  lpString2 = 0;
  if ( (unsigned int)a3 > 0 )
  {
    v6 = v65;
    while ( !(*(v6 + 514) & 1) )
    {
      ++v5;
      v6 += 1048;
      if ( v5 >= a3 )
        goto LABEL_11;
    }
    lpString2 = (void)v6;
  }
LABEL_11:
  v8 = 0;
  v7 = sub_1007284(*v69, (int)L"\\:", 0);
  while ( v7 )
  {
    v36 = 1 - lstrlenW((void)v7);
    v8 = lstrlenW(*v69) + v36;
    v7 = sub_1007284(*v69, (int)L"\\:", v8);
  }
  v37 = sub_1007E09(&(*v69)[v8], 1);
  lstrcpyW((char *)&String, v37);
  v38 = lstrlenW((const char *)&String);
  v10 = v38 - 4;
  v9 = 0;
  if ( v38 - 4 <= 0 || !sub_1007B40((void)&String + v10, L".EXE", 1, 0) )
    *((char *)&String + v10) = 0;
  if ( lpString2 )
  {
    lstrcatW((char *)&String, L" /");
    lstrcatW((char *)&String, lpString2);
  }
  lstrcatW((char *)&String, L" /?");
  CharUpperW((char *)&String);
  sub_1007143(&word_10012CC);
  v74 = 1;
  if ( a1 <= 1 )
  {
LABEL_113:
    v28 = 0;
    if ( v70 == v9 )
    {
      v29 = v65 + 520;
      while ( v28 < a3 )
      {
        v30 = v29 - 520;
        if ( *(v29 - 6) & 8 && *v29 == v9 )
        {
          if ( lstrlenW((void)(v29 - 520)) )
          {
            v62 = sub_10080FF(0x15E4u);
            wsprintfW((char *)&String2, v62, v30, &String);
          }
          else
          {
            v63 = sub_10080FF(0x15E8u);
            wsprintfW((char *)&String2, v63, &String);
          }
          sub_1007143(&word_10012CC);
          goto LABEL_141;
        }
        ++v28;
        v29 += 1048;
      }
    }
    return v72 != 1;
  }
  while ( 1 )
  {
    lpString = 0;
    v76 = 0;
    v77 = 0;
    v78 = 0;
    v79 = 0;
    v11 = (int)&v69[v74];
    v39 = *(const char **)v11;
    Str2 = &word_10012CC;
    if ( lstrlenW(v39) > 254 )
      goto LABEL_51;
    v13 = *(char **)v11;
    v40 = *(const char **)v11;
    lpString2 = *(void *)v11;
    v12 = sub_1008203(a3, v65, v40);
    if ( v12 == -1 )
    {
      sub_10082EF(v13, (int)&lpString, (int)&v76);
      if ( !lpString || !v76 || (v12 = sub_1008203(a3, v65, (void)lpString), v12 == -1) )
      {
        v33 = &String;
        v32 = sub_1007E09(v13, 1);
        v31 = 5607;
        goto LABEL_120;
      }
      Str2 = (void)v76;
      lpString2 = (void)lpString;
      v79 = 1;
      v77 = 1;
      v78 = 1;
    }
    v14 = v65 + 1048 * v12;
    v15 = v14;
    if ( !*(v14 + 524) )
      break;
    v81 = 0;
    if ( *(v14 + 514) & 4 )
    {
      if ( !sub_100816F(lpString2) || !sub_10081BD(v15, lpString2, 1) )
      {
        v81 = 1;
        if ( lstrlenW(lpString2) >= 254 )
          goto LABEL_47;
        Str2 = lpString2;
LABEL_54:
        v77 = 1;
        goto LABEL_55;
      }
      v81 = 0;
    }
    if ( sub_100816F(lpString2) == 1 )
    {
      if ( v74 + 1 >= a1 || v78 )
        goto LABEL_41;
      if ( lstrlenW(*(void *)(v11 + 4)) > 254 )
        goto LABEL_51;
      if ( sub_100816F(*(void *)(v11 + 4)) == 1 )
      {
        if ( *(v15 + 512) != 2 || !sub_1007750(*(void *)(v11 + 4), 10, 1) )
        {
          if ( sub_1008203(a3, v65, *(void *)(v11 + 4)) == -1 )
            goto LABEL_39;
LABEL_41:
          if ( *(v15 + 513) & 0x20 && !v78 )
          {
            if ( lpString )
              free(lpString);
            if ( v76 )
              free((void *)v76);
            v33 = &String;
            v32 = sub_1007E09(lpString2, 1);
            v31 = 5611;
LABEL_120:
            v58 = sub_10080FF(v31);
            wsprintfW((char *)&String2, v58, v32, v33);
LABEL_141:
            SetLastError(0x800401E4u);
            v4 = (const char *)&String2;
            goto LABEL_142;
          }
          if ( v78 )
          {
            if ( !v79 )
              Str2 = *(void *)(v11 + 4);
            if ( lstrlenW(Str2) > 254 )
            {
LABEL_47:
              if ( lpString )
                free(lpString);
              if ( v76 )
                free((void *)v76);
LABEL_51:
              v41 = sub_10080FF(0x15E9u);
              sub_1007143(v41);
              SetLastError(0x800401E4u);
              return 0;
            }
            goto LABEL_54;
          }
          goto LABEL_55;
        }
      }
      else
      {
LABEL_39:
        if ( !(*(v15 + 513) & 0xF0) )
          goto LABEL_41;
      }
      v78 = 1;
      goto LABEL_41;
    }
LABEL_55:
    if ( !v77 || (v16 = *(v15 + 512), v16 & 0x200000) )
    {
      if ( (unsigned int)(*(v15 + 512) & 0xF000) != 4096 )
LABEL_99:
        **(void **)(v15 + 524) = 1;
    }
    else
    {
      if ( char1(v16) & 2 )
      {
        if ( !sub_1007A6D((int)Str2, v15 + 528, 1) )
        {
          if ( v81 == 1 )
          {
            v42 = sub_1007E09(*(void *)v11, 1);
            v43 = sub_10080FF(0x15ECu);
            wsprintfW((char *)&String2, v43, v42, &String);
          }
          else
          {
            v44 = sub_1007E09(*(void *)v11, 2);
            v45 = sub_1007E09(*(void *)(v11 + 4), 1);
            v46 = sub_10080FF(0x15E1u);
            wsprintfW((char *)&String2, v46, v45, v44, &String);
          }
          if ( !v72 )
          {
            v72 = 1;
            SetLastError(0x800401E4u);
            sub_1007143((const char *)&String2);
          }
        }
      }
      v17 = *(v15 + 512);
      switch ( (char)v17 )
      {
        case 1:
          if ( char1(v17) & 1 )
          {
            if ( !(char1(v17) & 0x40) || sub_100990E(**(void **)(v15 + 524), Str2, 1, 0) == -1 )
              sub_1009167(**(void **)(v15 + 524), Str2, 0);
          }
          else
          {
            lstrcpyW(*(void *)(v15 + 524), Str2);
          }
          break;
        case 2:
          if ( !sub_1007750(Str2, 10, 1) )
            goto LABEL_71;
          v22 = 10;
          v21 = Str2;
          if ( !(*(v15 + 513) & 1) )
            goto LABEL_76;
          v49 = sub_1007629(Str2, 10);
          sub_10091DB(**(void **)(v15 + 524), v49);
          break;
        case 3:
          if ( sub_1007750(Str2, 10, 0) )
          {
            v22 = 10;
            v21 = Str2;
            if ( *(v15 + 513) & 1 )
            {
              v50 = sub_1007629(Str2, 10);
              sub_1009233(**(void **)(v15 + 524), v50);
            }
            else
            {
LABEL_76:
              **(void **)(v15 + 524) = sub_1007629(v21, v22);
            }
            break;
          }
LABEL_71:
          if ( v72 )
            break;
          v20 = &String;
          v47 = *(const char **)v11;
          v72 = 1;
          v19 = sub_1007E09(v47, 1);
          v18 = 5602;
          goto LABEL_73;
        case 7:
          if ( !sub_10076BD(Str2) )
            goto LABEL_85;
          if ( *(v15 + 513) & 1 )
          {
            sub_10075A6(Str2);
            
            sub_100928B(**(void **)(v15 + 524), v51);
          }
          else
          {
            sub_10075A6(Str2);
            
            _EAX = *(v15 + 524);
            
            {
            }
          }
          break;
        case 8:
          if ( sub_10076BD(Str2) )
          {
            if ( *(v15 + 513) & 1 )
            {
              sub_10075A6(Str2);
              v55 = *(int **)(v15 + 524);
              
              sub_10092E3(*v55, v56);
            }
            else
            {
              sub_10075A6(Str2);
              _EAX = *(v15 + 524);
              
            }
          }
          else
          {
LABEL_85:
            if ( !v72 )
            {
              v20 = &String;
              v54 = *(const char **)v11;
              v72 = 1;
              v19 = sub_1007E09(v54, 1);
              v18 = 5603;
LABEL_73:
              v48 = sub_10080FF(v18);
              wsprintfW((char *)&String2, v48, v19, v20);
              SetLastError(0x800401E4u);
              sub_1007143((const char *)&String2);
            }
          }
          break;
        case 9:
          v23 = *(int ( **)(void, void, void))(v15 + 1040);
          if ( v23 )
          {
            v24 = *(v15 + 1044);
            if ( !v24 )
              v24 = v15;
            v25 = v23(*v11, Str2, v24);
            if ( !v25 )
            {
              if ( v72 == v25 )
                v72 = 1;
            }
          }
          else
          {
            if ( v72 == (void)v23 )
            {
              v72 = 1;
              SetLastError(0x80030057u);
              sub_10073CA();
            }
          }
          break;
        case 4:
        case 5:
        case 6:
          break;
        default:
          goto LABEL_99;
      }
    }
    if ( v78 )
    {
      if ( !v79 )
        ++v74;
    }
    ++*(v15 + 520);
    v26 = *(v15 + 520);
    if ( *(v15 + 514) & 2 )
      v70 = 1;
    v27 = *(v15 + 516);
    if ( v27 && v26 > v27 )
    {
      v34 = *(v15 + 516);
      if ( v81 == 1 )
      {
        v59 = sub_10080FF(0x15EAu);
        wsprintfW((char *)&String2, v59, v34, &String);
      }
      else
      {
        v60 = sub_1007E09(lpString2, 1);
        v61 = sub_10080FF(0x15E5u);
        wsprintfW((char *)&String2, v61, v60, v34, &String);
      }
      sub_1007143(&word_10012CC);
      if ( lpString )
        free(lpString);
      if ( v76 )
        free((void *)v76);
      goto LABEL_141;
    }
    if ( v76 )
      free((void *)v76);
    if ( lpString )
      free(lpString);
    ++v74;
    if ( v74 >= a1 )
    {
      v9 = 0;
      goto LABEL_113;
    }
  }
  SetLastError(0x3E6u);
  if ( lpString )
    free(lpString);
  if ( v76 )
    free((void *)v76);
LABEL_145:
  sub_10073CA();
  return 0;
}

//----- (01008DFD) --------------------------------------------------------
void  sub_1008DFD(int a1)
{
  return a1 && *a1 == 9;
}

//----- (01008E1E) --------------------------------------------------------
void * sub_1008E1E()
{
  void *result; 

  result = calloc(1u, 0x10u);
  if ( result )
  {
    *(result + 1) = 0;
    *(result + 2) = 0;
    *(result + 3) = 0;
    *result = 9;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (01008E48) --------------------------------------------------------
void  sub_1008E48(int a1)
{
  void result; 
  int v2; 
  int v3; 
  int v4; 

  v2 = a1;
  result = sub_1008DFD(a1);
  if ( result )
  {
    v3 = *(v2 + 8);
    if ( v3 )
    {
      do
      {
        v4 = *(v3 + 16);
        sub_1008F96(v3);
        free((void *)v3);
        v3 = v4;
      }
      while ( v4 );
    }
    result = 0;
    *(v2 + 4) = 0;
    *(v2 + 8) = 0;
    *(v2 + 12) = 0;
  }
  return result;
}

//----- (01008E92) --------------------------------------------------------
void  sub_1008E92(int a1)
{
  int v1; 
  void **v2; 

  v2 = (void **)a1;
  if ( sub_1008DFD(*a1) )
  {
    sub_1008E48(v1);
    if ( *v2 )
    {
      free(*v2);
      *v2 = 0;
    }
    *v2 = 0;
  }
}

//----- (01008ECB) --------------------------------------------------------
void  sub_1008ECB(int a1)
{
  void result; 
  int v2; 

  result = sub_1008DFD(a1);
  if ( result )
    result = *(v2 + 4);
  return result;
}

//----- (01008EE9) --------------------------------------------------------
int  sub_1008EE9(int a1, unsigned int a2, int a3)
{
  int v3; 
  unsigned int v4; 
  int result; 
  int v6; 

  if ( sub_1008DFD(a1) && (v4 = a2, *(v3 + 4) > a2) )
  {
    result = *(v3 + 8);
    v6 = 0;
    if ( a2 >= 1 )
    {
      do
      {
        --v4;
        v6 = result;
        result = *(result + 16);
      }
      while ( v4 );
    }
    if ( a3 )
      *a3 = v6;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (01008F2D) --------------------------------------------------------
int  sub_1008F2D(int a1, int a2, int a3, int a4)
{
  int v4; 
  void *v5; 
  int result; 
  int v7; 

  v4 = a1;
  if ( sub_1008DFD(a1) && (v5 = calloc(1u, 0x14u), v5) )
  {
    v7 = a2;
    *(v5 + 4) = 0;
    *(v5 + 1) = v7;
    *(v5 + 2) = a3;
    *(v5 + 3) = a4;
    *v5 = 99;
    ++*(v4 + 4);
    if ( *(v4 + 8) )
      *(*(v4 + 12) + 16) = v5;
    else
      *(v4 + 8) = v5;
    *(v4 + 12) = v5;
    result = *(v4 + 4) - 1;
  }
  else
  {
    result = -1;
  }
  return result;
}

//----- (01008F96) --------------------------------------------------------
void  sub_1008F96(int a1)
{
  int v1; 
   int v2; 
  int v3; 

  v1 = a1;
  if ( a1 )
  {
    v2 = *(a1 + 4);
    if ( (unsigned int)v2 <= 0x70000 )
    {
      if ( v2 != 458752 && v2 != 131072 && v2 != 196608 && v2 != 262144 && v2 != 327680 && v2 != 393216 )
        return;
LABEL_14:
      if ( *(a1 + 12) )
      {
        free(*(void **)(a1 + 12));
        *(v1 + 12) = 0;
      }
      *(v1 + 12) = 0;
      return;
    }
    if ( v2 == 524288 )
    {
      v3 = a1 + 12;
      sub_1008E92(a1 + 12);
      *v3 = 0;
      return;
    }
    if ( v2 == 589824 || v2 == 655360 || v2 == 720896 )
      goto LABEL_14;
  }
}

//----- (01009021) --------------------------------------------------------
int  sub_1009021(int a1, int a2, void Str2, int a4, void MaxCount)
{
  int v5; 
  int v7; 
  int v8; 
  int v10; 
  char v11; 
  int v12; 
  char v13; 
  char v17; 

  v5 = a1;
  if ( !sub_1008DFD(a1) )
    return -1;
  v7 = 0;
  v13 = *(v5 + 4) == 0;
  v8 = *(v5 + 8);
  a1 = 0;
  if ( v13 )
    return -1;
  _ESI = Str2;
  while ( 1 )
  {
    if ( *(v8 + 4) != a2 )
      goto LABEL_31;
    if ( (unsigned int)a2 > 0x70000 )
    {
      if ( a2 == 589824 )
      {
LABEL_29:
        v11 = **(void **)(v8 + 12) == *_ESI;
      }
      else
      {
        if ( a2 == 655360 )
        {
          v12 = *(v8 + 12);
          if ( *(_ESI + 3) != *(char *)(v12 + 6)
            || *(_ESI + 7) != *(char *)(v12 + 14)
            || *(_ESI + 5) != *(char *)(v12 + 10)
            || *(_ESI + 1) != *(char *)(v12 + 2)
            || *(_ESI + 6) != *(char *)(v12 + 12) )
            goto LABEL_31;
          v11 = *_ESI == *(char *)v12;
        }
        else
        {
          if ( a2 != 720896 || (v10 = *(v8 + 12), *(_ESI + 1) != *(v10 + 4)) )
            goto LABEL_31;
          v11 = *_ESI == *v10;
        }
      }
      if ( v11 )
        return v7;
      goto LABEL_31;
    }
    if ( a2 == 458752 )
    {
      _EAX = *(v8 + 12);
      
      {
      }
      goto LABEL_13;
    }
    if ( a2 == 131072 )
      break;
    if ( a2 == 196608 || a2 == 262144 )
      goto LABEL_29;
    if ( a2 == 393216 )
    {
      _EAX = *(v8 + 12);
      
      {
      }
LABEL_13:
      
      {
      }
      return v7;
    }
LABEL_31:
    v8 = *(v8 + 16);
    ++v7;
    v17 = (unsigned int)v7 < *(v5 + 4);
    a1 = v7;
    if ( !v17 )
      return -1;
  }
  if ( sub_1007B40(*(void *)(v8 + 12), _ESI, a4, MaxCount) )
  {
    v7 = a1;
    goto LABEL_31;
  }
  return a1;
}

//----- (01009167) --------------------------------------------------------
int  sub_1009167(int a1, void lpString2, int a3)
{
  int result; 
  int v4; 
  void *v5; 
  int v6; 
  int v7; 

  if ( !sub_1008DFD(a1) )
    return -1;
  v4 = a3;
  if ( !a3 )
    v4 = lstrlenW(lpString2);
  v7 = v4 + 1;
  v5 = calloc(v7, 2u);
  v6 = (int)v5;
  if ( v5 )
  {
    lstrcpynW((void)v5, lpString2, v7);
    result = sub_1008F2D(a1, 131072, 2 * v7, v6);
    if ( result != -1 )
      return result;
    free((void *)v6);
  }
  return -1;
}

//----- (010091DB) --------------------------------------------------------
int  sub_10091DB(int a1, int a2)
{
  int result; 
  int v3; 
  void *v4; 
  int v5; 

  if ( !sub_1008DFD(a1) )
    return -1;
  v3 = (int)calloc(1u, 4u);
  v4 = (void *)v3;
  if ( v3 )
  {
    v5 = a1;
    *v3 = a2;
    result = sub_1008F2D(v5, 196608, 4, v3);
    if ( result != -1 )
      return result;
    free(v4);
  }
  return -1;
}

//----- (01009233) --------------------------------------------------------
int  sub_1009233(int a1, int a2)
{
  int result; 
  int v3; 
  void *v4; 
  int v5; 

  if ( !sub_1008DFD(a1) )
    return -1;
  v3 = (int)calloc(1u, 4u);
  v4 = (void *)v3;
  if ( v3 )
  {
    v5 = a1;
    *v3 = a2;
    result = sub_1008F2D(v5, 262144, 4, v3);
    if ( result != -1 )
      return result;
    free(v4);
  }
  return -1;
}

//----- (0100928B) --------------------------------------------------------
int  sub_100928B(int a1, int a2)
{
  int result; 
  int v3; 
  void *v4; 
  int v5; 

  if ( !sub_1008DFD(a1) )
    return -1;
  v3 = (int)calloc(1u, 4u);
  v4 = (void *)v3;
  if ( v3 )
  {
    v5 = a1;
    *v3 = a2;
    result = sub_1008F2D(v5, 393216, 4, v3);
    if ( result != -1 )
      return result;
    free(v4);
  }
  return -1;
}

//----- (010092E3) --------------------------------------------------------
int  sub_10092E3(int a1, double a2)
{
  int result; 
  int v3; 

  if ( !sub_1008DFD(a1) )
    return -1;
  v3 = (int)calloc(1u, 8u);
  _ESI = (void *)v3;
  if ( v3 )
  {
    
    {
    }
    result = sub_1008F2D(a1, 458752, 8, v3);
    if ( result != -1 )
      return result;
    free(_ESI);
  }
  return -1;
}

//----- (0100933B) --------------------------------------------------------
int  sub_100933B(int this, int a2, unsigned int a3)
{
  unsigned int v3; 
  int result; 
  void *v5; 
  int v6; 

  v6 = this;
  if ( !sub_1008DFD(a2) || (v5 = sub_1008E1E(), v6 = (int)v5, !v5) )
    goto LABEL_9;
  v3 = 0;
  if ( a3 )
  {
    do
    {
      if ( sub_1008F2D(v6, 0, 0, 0) == -1 )
        break;
      ++v3;
    }
    while ( v3 < a3 );
  }
  if ( v3 != a3 || (result = sub_1008F2D(a2, 524288, 4, v6), result == -1) )
  {
    sub_1008E92((int)&v6);
LABEL_9:
    result = -1;
  }
  return result;
}

//----- (010093AC) --------------------------------------------------------
 int  sub_10093AC(int a1, unsigned int a2)
{
   int result; 
   int v3; 

  if ( sub_1008DFD(a1) )
  {
    v3 = 0;
    if ( a2 )
    {
      do
      {
        if ( sub_1008F2D(a1, 0, 0, 0) == -1 )
          break;
        ++v3;
      }
      while ( v3 < a2 );
    }
    result = v3;
  }
  else
  {
    result = -1;
  }
  return result;
}

//----- (010093EF) --------------------------------------------------------
int  sub_10093EF(int a1, int a2, void lpString2, int a4)
{
  int v4; 
  int result; 

  v4 = sub_1008EE9(a1, a2, 0);
  if ( v4 && *(v4 + 4) == 524288 )
    result = sub_1009167(*(v4 + 12), lpString2, a4);
  else
    result = -1;
  return result;
}

//----- (0100942A) --------------------------------------------------------
int  sub_100942A(int a1, unsigned int a2)
{
  int result; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 

  v7 = 0;
  v4 = a1;
  result = sub_1008EE9(a1, a2, (int)&v7);
  v3 = result;
  if ( result )
  {
    v5 = v7;
    v6 = *(v3 + 16);
    if ( v7 )
      *(v7 + 16) = v6;
    else
      *(v4 + 8) = v6;
    if ( v3 == *(v4 + 12) )
      *(v4 + 12) = v5;
    --*(v4 + 4);
    sub_1008F96(v3);
    free((void *)v3);
    result = 1;
  }
  return result;
}

//----- (01009485) --------------------------------------------------------
int  sub_1009485(int a1, unsigned int a2)
{
  int v2; 
   int v3; 
  int result; 

  v2 = sub_1008EE9(a1, a2, 0);
  if ( v2 && ((v3 = *(v2 + 4), v3 == 65536) || v3 == 524288) )
    result = *(v2 + 12);
  else
    result = 0;
  return result;
}

//----- (010094BE) --------------------------------------------------------
int  sub_10094BE(int a1, unsigned int a2)
{
  int v2; 
  int result; 

  v2 = sub_1008EE9(a1, a2, 0);
  if ( v2 && *(v2 + 4) == 131072 )
    result = *(v2 + 12);
  else
    result = 0;
  return result;
}

//----- (010094ED) --------------------------------------------------------
 int  sub_10094ED(int a1, unsigned int a2)
{
  int v2; 
   int v3; 
   int result; 

  v2 = sub_1008EE9(a1, a2, 0);
  if ( v2 && ((v3 = *(v2 + 4), v3 == 262144) || v3 == 196608) )
    result = **(void **)(v2 + 12);
  else
    result = -1;
  return result;
}

//----- (01009529) --------------------------------------------------------
int  sub_1009529(int a1, unsigned int a2)
{
  int result; 

  result = sub_1008EE9(a1, a2, 0);
  if ( result && *(result + 4) == 393216 )
  {
    result = *(result + 12);
    
  }
  else
  {
    
  }
  return result;
}

//----- (0100955E) --------------------------------------------------------
int  sub_100955E(int a1, unsigned int a2)
{
  int result; 

  result = sub_1008EE9(a1, a2, 0);
  if ( result && *(result + 4) == 458752 )
  {
    result = *(result + 12);
    
  }
  else
  {
    
  }
  return result;
}

//----- (01009593) --------------------------------------------------------
int  sub_1009593(int a1, int a2, unsigned int a3)
{
  int v3; 
   int v4; 
  int result; 
  int v6; 
  int v7; 
  struct SystemTime; 
  void FileTime; 

  SystemTime.wYear = 0;
  SystemTime.wMonth = 0;
  SystemTime.wDayOfWeek = 0;
  SystemTime.wDay = 0;
  SystemTime.wHour = 0;
  SystemTime.wMinute = 0;
  FileTime.dwLowDateTime = 0;
  FileTime.dwHighDateTime = 0;
  *&SystemTime.wSecond = 0;
  v3 = sub_1008EE9(a2, a3, 0);
  if ( v3 )
  {
    v4 = *(v3 + 4);
    if ( v4 == 655360 )
    {
LABEL_5:
      v6 = *(v3 + 12);
      *&SystemTime.wYear = *v6;
      v6 += 4;
      *&SystemTime.wDayOfWeek = *v6;
      v6 += 4;
      *&SystemTime.wHour = *v6;
      *&SystemTime.wSecond = *(v6 + 4);
      goto LABEL_7;
    }
    if ( v4 == 720896 )
    {
      if ( v4 != 655360 )
      {
        v7 = *(v3 + 12);
        FileTime.dwLowDateTime = *v7;
        FileTime.dwHighDateTime = *(v7 + 4);
        FileTimeToSystemTime(&FileTime, &SystemTime);
        goto LABEL_7;
      }
      goto LABEL_5;
    }
  }
LABEL_7:
  result = a1;
  *a1 = *&SystemTime;
  *(a1 + 4) = *&SystemTime.wDayOfWeek;
  *(a1 + 8) = *&SystemTime.wHour;
  *(a1 + 12) = *&SystemTime.wSecond;
  return result;
}

//----- (0100962A) --------------------------------------------------------
int  sub_100962A(int a1, int a2, void lpString, int iMaxLength)
{
  char *v4; 
  int v5; 
  int v6; 
   int v8; 
  const char *v9; 
  int v10; 
  int v11; 
  int v13; 
  int v15; 
  int v16; 
  char v17; 
  int v18; 

  v15 = 0;
  v4 = lpString;
  v16 = dword_100D048;
  memset(&v17, 0, 0x1F8u);
  v18 = 0;
  v11 = sub_1008EE9(a1, a2, 0);
  v5 = v11;
  if ( !v11 || (lstrcpyW(v4, &word_10012CC), v6 = iMaxLength, !iMaxLength) )
    return 0;
  v8 = *(v5 + 4);
  if ( v8 == 131072 )
  {
    v10 = iMaxLength;
    v9 = *(const char **)(v5 + 12);
    goto LABEL_15;
  }
  if ( v8 == 196608 || v8 == 262144 )
  {
    wsprintfW((char *)&v15, L"%ld", **(void **)(v5 + 12));
    goto LABEL_13;
  }
  if ( v8 == 393216 )
  {
    _EAX = *(v5 + 12);
    
    goto LABEL_10;
  }
  if ( v8 == 458752 )
  {
    _EAX = *(v5 + 12);
    
LABEL_10:
    
    wsprintfW((char *)&v15, L"%f", v13, *(&v13 + 1));
LABEL_13:
    v10 = v6;
    v9 = (const char *)&v15;
LABEL_15:
    lstrcpynW(v4, v9, v10);
  }
  return lstrlenW(v4);
}

//----- (0100971F) --------------------------------------------------------
int  sub_100971F(int a1, unsigned int a2, unsigned int a3)
{
  int v3; 
  int result; 

  v3 = sub_1008EE9(a1, a2, 0);
  if ( v3 && *(v3 + 4) == 524288 )
    result = sub_10094BE(*(v3 + 12), a3);
  else
    result = 0;
  return result;
}

//----- (01009756) --------------------------------------------------------
 int  sub_1009756(int a1, unsigned int a2, unsigned int a3)
{
  int v3; 
   int result; 

  v3 = sub_1008EE9(a1, a2, 0);
  if ( v3 && *(v3 + 4) == 524288 )
    result = sub_10094ED(*(v3 + 12), a3);
  else
    result = 0;
  return result;
}

//----- (0100978D) --------------------------------------------------------
 int  sub_100978D(int a1, int a2, void lpString2, int a4)
{
  int v4; 
  int v5; 
   int v6; 
  int v8; 
  int v9; 
  void *v10; 
  void *v11; 
  void *v12; 

  v4 = sub_1008EE9(a1, a2, 0);
  v5 = v4;
  if ( !v4 || (v6 = *(v4 + 4), v6 != 131072) && v6 )
    return 0;
  v8 = a4;
  if ( !a4 )
    v8 = lstrlenW(lpString2);
  v9 = v8 + 1;
  if ( *(v5 + 4) )
  {
    if ( *(v5 + 8) < (unsigned int)(2 * v9) )
    {
      v11 = *(void **)(v5 + 12);
      *(v5 + 8) = 2 * v9;
      v12 = realloc(v11, 2 * v9);
      *(v5 + 12) = v12;
      if ( !v12 )
        return 0;
    }
  }
  else
  {
    v10 = calloc(v9, 2u);
    *(v5 + 12) = v10;
    if ( !v10 )
      return 0;
    *(v5 + 4) = 131072;
    *(v5 + 8) = 2 * v9;
  }
  lstrcpynW(*(void *)(v5 + 12), lpString2, v9);
  return 1;
}

//----- (01009830) --------------------------------------------------------
 int  sub_1009830(int a1, unsigned int a2, int a3)
{
  int v3; 
  int v4; 
   int v5; 
  void *v7; 

  v3 = sub_1008EE9(a1, a2, 0);
  v4 = v3;
  if ( !v3 )
    return 0;
  v5 = *(v3 + 4);
  if ( v5 == 262144 )
  {
    if ( v5 )
      goto LABEL_9;
  }
  else
  {
    if ( v5 )
      return 0;
  }
  v7 = calloc(1u, 4u);
  *(v4 + 12) = v7;
  if ( !v7 )
    return 0;
  *(v4 + 4) = 262144;
  *(v4 + 8) = 4;
LABEL_9:
  **(void **)(v4 + 12) = a3;
  return 1;
}

//----- (01009897) --------------------------------------------------------
 int  sub_1009897(int a1, int a2, int a3, void lpString2, int a5)
{
  int v5; 
   int result; 

  v5 = sub_1008EE9(a1, a2, 0);
  if ( v5 && *(v5 + 4) == 524288 )
    result = sub_100978D(*(v5 + 12), a3, lpString2, a5);
  else
    result = 0;
  return result;
}

//----- (010098D4) --------------------------------------------------------
 int  sub_10098D4(int a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; 
   int result; 

  v4 = sub_1008EE9(a1, a2, 0);
  if ( v4 && *(v4 + 4) == 524288 )
    result = sub_1009830(*(v4 + 12), a3, a4);
  else
    result = 0;
  return result;
}

//----- (0100990E) --------------------------------------------------------
int  sub_100990E(int a1, void Str2, int a3, void MaxCount)
{
  return sub_1009021(a1, 131072, Str2, a3, MaxCount);
}

//----- (01009932) --------------------------------------------------------
 int  sub_1009932(void lpString2)
{
   int result; 
  const char *v2; 
  int v3; 
  char *v4; 
   int v5; 
  char *v6; 
  int Str; 
   int v8; 
  int v9; 
  char v10; 
  int v11; 
  void v12[4]; 

  Str = 0;
  v8 = 0;
  v9 = dword_100D048;
  memset(&v10, 0, 0x1F8u);
  v11 = 0;
  if ( lpString2 )
  {
    lstrcpyW((char *)&Str, lpString2);
    v4 = wcstok((char *)&Str, L".");
    v2 = v4;
    if ( v4 )
    {
      while ( sub_1007750(v2, 10, 0) )
      {
        v3 = sub_1007629(v2, 10);
        if ( v3 < 0 )
          break;
        if ( v3 >= 255 )
          break;
        v5 = v8++;
        v12[v5] = v3;
        v6 = wcstok(0, L".");
        v2 = v6;
        if ( !v6 )
        {
          if ( v8 != 4 )
            goto LABEL_9;
          return 1;
        }
      }
    }
    else
    {
LABEL_9:
      SetLastError(0x254Fu);
      sub_10073CA();
    }
    result = 0;
  }
  else
  {
    SetLastError(0x254Fu);
    sub_10073CA();
    result = 0;
  }
  return result;
}

//----- (01009A23) --------------------------------------------------------
 int  sub_1009A23(void lpString2)
{
  const char *v1; 
   int result; 
  void *v3; 
  char *v4; 
   int v5; 
  int v6; 
  int v7; 
  const char String[28]; 
  char *Memory; 
  int v10; 

  v1 = lpString2;
  v7 = dword_100D048;
  if ( lpString2 && lstrlenW(lpString2) && sub_1009932(v1) != 1 )
  {
    v6 = lstrlenW(v1);
    v3 = calloc(v6 + 5, 2u);
    Memory = (char *)v3;
    if ( v3 )
    {
      lstrcpyW((void)v3, v1);
      v10 = 0;
      if ( lstrlenW(String) <= 0 )
      {
LABEL_10:
        lstrcpyW(Memory, v1);
        v4 = wcstok(Memory, L".");
        v5 = 0;
        if ( !v4 )
          v4 = (char *)v1;
        if ( *v4 == 45 || sub_1007750(v4, 10, 0) != 1 )
        {
          v5 = 1;
        }
        else
        {
          SetLastError(0x4BAu);
          sub_10073CA();
        }
      }
      else
      {
        while ( !wcschr(Memory, String[v10]) )
        {
          ++v10;
          if ( v10 >= lstrlenW(String) )
            goto LABEL_10;
        }
        SetLastError(0x35u);
        sub_10073CA();
        v5 = 0;
      }
      free(Memory);
      result = v5;
    }
    else
    {
      SetLastError(0x8007000Eu);
      sub_10073CA();
      result = 0;
    }
  }
  else
  {
    result = 1;
  }
  return result;
}

//----- (01009B4F) --------------------------------------------------------
 int  sub_1009B4F(void lpWideCharStr, int a2, int a3)
{
  const char *v3; 
  void *v5; 
  const char *v6; 
  int v7; 
  void v8; 
  char **v9; 
  const char *v10; 
  int v11; 
  int v12; 
  unsigned int v13; 
  struct hostent *v14; 
  unsigned int addr; 
  int v16; 
  int v17; 
  struct WSAData WSAData; 

  addr = 0;
  v16 = dword_100D048;
  v3 = lpWideCharStr;
  v17 = a2;
  if ( !dword_100DCD8 )
  {
    if ( WSAStartup(0x202u, &WSAData) )
    {
      v11 = WSAGetLastError();
      SetLastError(v11);
      return 0;
    }
    dword_100DCD8 = 1;
  }
  v12 = lstrlenW(v3);
  v7 = v12;
  v5 = calloc(v12 + 5, 1u);
  v6 = (const char *)v5;
  if ( !v5 )
  {
    v8 = -2147024882;
LABEL_7:
    SetLastError(v8);
    sub_10073CA();
    return 0;
  }
  sub_10074AA(v3, (char)v5, v7);
  v13 = inet_addr(&v6 );
  addr = v13;
  if ( v13 == -1 )
  {
    free((void *)v6);
    v8 = -2147286787;
    goto LABEL_7;
  }
  v14 = gethostbyaddr((const char *)&addr, 4, 2);
  v9 = (char **)v14;
  if ( !v14 )
    return 0;
  free((void *)v6);
  v10 = *v9;
  if ( !a3 )
    v10 = strtok(*v9, L".");
  sub_1007555(v10, (void)v17, 15);
  return 1;
}

//----- (01009C6B) --------------------------------------------------------
void  sub_1009C6B(void Str1)
{
  return sub_1007B40(Str1, L"\\\\", 1, 2u) == 0;
}

//----- (01009C8F) --------------------------------------------------------
 int  sub_1009C8F(void lpWideCharStr)
{
  const char *v1; 
   int result; 
  int *v3; 
  int v4; 
  void v5; 
  int v6; 
  int Str1; 
  char v8; 
  int v9; 
  void nSize; 
  char v11; 

  v1 = lpWideCharStr;
  v6 = dword_100D048;
  Str1 = 0;
  memset(&v8, 0, 0xFCu);
  v9 = 0;
  nSize = 0;
  memset(&v11, 0, 0xFCu);
  if ( lpWideCharStr
    && lstrlenW(lpWideCharStr)
    && (nSize = 128, GetComputerNameExW(ComputerNamePhysicalNetBIOS, (char *)&Str1, &nSize), sub_1007B40(
                                                                                                (const char *)&Str1,
                                                                                                v1,
                                                                                                1,
                                                                                                0)) )
  {
    if ( sub_1009932(v1) == 1 )
    {
      result = sub_1009B4F(v1, (int)&v9, 0);
      if ( !result )
        return result;
      v5 = 0;
      v4 = 1;
      v3 = &v9;
    }
    else
    {
      nSize = 128;
      GetComputerNameExW(ComputerNamePhysicalDnsFullyQualified, (char *)&Str1, &nSize);
      v5 = 0;
      v4 = 1;
      v3 = (int *)v1;
    }
    result = sub_1007B40((const char *)&Str1, (void)v3, v4, v5) == 0;
  }
  else
  {
    result = 1;
  }
  return result;
}

//----- (01009D95) --------------------------------------------------------
int  sub_1009D95(void Str1)
{
  const char *v1; 
  void *v3; 
  char *v4; 
  int v5; 
  int v6; 
  void v7; 
  void Buffer; 

  Buffer = 0;
  v1 = Str1;
  if ( !Str1 )
    return 0;
  v6 = lstrlenW(Str1);
  v3 = calloc(v6 + 5, 2u);
  v4 = (char *)v3;
  if ( !v3 )
  {
    SetLastError(0x8007000Eu);
    sub_10073CA();
    return 0;
  }
  lstrcpyW((void)v3, v1);
  if ( lstrlenW(v1) )
  {
    if ( !sub_1009C6B(v1) )
      wsprintfW(v4, L"\\\\%s", v1);
  }
  v7 = NetServerGetInfo(v4, 0x65u, &Buffer);
  free(v4);
  if ( v7 )
    return 0;
  v5 = 0;
  if ( *(Buffer + 17) & 0x10 )
    v5 = *(Buffer + 3) + 1000 * (*(Buffer + 2) & 0xF);
  NetApiBufferFree(Buffer);
  return v5;
}

//----- (01009E54) --------------------------------------------------------
void  sub_1009E54(void Str1, int a2, int a3)
{
  int v3; 
  void v4; 
  char *v5; 
  void v6; 
  void v7; 
  int v9; 
  int String1; 
  char v11; 
  int Name; 
  void fForce; 
  char v14; 

  v3 = a2;
  v4 = Str1;
  v9 = dword_100D048;
  String1 = 0;
  memset(&v11, 0, 0x1FCu);
  Name = 0;
  fForce = 0;
  memset(&v14, 0, 0x1FCu);
  if ( !Str1 || !lstrlenW(Str1) )
    return 0;
  lstrcpyW((char *)&String1, v4);
  if ( sub_1009C6B(v4) == 1 )
    lstrcpyW((char *)&String1, v4 + 2);
  if ( a3 & 0x10 )
  {
    v5 = L"IPC$";
  }
  else
  {
    if ( a3 & 0x20 )
    {
      v5 = L"ADMIN$";
    }
    else
    {
      if ( a3 & 0x40 )
      {
        v5 = L"C$";
      }
      else
      {
        if ( (char)a3 >= 0 )
        {
          if ( !(char1(a3) & 1) || !v3 )
          {
            wsprintfW((char *)&Name, L"\\\\%s", &String1);
            goto LABEL_18;
          }
          v5 = (char *)v3;
        }
        else
        {
          v5 = L"D$";
        }
      }
    }
  }
  wsprintfW((char *)&Name, L"\\\\%s\\%s", &String1, v5);
LABEL_18:
  if ( char3(a3) & 0x10 )
    fForce = 1;
  v6 = WNetCancelConnection2W((const char *)&Name, 0, fForce);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 == 1208 )
      sub_1007421();
    else
      sub_10073CA();
  }
  else
  {
    v7 = 0;
    sub_1007143(&word_10012CC);
  }
  return v7;
}

//----- (01009FB4) --------------------------------------------------------
void  sub_1009FB4(void Str1)
{
  return sub_1009E54(Str1, 0, 268435472);
}

//----- (01009FD1) --------------------------------------------------------
void  sub_1009FD1(void lpWideCharStr, int a2, int a3, int a4)
{
  void v4; 
  void result; 
  void v6; 
   int v7; 
  const char *v8; 
  const char *v9; 
  int v10; 
  void lpUserName; 
  void lpPassword; 
  int v13; 
  int v14; 
  char v15; 
  int v16; 
  int String2; 
  char v18; 
  int v19; 
  struct _NETRESOURCEW NetResource; 

  v10 = dword_100D048;
  v4 = lpWideCharStr;
  lpUserName = (void)a2;
  lpPassword = (void)a3;
  v13 = a4;
  v14 = 0;
  memset(&v15, 0, 0x1F8u);
  v16 = 0;
  String2 = 0;
  memset(&v18, 0, 0x1F8u);
  v19 = 0;
  if ( sub_1009C8F(lpWideCharStr) == 1 )
  {
    if ( lpUserName && lstrlenW(lpUserName) )
    {
      SetLastError(0xA0010001u);
      v8 = sub_10080FF(0x157Eu);
      sub_1007143(v8);
      result = -1610547199;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    lstrcpyW((char *)&String2, v4);
    if ( sub_1009C6B(v4) == 1 )
      lstrcpyW((char *)&String2, v4 + 2);
    if ( sub_1009A23((const char *)&String2) )
    {
      lstrcpyW((char *)&v14, &word_10012CC);
      if ( v13 && lstrlenW((void)v13) )
        wsprintfW((char *)&v14, L"\\\\%s\\%s", &String2, v13);
      else
        wsprintfW((char *)&v14, L"\\\\%s", &String2);
      memset(&NetResource, 0, sizeof(NetResource));
      NetResource.lpRemoteName = (void)&v14;
      NetResource.dwType = 0;
      NetResource.lpProvider = 0;
      NetResource.lpLocalName = 0;
      v6 = WNetAddConnection2W(&NetResource, lpPassword, lpUserName, 0);
      v7 = v6;
      if ( v6 )
      {
        if ( v6 == 1208 )
          sub_1007421();
        else
          sub_10073CA();
      }
      else
      {
        v7 = 0;
        sub_1007143(&word_10012CC);
        if ( (unsigned int)sub_1009D95((const char *)&String2) < 0x1388 )
        {
          sub_1009FB4((const char *)&String2);
          v9 = sub_10080FF(0x157Fu);
          sub_1007143(v9);
          v7 = 1208;
        }
      }
      result = v7;
    }
    else
    {
      result = GetLastError();
    }
  }
  return result;
}

//----- (0100A1DA) --------------------------------------------------------
void  sub_100A1DA(void lpWideCharStr, int a2, int a3)
{
  return sub_1009FD1(lpWideCharStr, a2, a3, (int)L"IPC$");
}

//----- (0100A1FB) --------------------------------------------------------
 int  sub_100A1FB(int a1, void lpNameBuffer, long nSize, int a4, int a5, int a6)
{
  const char *v6; 
  int v7; 
   int v8; 
  void v9; 
   int v10; 
  void v12; 
  const char *v13; 
  int v14; 
  void v15; 
  const char *v16; 
  int v17; 
  void lpWideCharStr; 
  void lpString1; 
  int String; 
  char v21; 
  void NumberOfCharsWritten; 
  int v23; 
   int v24; 

  v6 = lpNameBuffer;
  v17 = dword_100D048;
  lpWideCharStr = (void)a1;
  lpString1 = (void)a4;
  String = 0;
  memset(&v21, 0, 0x1F8u);
  NumberOfCharsWritten = 0;
  v23 = 0;
  SetLastError(0);
  if ( a6 == 1 && lpString1 && !lstrcmpW(lpString1, L"*") )
    goto LABEL_24;
  v24 = 0;
  v7 = lstrlenW(v6);
  if ( v7 )
  {
    v8 = sub_100A1DA(lpWideCharStr, (int)v6, (unsigned int)lpString1 & -(a6 == 0));
    if ( !a6 )
      v24 = 1;
  }
  else
  {
    v24 = 1;
    v8 = sub_100A1DA(lpWideCharStr, v7, v7);
  }
  if ( v8 )
  {
    v10 = 1219;
    if ( (unsigned int)v8 > 0x4C3 )
    {
      if ( (unsigned int)v8 < 0x4CF )
        return 0;
      if ( (unsigned int)v8 <= 0x4D1 )
        goto LABEL_17;
      if ( v8 != 1326 )
      {
LABEL_33:
        if ( v8 == -1610547199 )
        {
          SetLastError(0xA0010001u);
          v16 = sub_10080FF(0x157Eu);
          sub_1007143(v16);
          return 1;
        }
        return 0;
      }
    }
    else
    {
      if ( v8 == 1219 )
        goto LABEL_36;
      if ( v8 == 52 )
      {
LABEL_17:
        SetLastError(0x4C6u);
        sub_10073CA();
        SetLastError(v8);
        return 0;
      }
      if ( v8 != 86 )
      {
        if ( v8 == 1214 )
          goto LABEL_17;
        return 0;
      }
    }
    if ( !a6 )
      return 0;
LABEL_24:
    if ( !lstrlenW(v6) && !GetUserNameExW(NameSamCompatible, (void)v6, &nSize) )
    {
      sub_10073CA();
      return 0;
    }
    v13 = sub_10080FF(0x157Du);
    wsprintfW((char *)&String, v13, v6);
    v14 = lstrlenW((const char *)&String);
    v15 = GetStdHandle(0xFFFFFFF4u);
    WriteConsoleW(v15, &String, v14, &NumberOfCharsWritten, 0);
    sub_1007863((int)lpString1, 64);
    v12 = sub_100A1DA(lpWideCharStr, (int)v6, (int)lpString1);
    v8 = v12;
    if ( !v12 )
      return 1;
    if ( v12 == 52 || v12 == 1214 )
      goto LABEL_17;
    v10 = 1219;
    if ( v8 != 1219 )
    {
      if ( (unsigned int)v8 <= 0x4CE )
        return 0;
      if ( (unsigned int)v8 <= 0x4D1 )
        goto LABEL_17;
      goto LABEL_33;
    }
LABEL_36:
    v9 = v10;
    goto LABEL_11;
  }
  if ( v24 == 1 )
  {
    v9 = 1342242817;
LABEL_11:
    SetLastError(v9);
  }
  return 1;
}

//----- (0100A444) --------------------------------------------------------
 int  sub_100A444(int a1, int a2, int a3)
{
   int result; 
  int v4; 
  int v5; 

  result = 0;
  if ( a2 )
  {
    v4 = a1;
    v5 = a3;
    do
    {
      if ( !*(char *)v5 )
        break;
      *(char *)v4 = *(char *)v5;
      v4 += 2;
      v5 += 2;
    }
    while ( a2-- != 1 );
    if ( !a2 )
    {
      v4 -= 2;
      result = -2147024774;
    }
    *(char *)v4 = 0;
  }
  else
  {
    result = -2147024809;
  }
  return result;
}

//----- (0100A48D) --------------------------------------------------------
void  sub_100A48D(int a1, void lpString1, void lpString2, void a4, void lpWideCharStr)
{
  void *v5; 
  int v6; 
  void *v7; 
  int v8; 
  int v9; 
  void v10; 
  const char *v11; 
  void v12; 
  void *lpString; 

  lstrcpyW(lpString1, &word_10012CC);
  v6 = (int)lpString2;
  v10 = (void)((char *)lpString2 + 5);
  v12 = sub_1008ECB(a1);
  lpString2 = (void)calloc((void)((char *)lpString2 + 5), 2u);
  v5 = calloc(v10, 2u);
  v7 = v5;
  lpString = v5;
  if ( lpString2 )
  {
    if ( v5 )
    {
      v8 = 0;
      if ( v12 )
      {
        do
        {
          sub_100962A(a1, v8, (void)lpString, v6);
          v11 = sub_1007E09((void)lpString, 1);
          wsprintfW(lpString2, a4, v11);
          lstrcatW(lpString1, lpString2);
          v9 = v6 - sub_10070B4(lpString2);
          ++v8;
          if ( v8 >= (unsigned int)v12 )
            break;
          if ( v9 < (unsigned int)sub_10070B4(lpWideCharStr) )
            break;
          lstrcatW(lpString1, lpWideCharStr);
          v6 = v9 - sub_10070B4(lpWideCharStr);
        }
        while ( v8 < (unsigned int)v12 );
      }
      free(lpString2);
      free(lpString);
      return;
    }
    free(lpString2);
  }
  if ( v7 )
    free(v7);
}

//----- (0100A585) --------------------------------------------------------
void  sub_100A585(int a1, void lpString2, void lpWideCharStr, int a4)
{
  const char *v4; 
  const char *v5; 
  int v6; 
  int v7; 
  const char *v8; 
  int v9; 
  char *v10; 
  void *v11; 
  int v12; 
  const char *v13; 
  int v14; 
  int v15; 

  v4 = lpString2;
  v5 = 0;
  if ( lpString2 && a4 && a1 )
  {
    v6 = sub_10070B4(lpString2);
    if ( v6 < (unsigned int)a4 )
      v6 = a4;
    v11 = calloc(v6 + 5, 2u);
    lpString2 = (void)v11;
    if ( v11 )
    {
      v15 = 0;
      if ( lpWideCharStr )
        v15 = sub_10070B4(lpWideCharStr);
      v7 = 0;
      while ( lpWideCharStr != v5 )
      {
        v8 = sub_10071F0(v4, (int)lpWideCharStr, v7);
        if ( v8 == v5 )
          break;
        v12 = v15 - sub_10070B4(v8);
        v9 = sub_10070B4(v4) + v12;
        if ( v9 >= (unsigned int)a4 )
        {
          if ( !v7 || v9 == a4 )
          {
LABEL_17:
            v7 = a4;
            goto LABEL_18;
          }
          goto LABEL_18;
        }
        v7 = v9;
        v5 = 0;
      }
      if ( v7 == (void)v5 || sub_10070B4(v4) - v7 > (unsigned int)a4 )
        goto LABEL_17;
      if ( sub_10070B4(v4) <= a4 )
        v7 = sub_10070B4(v4);
LABEL_18:
      v13 = lpString2;
      lstrcpynW(lpString2, v4, v7 + 1);
      sub_1007FD1(v14, v13, a4, 0);
      sub_1007C8B(a1, v13);
      lstrcpyW((void)v13, v4);
      if ( sub_10070B4(v4) <= v7 )
        v10 = (char *)&word_10012D0;
      else
        v10 = &lpString2[v7];
      lstrcpyW((void)v4, v10);
      free(lpString2);
    }
    else
    {
      SetLastError(0x8007000Eu);
      sub_10073CA();
      lstrcpyW((void)v4, &word_10012CC);
    }
  }
}

//----- (0100A6C7) --------------------------------------------------------
const char * sub_100A6C7(int a1, int a2, int a3, void lpString1, int a5)
{
  int v5; 
  int v6; 
  int v7; 
  const char *result; 
  const char *v9; 
  int ( *v10)(void, void, void, void); 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  const char *v17; 
  const char *v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  const char *v25; 
  int v26; 
  int v27; 
  int v28; 
  void Time; 
  char v30; 
  void lpString; 
  char v32; 

  v26 = 0;
  v27 = dword_100D048;
  v6 = a1;
  v7 = a3;
  v28 = a5;
  Time.wYear = 0;
  memset(&v30, 0, 0x7Cu);
  *&Time.wMonth = 0;
  *&Time.wDay = 0;
  *&Time.wMinute = 0;
  Time.wMilliseconds = 0;
  lpString = lpString1;
  lstrcpyW(lpString1, &word_10012CC);
  v5 = *(v6 + 516);
  if ( (v5 & 0xFF0) == 16 )
  {
    if ( char1(v5) & 0x20 )
      v19 = v6 + 520;
    else
      v19 = (int)L"%s";
    sub_100A444((int)&v26, 64, v19);
    v14 = a2;
    v13 = v7;
    if ( *(v6 + 517) & 0x40 )
    {
LABEL_38:
      result = (const char *)sub_1009485(v13, v14);
      if ( !result )
        return result;
      v17 = (const char *)v28;
      goto LABEL_32;
    }
    result = (const char *)sub_10094BE(v7, a2);
    if ( !result )
      return result;
    v18 = sub_1007E09(result, 1);
LABEL_42:
    wsprintfW(lpString, (const char *)&v26, v18);
    goto LABEL_43;
  }
  if ( (v5 & 0xFF0) == 32 )
  {
    if ( char1(v5) & 0x20 )
      v16 = v6 + 520;
    else
      v16 = (int)L"%d";
    sub_100A444((int)&v26, 64, v16);
    if ( *(v6 + 517) & 0x40 )
    {
      result = (const char *)sub_1009485(v7, a2);
      if ( !result )
        return result;
      v17 = L", ";
LABEL_32:
      sub_100A48D((int)result, lpString, *(void *)(v6 + 512), (const char *)&v26, v17);
      goto LABEL_43;
    }
    v18 = (const char *)sub_10094ED(v7, a2);
    goto LABEL_42;
  }
  v20 = (v5 & 0xFF0) - 48;
  if ( !v20 )
  {
    if ( char1(v5) & 0x20 )
      v15 = v6 + 520;
    else
      v15 = (int)L"%f";
    sub_100A444((int)&v26, 64, v15);
    v14 = a2;
    v13 = v7;
    if ( !(*(v6 + 517) & 0x40) )
    {
      sub_1009529(v7, a2);
      goto LABEL_20;
    }
    goto LABEL_38;
  }
  v21 = (v5 & 0xFF0) - 64;
  if ( !v21 )
  {
    if ( char1(v5) & 0x20 )
      v12 = v6 + 520;
    else
      v12 = (int)L"%f";
    sub_100A444((int)&v26, 64, v12);
    v14 = a2;
    v13 = v7;
    if ( !(*(v6 + 517) & 0x40) )
    {
      sub_100955E(v7, a2);
LABEL_20:
      
      wsprintfW(lpString, (const char *)&v26, v24, *(&v24 + 1));
      goto LABEL_43;
    }
    goto LABEL_38;
  }
  v22 = (v5 & 0xFF0) - 96;
  if ( v22 )
  {
    result = (const char *)((v5 & 0xFF0) - 128);
    if ( !result )
    {
      v10 = *(int ( **)(void, void, void, void))(v6 + 652);
      if ( !v10 )
        return result;
      v11 = *(v6 + 656);
      if ( !v11 )
        v11 = v6;
      v10(a2, v7, v11, lpString);
      goto LABEL_43;
    }
    v9 = &word_10012CC;
    goto LABEL_8;
  }
  v23 = sub_1009593((int)&v32, v7, a2);
  *&Time.wYear = *v23;
  *&Time.wDayOfWeek = *(v23 + 4);
  *&Time.wHour = *(v23 + 8);
  *&Time.wSecond = *(v23 + 12);
  if ( !GetTimeFormatW(0x400u, 0x80000000u, &Time, 0, lpString, 254) )
  {
    sub_10073CA();
    v9 = sub_100711F();
LABEL_8:
    lstrcpyW(lpString, v9);
  }
LABEL_43:
  result = (const char *)lstrlenW(lpString);
  if ( !result )
  {
    if ( *(v6 + 518) & 0x10 )
    {
      v25 = sub_10080FF(0x138Du);
      result = lstrcpyW(lpString, v25);
    }
  }
  return result;
}

//----- (0100A992) --------------------------------------------------------
void  sub_100A992(int a1, unsigned int a2, int a3, int a4, int a5)
{
  int v5; 
   int v6; 
  unsigned int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
   int v12; 
  unsigned int v13; 
  int v14; 
  int v15; 
  int v16; 
   int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  void v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  const char *v31; 
  int v32; 
  int v33; 
  int v34; 
  const char *v35; 
  void v36; 
  int v37; 
  const char *v38; 
  int WideCharStr; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  char v44; 
  int v45; 
  unsigned int v46; 
  void v47; 
  int v48; 
   int v49; 
  int v50; 
  unsigned int v51; 

  WideCharStr = 0;
  v40 = dword_100D048;
  v41 = a1;
  v5 = a3;
  v42 = a5;
  v43 = a3;
  memset(&v44, 0, 0x1FFCu);
  v33 = (int)sub_1008E1E();
  v45 = v33;
  if ( v33 )
  {
    if ( !(HIchar(a4) & 0x10) )
    {
      v7 = a2;
      v6 = 0;
      if ( a2 )
      {
        v8 = v5 + 516;
        do
        {
          v9 = *v8;
          if ( !(char1(v9) & 0x10) )
          {
            v10 = 0;
            if ( v9 & 0x10000 || (v11 = v9 & 0xFF0, v11 == 32) || v11 == 48 || v11 == 64 )
              v10 = 1;
            if ( v6 == 1 )
              sub_1007C8B(v41, L" ");
            wsprintfW((char *)&WideCharStr, L"%s", v8 - 516);
            sub_1007FD1(v34, (const char *)&WideCharStr, *(v8 - 4), v10);
            sub_1007C8B(v41, (const char *)&WideCharStr);
            v6 = 1;
          }
          v8 += 660;
          --v7;
        }
        while ( v7 );
      }
      sub_1007C8B(v41, L"\n");
      v13 = a2;
      v12 = 0;
      if ( a2 )
      {
        v14 = v43 + 512;
        do
        {
          if ( !(*(v14 + 5) & 0x10) )
          {
            if ( v12 == 1 )
              sub_1007C8B(v41, L" ");
            v35 = sub_10070D7((char *)&WideCharStr, L"=", *v14);
            sub_1007C8B(v41, v35);
            v12 = 1;
          }
          v14 += 660;
          --v13;
        }
        while ( v13 );
      }
      sub_1007C8B(v41, L"\n");
    }
    v36 = sub_1008ECB(v42);
    v46 = 0;
    v47 = v36;
    if ( v36 )
    {
      do
      {
        lstrcpyW((char *)&WideCharStr, &word_10012CC);
        v37 = sub_1009485(v42, v46);
        v48 = v37;
        if ( v37 )
        {
          v49 = 0;
          v50 = 0;
          if ( a2 )
          {
            v15 = v43 + 512;
            do
            {
              v16 = *(v15 + 4);
              v17 = 0;
              v51 = 0;
              if ( !(v16 & 0x1000) )
              {
                if ( v16 & 0x88000 )
                {
                  v17 = 1;
                  v51 = *v15;
                  *v15 = 4096;
                }
                sub_100A6C7(v15 - 512, v50, v48, (char *)&WideCharStr, (int)L", ");
                v18 = 0;
                if ( !v17 )
                {
                  v19 = *(v15 + 4);
                  if ( v19 & 0x10000 || (v20 = v19 & 0xFF0, v20 == 32) || v20 == 48 || v20 == 64 )
                    v18 = 1;
                  sub_1007FD1(v18, (const char *)&WideCharStr, *v15, v18);
                }
                if ( v17 == 1 )
                  *v15 = v51;
                if ( v49 == 1 )
                  sub_1007C8B(v41, L" ");
                if ( *(v15 + 5) & 0x80 )
                {
                  sub_100A585(v41, (char *)&WideCharStr, L", ", *v15);
                  if ( sub_10070B4((const char *)&WideCharStr) )
                  {
                    v22 = sub_100933B(v21, v45, 3u);
                    v23 = v22;
                    if ( v22 != -1 )
                    {
                      sub_10098D4(v45, v22, 0, v50);
                      sub_1009897(v45, v23, 2, (const char *)&WideCharStr, 0);
                      sub_1009897(v45, v23, 1, L", ", 0);
                    }
                  }
                }
                else
                {
                  sub_1007C8B(v41, (const char *)&WideCharStr);
                }
                v49 = 1;
              }
              ++v50;
              v15 += 660;
            }
            while ( v50 < a2 );
          }
          sub_1007C8B(v41, L"\n");
          v24 = sub_1008ECB(v45);
          v51 = v24;
          while ( v24 )
          {
            v49 = 0;
            v50 = 0;
            v25 = -1;
            if ( v24 )
            {
              while ( 1 )
              {
                v27 = sub_1009756(v45, v50, 0);
                v26 = v25 + 1;
                if ( v25 + 1 < (unsigned int)v27 )
                {
                  v29 = 660 * v26 + v43 + 512;
                  v28 = v27 - v26;
                  do
                  {
                    if ( !(*(v29 + 5) & 0x10) )
                    {
                      if ( v49 == 1 )
                        sub_1007C8B(v41, L" ");
                      v38 = sub_10070D7((char *)&WideCharStr, L" ", *v29);
                      sub_1007C8B(v41, v38);
                      v49 = 1;
                    }
                    v29 += 660;
                    --v28;
                  }
                  while ( v28 );
                }
                v48 = v27;
                if ( v49 == 1 )
                  sub_1007C8B(v41, L" ");
                v32 = sub_100971F(v45, v50, 2u);
                v30 = sub_100971F(v45, v50, 1u);
                v31 = (const char *)v30;
                if ( v32 )
                {
                  if ( v30 )
                  {
                    lstrcpynW((char *)&WideCharStr, (void)v32, 4096);
                    sub_100A585(v41, (char *)&WideCharStr, v31, *(660 * v27 + v43 + 512));
                    if ( sub_10070B4((const char *)&WideCharStr) )
                    {
                      sub_1009897(v45, v50, 2, (const char *)&WideCharStr, 0);
                    }
                    else
                    {
                      sub_100942A(v45, v50--);
                      --v51;
                    }
                  }
                }
                ++v50;
                if ( v50 >= v51 )
                  break;
                v25 = v48;
              }
            }
            sub_1007C8B(v41, L"\n");
            v24 = v51;
          }
        }
        ++v46;
      }
      while ( v46 < v47 );
    }
    sub_1008E92((int)&v45);
  }
  else
  {
    SetLastError(0x8007000Eu);
    sub_10073CA();
  }
}

//----- (0100AF0D) --------------------------------------------------------
void  sub_100AF0D(int a1, int a2, void lpWideCharStr, int a4, int a5)
{
  void v5; 
  int v6; 
  const char *v7; 
  void result; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  char *v15; 
  char *v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int String1; 
  char v22; 
  int Buffer; 
  char v24; 
  void v25; 
  int v26; 
  unsigned int v27; 
  unsigned int v28; 
  int v29; 
  int v30; 
  void lpBuffer; 

  v5 = lpWideCharStr;
  v18 = dword_100D048;
  v19 = a1;
  v20 = a5;
  String1 = 0;
  memset(&v22, 0, 0x7Cu);
  Buffer = 0;
  memset(&v24, 0, 0x1FFCu);
  v6 = a2;
  v25 = lpWideCharStr;
  v26 = 0;
  if ( (unsigned int)a2 > 0 )
  {
    v7 = lpWideCharStr;
    do
    {
      if ( v26 < (unsigned int)sub_10070B4(v7) )
        v26 = sub_10070B4(v7);
      v7 += 330;
      --v6;
    }
    while ( v6 );
  }
  result = sub_1008ECB(v20);
  v27 = 0;
  v28 = result;
  if ( result )
  {
    do
    {
      v10 = sub_1009485(v20, v27);
      v29 = v10;
      if ( v10 )
      {
        v30 = 0;
        if ( a2 )
        {
          v9 = (int)(v5 + 256);
          do
          {
            lstrcpyW((char *)&Buffer, &word_10012CC);
            if ( !(*(v9 + 5) & 0x10) )
            {
              wsprintfW((char *)&Buffer, L"%s:", v9 - 512);
              sub_1007FD1(v11, (const char *)&Buffer, v26 + 2, 0);
              sub_1007C8B(v19, (const char *)&Buffer);
              v12 = *v9;
              v13 = v29;
              v14 = v30;
              *v9 = 4096;
              sub_100A6C7(v9 - 512, v14, v13, (char *)&Buffer, (int)L"\n");
              *v9 = v12;
              v15 = wcstok((char *)&Buffer, L"\n");
              lpBuffer = v15;
              if ( v15 )
              {
                while ( 1 )
                {
                  sub_1007C8B(v19, lpBuffer);
                  v16 = wcstok(0, L"\n");
                  lpBuffer = v16;
                  if ( !v16 )
                    break;
                  wsprintfW((char *)&String1, L"%s", L" ");
                  sub_1007FD1(v17, (const char *)&String1, v26 + 2, 0);
                  sub_1007C8B(v19, L"\n");
                  sub_1007C8B(v19, (const char *)&String1);
                }
              }
              sub_1007C8B(v19, L"\n");
              v5 = v25;
            }
            ++v30;
            v9 += 660;
          }
          while ( v30 < (unsigned int)a2 );
        }
        if ( v27 + 1 < v28 )
          sub_1007C8B(v19, L"\n");
      }
      ++v27;
      result = v27;
    }
    while ( v27 < v28 );
  }
  return result;
}

//----- (0100B184) --------------------------------------------------------
void  sub_100B184(int a1, unsigned int a2, int a3, int a4, int a5)
{
   int v5; 
  int v6; 
  int v7; 
  void result; 
  int v9; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  char v15; 
  int Buffer; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  char v21; 
  unsigned int v22; 
  void v23; 
  int v24; 
   int v25; 
  int v26; 

  Buffer = 0;
  v17 = dword_100D048;
  v6 = a1;
  v18 = a5;
  v5 = 0;
  v19 = a1;
  v20 = a3;
  memset(&v21, 0, 0x1FFCu);
  if ( !(a4 & 0x1000) )
  {
    if ( a2 )
    {
      v7 = a3;
      v22 = a2;
      do
      {
        if ( !(*(v7 + 516) & 0x1000) )
        {
          if ( v5 == 1 )
            sub_1007C8B(v6, L",");
          wsprintfW((char *)&Buffer, L"\"%s\"", v7);
          sub_1007C8B(v6, (const char *)&Buffer);
          v5 = 1;
        }
        v7 += 660;
      }
      while ( v22-- != 1 );
    }
    sub_1007C8B(v6, L"\n");
  }
  result = sub_1008ECB(v18);
  v22 = 0;
  v23 = result;
  if ( result )
  {
    do
    {
      v11 = sub_1009485(v18, v22);
      v24 = v11;
      if ( v11 )
      {
        v25 = 0;
        v26 = 0;
        if ( a2 > 0 )
        {
          v9 = v20 + 512;
          do
          {
            lstrcpyW((char *)&Buffer, &word_10012CC);
            if ( !(*(v9 + 4) & 0x1000) )
            {
              v12 = *v9;
              v13 = v24;
              v14 = v26;
              *v9 = 4096;
              sub_100A6C7(v9 - 512, v14, v13, (char *)&Buffer, (int)L",");
              v15 = v25 == 1;
              *v9 = v12;
              if ( v15 )
                sub_1007C8B(v19, L",");
              sub_1007C8B(v19, L"\"");
              sub_1007C8B(v19, (const char *)&Buffer);
              sub_1007C8B(v19, L"\"");
              v25 = 1;
            }
            ++v26;
            v9 += 660;
          }
          while ( v26 < a2 );
          v6 = v19;
        }
        sub_1007C8B(v6, L"\n");
      }
      ++v22;
      result = v22;
    }
    while ( v22 < v23 );
  }
  return result;
}

//----- (0100B38C) --------------------------------------------------------
int  sub_100B38C(void *File, int a2, void lpWideCharStr, int a4, int a5)
{
  void *v5; 

  v5 = File;
  switch ( a4 & 0xF )
  {
    case 1:
      sub_100AF0D((int)File, a2, lpWideCharStr, a4, a5);
      break;
    case 2:
      sub_100A992((int)File, a2, (int)lpWideCharStr, a4, a5);
      break;
    case 3:
      sub_100B184((int)File, a2, (int)lpWideCharStr, a4, a5);
      break;
  }
  return fflush(v5);
}

//----- (0100B3EC) --------------------------------------------------------
int  sub_100B3EC(int a1, void lpWideCharStr, int a3, int a4)
{
  return sub_100B38C((void *)iob[0] + 1, a1, lpWideCharStr, a3, a4);
}

