
extern char aTextPlain[11]; 
extern char a_htm[5]; 
extern char aTextHtml[10]; 
extern char a_jpg[5]; 
extern char a_jpeg[6]; 
extern char aImageJpeg[11]; 
extern char a_gif[5]; 
extern char aImageGif[10]; 
extern char a_png[5]; 
extern char aImagePng[10]; 
extern char a_css[5]; 
extern char aTextCss[9]; 
extern char aAudioBasic[12]; 
extern char a_wav[5]; 
extern char aAudioWav[10]; 
extern char a_avi[5]; 
extern char aVideoXMsvideo[16]; 
extern char a_mov[5]; 
extern char aVideoQuicktime[16]; 
extern char a_mpeg[6]; 
extern char a_mpe[5]; 
extern char aVideoMpeg[11]; 
extern char a_vrml[6]; 
extern char a_wrl[5]; 
extern char aModelVrml[11]; 
extern char a_midi[6]; 
extern char a_mid[5]; 
extern char aAudioMidi[11]; 
extern char a_mp3[5]; 
extern char aAudioMpeg[11]; 
extern char a_pac[5]; 
extern char aApplicationXNs[34]; 
extern char format[]; 
extern char aBadFilename_[14]; 
extern char aBadRequest[12]; 
extern char needle[]; 
extern char aIllegalFilenam[18]; 
extern char s2[]; 
extern char aS_0[]; 
extern char aIndex[]; 
extern char a_html[6]; 
extern char modes[]; 
extern char aOk[3]; 
extern char aC[]; 
extern char aFileIsProtecte[19]; 
extern char aForbidden[10]; 
extern char aCanTStatFile[16]; 
extern char aHttp1_1[9]; 
extern char aSDS[]; 
extern char aDateS[]; 
extern char aAtphttpd0_4[13]; 
extern char aServerS[]; 
extern char aContentType[]; 
extern char aS[]; 
extern char aContentLengthL[]; 
extern char aConnectionClos[]; 
extern char s[]; 
extern char aHtmlHeadTitleD[]; 
extern char aTheFollowingEr[]; 
extern char aHttpWww_redshi[46]; 
extern char aHrAddressThisC[]; 
extern char aBind[]; 
extern char aSocket[]; 
extern char aConnectingToSO[]; 
extern char aConnect[8]; 
extern char proto[]; 
extern char aTcp[]; 
extern char aMake_connectio[44]; 
extern char aMake_connect_0[40]; 
extern char asc_804A604[]; 
extern char aHead[]; 
extern char path[]; 
extern char aUsageSPort[]; 
extern char aCacheContents[]; 
extern char aDFileSHitsDLen[]; 
extern char fmt[]; 
extern char aReloading_Sign[]; 
extern int _JCR_LIST__; 
extern void *_gmon_main___ptr; 
extern void *stderr; 
extern void *cache; 
extern char hc[401660]; 
extern int highsock; 
extern int sock; 
extern int socks; 
extern char Signals[12]; 




//----- (08048C94) --------------------------------------------------------
void * call_gmon_main(int a1)
{
  void *result; 
  int v2; 

  v2 = a1;
  result = _gmon_main___ptr;
  if ( _gmon_main___ptr )
    result = (void *)((int ( *)(int))_gmon_main___ptr)(v2);
  return result;
}

//----- (08048CF4) --------------------------------------------------------
int  frame_dummy()
{
  int result; 

  result = _JCR_LIST__;
  if ( _JCR_LIST__ )
    result = 0;
  return result;
}

//----- (08048D20) --------------------------------------------------------
char * get_mime_type(char *s)
{
  unsigned int v1; 
  unsigned int v2; 
  char *v3; 
  char *v4; 
  char *v5; 
   int v6; 
  char *v7; 
  char *v8; 
   int v9; 
  char *v10; 
  char *v11; 
   int v13; 
  char *v14; 
  char *v15; 
   int v16; 
  char *v17; 
  char *v18; 
   int v19; 
  char *v20; 
  char *v21; 
  unsigned int v22; 
  unsigned int v23; 
   int v24; 
  char *v25; 
  char *v26; 
  char v27; 
  unsigned int v28; 
   int v29; 
  char *v30; 
  char *v31; 
  unsigned int v32; 
  unsigned int v33; 
   int v34; 
  char *v35; 
  char *v36; 
  char v37; 
  unsigned int v38; 
   int v39; 
  char *v40; 
  char *v41; 
  char v42; 
   int v43; 
  char *v44; 
  char *v45; 
  unsigned int v46; 
  unsigned int v47; 
   int v48; 
  char *v49; 
  char *v50; 
   int v51; 
  char *v52; 
  char *v53; 
   int v54; 
  char *v55; 
  char *v56; 
   int v57; 
  char *v58; 
  char *v59; 
   int v60; 
  char *v61; 
  char *v62; 
   int v63; 
  char *v64; 
  char *v65; 
   int v66; 
  char *v67; 
  char *v68; 
  char v69; 
  unsigned int v70; 
   int v71; 
  char *v72; 
  char *v73; 
  unsigned int v74; 
  unsigned int v75; 
  unsigned int v76; 
  unsigned int v77; 
  unsigned int v78; 
  unsigned int v79; 
  char v80; 
  unsigned int v81; 
  unsigned int v82; 
  char v83; 

  v3 = strrchr(s, 46);
  v1 = 0;
  v2 = v3 == 0;
  v5 = v3;
  v4 = "text/plain";
  if ( v3 )
  {
    v8 = v3;
    v7 = ".html";
    v6 = 6;
    do
    {
      if ( !v6 )
        break;
      v1 = *v8 < (unsigned int)*v7;
      v2 = *v8++ == *v7++;
      --v6;
    }
    while ( v2 );
    if ( v2 )
      goto LABEL_111;
    v11 = v3;
    v10 = ".htm";
    v9 = 5;
    do
    {
      if ( !v9 )
        break;
      v1 = *v11 < (unsigned int)*v10;
      v2 = *v11++ == *v10++;
      --v9;
    }
    while ( v2 );
    if ( v2 )
    {
LABEL_111:
      v4 = "text/html";
    }
    else
    {
      v15 = v3;
      v14 = ".jpg";
      v13 = 5;
      do
      {
        if ( !v13 )
          break;
        v1 = *v15 < (unsigned int)*v14;
        v2 = *v15++ == *v14++;
        --v13;
      }
      while ( v2 );
      if ( v2 )
        goto LABEL_112;
      v18 = v3;
      v17 = ".jpeg";
      v16 = 6;
      do
      {
        if ( !v16 )
          break;
        v1 = *v18 < (unsigned int)*v17;
        v2 = *v18++ == *v17++;
        --v16;
      }
      while ( v2 );
      if ( v2 )
      {
LABEL_112:
        v4 = "image/jpeg";
      }
      else
      {
        v21 = v3;
        v19 = 5;
        v20 = ".gif";
        do
        {
          if ( !v19 )
            break;
          v1 = *v21 < (unsigned int)*v20;
          v2 = *v21++ == *v20++;
          --v19;
        }
        while ( v2 );
        v74 = !(v1 | v2);
        v75 = v1;
        v22 = v74 < v1;
        v23 = v74 == v75;
        v4 = "image/gif";
        if ( v74 != v75 )
        {
          v24 = 5;
          v26 = v5;
          v25 = ".png";
          do
          {
            if ( !v24 )
              break;
            v22 = *v26 < (unsigned int)*v25;
            v23 = *v26++ == *v25++;
            --v24;
          }
          while ( v23 );
          v76 = !(v22 | v23);
          v77 = v22;
          v27 = v76 < v22;
          v28 = v76 == v77;
          v4 = "image/png";
          if ( v76 != v77 )
          {
            v29 = 5;
            v31 = v5;
            v30 = ".css";
            do
            {
              if ( !v29 )
                break;
              v27 = *v31 < (unsigned int)*v30;
              v28 = *v31++ == *v30++;
              --v29;
            }
            while ( v28 );
            v4 = "text/css";
            if ( !(v27 | v28) != v27 )
            {
              v32 = (unsigned int)*v5 < 0x2Eu;
              v33 = *v5 == 46;
              v83 = *v5;
              if ( !v33
                || (v32 = (unsigned int)*(v5 + 1) < 0x61u, v33 = *(v5 + 1) == 97, *(v5 + 1) != 97)
                || (v32 = (unsigned int)*(v5 + 2) < 0x75u, v33 = *(v5 + 2) == 117, *(v5 + 2) != 117)
                || (v32 = 0, v33 = *(v5 + 3) == 0, *(v5 + 3)) )
              {
                v34 = 5;
                v36 = v5;
                v35 = ".wav";
                do
                {
                  if ( !v34 )
                    break;
                  v32 = *v36 < (unsigned int)*v35;
                  v33 = *v36++ == *v35++;
                  --v34;
                }
                while ( v33 );
                v78 = !(v32 | v33);
                v79 = v32;
                v37 = v78 < v32;
                v38 = v78 == v79;
                v4 = "audio/wav";
                if ( v78 != v79 )
                {
                  v39 = 5;
                  v41 = v5;
                  v40 = ".avi";
                  do
                  {
                    if ( !v39 )
                      break;
                    v37 = *v41 < (unsigned int)*v40;
                    v38 = *v41++ == *v40++;
                    --v39;
                  }
                  while ( v38 );
                  v80 = !(v37 | v38);
                  v42 = v80 == v37;
                  v4 = "video/x-msvideo";
                  if ( v80 != v37 )
                  {
                    v45 = v5;
                    v44 = ".mov";
                    v43 = 5;
                    do
                    {
                      if ( !v43 )
                        break;
                      v42 = *v45++ == *v44++;
                      --v43;
                    }
                    while ( v42 );
                    if ( !v42
                      && ((v46 = (unsigned int)v83 < 0x2Eu, v47 = v83 == 46, v83 != 46)
                       || (v46 = (unsigned int)*(v5 + 1) < 0x71u, v47 = *(v5 + 1) == 113, *(v5 + 1) != 113)
                       || (v46 = (unsigned int)*(v5 + 2) < 0x74u, v47 = *(v5 + 2) == 116, *(v5 + 2) != 116)
                       || (v46 = 0, v47 = *(v5 + 3) == 0, *(v5 + 3))) )
                    {
                      v50 = v5;
                      v49 = ".mpeg";
                      v48 = 6;
                      do
                      {
                        if ( !v48 )
                          break;
                        v46 = *v50 < (unsigned int)*v49;
                        v47 = *v50++ == *v49++;
                        --v48;
                      }
                      while ( v47 );
                      if ( v47 )
                        goto LABEL_113;
                      v53 = v5;
                      v52 = ".mpe";
                      v51 = 5;
                      do
                      {
                        if ( !v51 )
                          break;
                        v46 = *v53 < (unsigned int)*v52;
                        v47 = *v53++ == *v52++;
                        --v51;
                      }
                      while ( v47 );
                      if ( v47 )
                      {
LABEL_113:
                        v4 = "video/mpeg";
                      }
                      else
                      {
                        v56 = v5;
                        v55 = ".vrml";
                        v54 = 6;
                        do
                        {
                          if ( !v54 )
                            break;
                          v46 = *v56 < (unsigned int)*v55;
                          v47 = *v56++ == *v55++;
                          --v54;
                        }
                        while ( v47 );
                        if ( v47 )
                          goto LABEL_114;
                        v59 = v5;
                        v58 = ".wrl";
                        v57 = 5;
                        do
                        {
                          if ( !v57 )
                            break;
                          v46 = *v59 < (unsigned int)*v58;
                          v47 = *v59++ == *v58++;
                          --v57;
                        }
                        while ( v47 );
                        if ( v47 )
                        {
LABEL_114:
                          v4 = "model/vrml";
                        }
                        else
                        {
                          v62 = v5;
                          v61 = ".midi";
                          v60 = 6;
                          do
                          {
                            if ( !v60 )
                              break;
                            v46 = *v62 < (unsigned int)*v61;
                            v47 = *v62++ == *v61++;
                            --v60;
                          }
                          while ( v47 );
                          if ( v47 )
                            goto LABEL_115;
                          v65 = v5;
                          v64 = ".mid";
                          v63 = 5;
                          do
                          {
                            if ( !v63 )
                              break;
                            v46 = *v65 < (unsigned int)*v64;
                            v47 = *v65++ == *v64++;
                            --v63;
                          }
                          while ( v47 );
                          if ( v47 )
                          {
LABEL_115:
                            v4 = "audio/midi";
                          }
                          else
                          {
                            v66 = 5;
                            v68 = v5;
                            v67 = ".mp3";
                            do
                            {
                              if ( !v66 )
                                break;
                              v46 = *v68 < (unsigned int)*v67;
                              v47 = *v68++ == *v67++;
                              --v66;
                            }
                            while ( v47 );
                            v81 = !(v46 | v47);
                            v82 = v46;
                            v69 = v81 < v46;
                            v70 = v81 == v82;
                            v4 = "audio/mpeg";
                            if ( v81 != v82 )
                            {
                              v71 = 5;
                              v73 = v5;
                              v72 = ".pac";
                              do
                              {
                                if ( !v71 )
                                  break;
                                v69 = *v73 < (unsigned int)*v72;
                                v70 = *v73++ == *v72++;
                                --v71;
                              }
                              while ( v70 );
                              v4 = "application/x-ns-proxy-autoconfig";
                              if ( !(v69 | v70) != v69 )
                                v4 = "text/plain";
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v4 = "video/quicktime";
                    }
                  }
                }
              }
              else
              {
                v4 = "audio/basic";
              }
            }
          }
        }
      }
    }
  }
  return v4;
}

//----- (08048F68) --------------------------------------------------------
 int  http_handler(int a1, int a2)
{
  char *v2; 
  int v3; 
  char v5; 
  char v6; 
   int v7; 
  int v8; 
  char *v9; 
  int v10; 
  int v11; 
  char *v12; 
  struct stat *v13; 
  int v14; 
  char *v15; 
  struct tm *v16; 
  void timer; 
  char s; 
  int v19; 

  timer = time(0);
  v16 = gmtime(&timer);
  strftime(&s, 0x64u, "%a, %d %b %Y %H:%M:%S GMT", v16);
  if ( hc[4228 * a2 + 3084] != 47 )
  {
    v3 = a2;
    v2 = "Bad filename.";
LABEL_3:
    http_send_error(400, "Bad Request", 0, v2, v3);
    return 1;
  }
  *&hc[4228 * a2 + 2056] = 4228 * a2 + 134632109;
  v5 = hc[4228 * a2 + 3085];
  if ( v5 == 47 )
    goto LABEL_29;
  if ( v5 == 46 && hc[4228 * a2 + 3086] == 46 && !hc[4228 * a2 + 3087] )
    goto LABEL_29;
  v6 = 1057 * a2 == 0;
  v8 = *&hc[4228 * a2 + 2056];
  v10 = *&hc[4228 * a2 + 2056];
  v9 = &needle[1];
  v7 = 3;
  do
  {
    if ( !v7 )
      break;
    v6 = *v10++ == *v9++;
    --v7;
  }
  while ( v6 );
  if ( v6
    || strstr((const char *)v8, "/../")
    || *(v8 + 1) == 47 && *(char *)(v8 + 2) == 46 && *(char *)(v8 + 3) == 46 && !*(char *)(v8 + 4) )
  {
LABEL_29:
    v3 = a2;
    v2 = "Illegal filename.";
    goto LABEL_3;
  }
  v19 = v11;
  v13 = (struct stat *)(4228 * a2 + 134633152);
  v14 = 4228 * a2 + 134629032;
  v12 = &hc[4228 * a2];
  *&hc[4228 * a2 + 4216] = __xstat(
                                       3,
                                       *(const char **)&hc[4228 * a2 + 2056],
                                       (struct stat *)(4228 * a2 + 134633152));
  if ( (unsigned int)(*(v12 + 1036) & 0xF000) == 16384 )
  {
    v19 = *(v12 + 1036) & 0xF000;
    sprintf(*(char **)(v14 + 2048), "%s", *(v14 + 2048));
    *(v14 + 4208) = __xstat(3, *(const char **)(v14 + 2048), v13);
  }
  v15 = *(char **)(v14 + 2048);
  if ( !*v15 )
  {
    sprintf(v15, "index");
    *(v14 + 4208) = __xstat(3, *(const char **)(v14 + 2048), v13);
  }
  if ( !strcasecmp(v12, "get") )
    http_send_file(a2, timer);
  return 0;
}

//----- (08049168) --------------------------------------------------------
int  cache_free(int a1)
{
  int v2; 
  int v3; 

  v2 = a1;
  v3 = 1036 * a1;
  free(*(&cache + 259 * a1));
  memset((void *)(v3 + 134525420), 0, 0x400u);
  *(v3 + 134525412) = -1;
  *(v3 + 134525416) = 0;
  return v2;
}

//----- (080491C4) --------------------------------------------------------
 int  cache_find_hole()
{
   int v0; 
  int v1; 
   int v2; 

  v1 = 0;
  v0 = 134525412;
  while ( *v0 != -1 )
  {
    ++v1;
    v0 += 1036;
    if ( v1 > 99 )
    {
      v1 = 0;
      v2 = 134525416;
      while ( *v2 <= 50 )
      {
        ++v1;
        v2 += 1036;
        if ( v1 > 99 )
          return -1;
      }
      cache_free(v1);
      return v1;
    }
  }
  return v1;
}

//----- (08049210) --------------------------------------------------------
int  http_send_file(int a1, int a2)
{
  int v2; 
  int v3; 
  const char *v4; 
   int v5; 
  int v7; 
   int v8; 
  int v9; 
  char *v10; 
   int v11; 
  char *v12; 
  char *v13; 
  char *v14; 
  int v15; 
  int v16; 
  void *v17; 
  int v18; 
  int v19; 
  char *v20; 
   int v21; 
  void v22; 
  void *v23; 
  void n; 
   int v25; 
  void *stream; 
  char v27; 

  v3 = 4228 * a1;
  v2 = 4228 * a1 + 134629032;
  v16 = *&hc[4228 * a1 + 4216];
  n = 0;
  v25 = -1;
  if ( v16 < 0 )
  {
    v15 = a1;
    v14 = *(char **)&hc[4228 * a1 + 2056];
    v13 = "Can't Stat File";
    v12 = "Can't Stat File";
    v11 = 404;
    return http_send_error(v11, v12, v13, v14, v15);
  }
  v17 = fopen(*(const char **)&hc[4228 * a1 + 2056], "r");
  stream = v17;
  if ( !v17 )
  {
    v15 = a1;
    v14 = "File is protected.";
    v13 = 0;
    v12 = "Forbidden";
    v11 = 403;
    return http_send_error(v11, v12, v13, v14, v15);
  }
  v18 = a1;
  v19 = a2;
  v20 = get_mime_type(*(char **)(v2 + 2048));
  http_send_headers(200, "Ok", 0, v20, -1, v19, v18);
  v5 = 0;
  v4 = (const char *)(&cache + 3);
  do
  {
    if ( !strcmp(*(const char **)(v3 + 134631080), v4) )
      v25 = v5;
    ++v5;
    v4 += 1036;
  }
  while ( v5 <= 99 );
  if ( v25 == -1 )
  {
    v21 = cache_find_hole();
    v8 = v21;
    v9 = 4228 * a1;
    v7 = 1036 * v21;
    v22 = *&hc[4228 * a1 + 4172];
    *(void **)((char *)&cache + 1036 * v21 + 1) = *(void **)&hc[4228 * a1 + 4172];
    v23 = calloc(v22, 4u);
    *(void **)((char *)&cache + v7) = v23;
    if ( !v23 )
      puts("Mass error.  No memory calloced");
    v10 = strcpy((char *)(v7 + 134525420), *(const char **)(v9 + 134631080));
    while ( 1 )
    {
      v10 = (char *)(fscanf(stream, "%c", &v27, v10) + 1);
      if ( !v10 )
        break;
      (v10) = v27;
      *(*(char **)((char *)&cache + v7) + n++) = v27;
    }
    write(*&hc[4228 * a1 + 4220], *(&cache + 259 * v8), n);
  }
  else
  {
    write(*&hc[4228 * a1 + 4220], *(&cache + 259 * v25), *(void *)((char *)&cache + 1036 * v25 + 1));
    *(void **)((char *)&cache + 1036 * v25 + 2) = *(char **)((char *)&cache + 1036 * v25 + 2) + 1;
  }
  return fclose(stream);
}

//----- (08049450) --------------------------------------------------------
int  http_send_headers(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; 
  int v8; 
  int v10; 
  int v11; 
  struct tm *v12; 
  char buf; 
  int v14; 
  void timer; 
  char v16; 

  v10 = a7;
  v8 = a3;
  sprintf(&buf, "%s %d %s\r\n", "HTTP/1.1", a1, a2);
  v11 = *&hc[4228 * v10 + 4220];
  v14 = 4228 * v10 + 134629036;
  sock_puts(v11, &buf);
  timer = time(0);
  v12 = gmtime(&timer);
  strftime(&v16, 0x64u, "%a, %d %b %Y %H:%M:%S GMT", v12);
  sprintf(&buf, "Date: %s\r\n", &v16);
  sock_puts(*(v14 + 4208), &buf);
  sprintf(&buf, "Server: %s\r\n", "ATPhttpd/0.4");
  sock_puts(*(v14 + 4208), &buf);
  if ( v8 )
  {
    sprintf(&buf, "%s\r\n", v8, v7);
    sock_puts(*(v14 + 4208), &buf);
  }
  if ( a4 )
  {
    sprintf(&buf, "Content-type: ", a4, a4);
    sock_puts(*(v14 + 4208), &buf);
  }
  if ( a5 >= 0 )
  {
    memset(&buf, 0, 0x320u);
    sprintf(&buf, "Content-length: %ld\r\n", a5, 0);
    sock_puts(*(v14 + 4208), &buf);
  }
  sprintf(&buf, "Connection: close\r\n");
  sock_puts(*(v14 + 4208), &buf);
  sprintf(&buf, &aContentLengthL[19]);
  return sock_puts(*(v14 + 4208), &buf);
}

//----- (08049604) --------------------------------------------------------


//----- (080496B4) --------------------------------------------------------

//----- (08049710) --------------------------------------------------------

//----- (08049754) --------------------------------------------------------
 int  get_connection(int type, int a2, int a3)
{
  int v3; 
  int v4; 
  int v5; 
   int v6; 
   int result; 
  char *v10; 
   int optval; 
  struct sockaddr addr; 

  v5 = type;
  optval = 1;
  *&addr.sa_data[6] = 0;
  *&addr.sa_data[10] = 0;
  addr.sa_family = 2;
  *(char *)&addr.sa_data[0] = a2;
  *&addr.sa_data[2] = 0;
  v3 = socket(2, type, 0);
  v6 = -1;
  v4 = v3;
  if ( v3 < 0 )
  {
    perror("socket");
    goto LABEL_22;
  }
  if ( a3 )
    *a3 = v3;
  setsockopt(v3, 1, 2, &optval, 4u);
  if ( bind(v4, &addr, 0x10u) < 0 )
  {
    v10 = "bind";
    perror(v10);
    close(v4);
LABEL_22:
    exit(1);
  }
  if ( v5 == 1 )
  {
    listen(v4, 5);
    result = v6;
  }
  else
  {
    result = v4;
  }
  return result;
}

//----- (080498B8) --------------------------------------------------------
 int  make_connection(int a1, char *nptr, int type, char *name)
{
  char *v4; 
  int v5; 
  int v6; 
  struct in_addr *v7; 
  int v8; 
  char *v10; 
  char *v11; 
  void v12; 
  void v13; 
  void *v14; 
  int v15; 
  int v16; 
  unsigned int v17; 
  int v18; 
  char *v19; 
  struct sockaddr addr; 

  v4 = nptr;
  v5 = -1;
  if ( type == 1 )
    v5 = atoport(nptr, "tcp");
  if ( type == 2 )
    v5 = atoport(v4, "udp");
  if ( v5 == -1 )
  {
    v14 = stderr;
    v13 = 39;
    v12 = 1;
    v11 = "make_connection:  Invalid socket type.\n";
    goto LABEL_15;
  }
  v6 = atoaddr(name);
  v7 = (struct in_addr *)v6;
  if ( !v6 )
  {
    v14 = stderr;
    v13 = 43;
    v12 = 1;
    v11 = "make_connection:  Invalid network address.\n";
LABEL_15:
    fwrite(v11, v12, v13, v14);
    return -1;
  }
  *&addr.sa_family = 0;
  *&addr.sa_data[2] = 0;
  *&addr.sa_data[6] = 0;
  *&addr.sa_data[10] = 0;
  v15 = *v6;
  v16 = a1;
  *(char *)&addr.sa_data[0] = v5;
  addr.sa_family = 2;
  *&addr.sa_data[2] = v15;
  v8 = socket(2, type, 0);
  v17 = __ROR__(v5, 8);
  v18 = v17;
  v19 = inet_ntoa((struct in_addr)v7->s_addr);
  printf("Connecting to %s on port %d.\n", v19, v18, v16);
  if ( type == 1 )
  {
    if ( connect(v8, &addr, 0x10u) >= 0 )
      return v8;
    v10 = "connect";
  }
  else
  {
    if ( bind(v8, &addr, 0x10u) >= 0 )
      return v8;
    v10 = "bind";
  }
  perror(v10);
  return -1;
}

//----- (08049A14) --------------------------------------------------------
int  sock_read(int fd, int a2, int a3)
{
  int v3; 
  void v4; 
  void v5; 
  int result; 
  void v7; 
  unsigned int v8; 

  v8 = 0;
  v3 = a2;
  if ( (unsigned int)a3 <= 0 )
  {
LABEL_9:
    result = a3;
  }
  else
  {
    while ( 1 )
    {
      v4 = a3 - v8;
      while ( 1 )
      {
        v7 = read(fd, (void *)v3, v4);
        v5 = v7;
        if ( v7 >= 0 )
          break;
        if ( *__errno_location() != 4 )
          return v5;
      }
      result = v8;
      if ( !v5 )
        break;
      v8 += v5;
      v3 += v5;
      if ( v8 >= a3 )
        goto LABEL_9;
    }
  }
  return result;
}

//----- (08049A7C) --------------------------------------------------------
int  sock_write(int fd, void *buf, int a3)
{
  void *v3; 
  void v4; 
  int v5; 
  int result; 
  void v7; 
  unsigned int v8; 

  v8 = 0;
  v3 = buf;
  if ( (unsigned int)a3 <= 0 )
  {
LABEL_7:
    result = a3;
  }
  else
  {
    while ( 1 )
    {
      v4 = a3 - v8;
      do
      {
        v7 = write(fd, v3, v4);
        v5 = v7;
      }
      while ( v7 < 0 && *__errno_location() == 4 );
      result = v5;
      if ( v5 <= 0 )
        break;
      v8 += v5;
      v3 = (char *)v3 + v5;
      if ( v8 >= a3 )
        goto LABEL_7;
    }
  }
  return result;
}



//----- (08049B44) --------------------------------------------------------
int  sock_puts(int fd, void *buf)
{
  return sock_write(fd, buf, strlen((const char *)buf) - 1);
}

//----- (08049B6C) --------------------------------------------------------
int  ignore_pipe()
{
   int act; 
  int v2; 
  int set; 

  act = 1;
  v2 = 0;
  sigemptyset(&set);
  return sigaction(13, (const struct sigaction *)&act, 0);
}

//----- (08049BAC) --------------------------------------------------------

//----- (08049C04) --------------------------------------------------------
int  build_select_list()
{
  int result; 
   int v1; 
  unsigned int v3; 

  _EBX = &socks;
  memset(&socks, 0, sizeof(socks));
  _EDX = sock & 0x1F;
  result = (unsigned int)sock >> 5;
  
  v1 = 134629036;
  do
  {
    v3 = *(v1 + 4208);
    if ( v3 )
    {
      _EAX = v3 & 0x1F;
      _EDX = v3 >> 5;
      
      result = *(v1 + 4208);
      if ( result > highsock )
        highsock = *(v1 + 4208);
    }
    v1 += 4228;
  }
  while ( v1 <= 135026468 );
  return result;
}

//----- (08049C70) --------------------------------------------------------

//----- (08049D1C) --------------------------------------------------------
int  deal_with_data(int a1)
{
  int v1; 
  int v2; 
  int result; 
  char s; 
  char s1; 
  char src; 
  char v7; 

  v1 = 4228 * a1;
  v2 = 4228 * a1 + 134629036;
  if ( sock_gets(*&hc[4228 * a1 + 4220], (int)&s, 800) < 0 )
    goto LABEL_5;
  sscanf(&s, "%[^ ] %[^ ] %[^ ]", &s1, &src, &v7);
  if ( !strcasecmp(&s1, "get") || (result = strcasecmp(&s1, "head"), !result) )
  {
    strcpy((char *)(v1 + 134632108), &src);
    strcpy((char *)(v1 + 134630056), &v7);
    strcpy(&hc[v1], &s1);
    http_handler((int)&s, a1);
LABEL_5:
    result = close(*(v2 + 4208));
    *(v2 + 4208) = 0;
  }
  return result;
}

//----- (08049E30) --------------------------------------------------------
char  read_socks()
{
  int v0; 
   int v1; 
  char result; 

  _EDX = (unsigned int)sock >> 5;
  _EAX = sock & 0x1F;
  
  if ( _CF )
    handle_new_connection();
  v0 = 0;
  v1 = 134633244;
  do
  {
    _EDX = *v1 >> 5;
    _EAX = *v1 & 0x1F;
    
    result = _CF;
    if ( _CF )
      result = deal_with_data(v0);
    ++v0;
    v1 += 4228;
  }
  while ( v0 <= 94 );
  return result;
}
//----- (0804A02C) --------------------------------------------------------
void  sigpipe()
{
  unsigned int v1; 
  char v2; 
  char v3; 

  v1 = __SETO__((void)Signals + 1, 4);
  v2 = (void)Signals == 3;
  v3 = (void)Signals < 3;
  *&Signals[0] = (void)Signals + 1;
  if ( (unsigned int)(v3 ^ v1) | v2 )
    syslog(3, "Error: SIGPIPE (broken pipe).  ***Ignoring***   Too many sockets in TIME_WAIT?");
}

//----- (0804A058) --------------------------------------------------------
void  sighup()
{
  int v1; 
   int v2; 
  int v3; 
   int v4; 

  v3 = *&Signals[8]++ + 1;
  syslog(3, "Reloading.  Signals: PIPE %d HUP %d", Signals, v3);
  syslog(3, "Cache contents:");
  v2 = 0;
  v1 = 0;
  do
  {
    v4 = v2++;
    syslog(
      3,
      "%d: File %s, Hits %d, Len %d",
      v4,
      v1 + 134525420,
      *(v1 + 134525416),
      *(v1 + 134525412));
    v1 += 1036;
  }
  while ( v2 <= 99 );
}

//----- (08049E9C) --------------------------------------------------------
void  main(int a1,  int a2, int a3)
{
  int v3; 
  int v4; 
   int v5; 
   int v6; 
  char *v7; 
  int v8; 
   int optval; 
  int v10; 
  struct sockaddr addr; 
  struct timeval timeout; 

  v3 = a3;
  optval = 1;
  if ( a2 <= 1 )
  {
    printf("Usage: %s PORT\r\n", *a3);
  }
  else
  {
    v10 = a1;
    v4 = socket(2, 1, 0);
    sock = v4;
    if ( v4 < 0 )
    {
      perror("socket");
    }
    else
    {
      setsockopt(v4, 1, 2, &optval, 4u);
      setnonblocking(sock);
      signal(13, (void (*)(int))sigpipe);
      signal(1, (void (*)(int))sighup);
      v6 = 134525412;
      v5 = 99;
      do
      {
        *v6 = -1;
        v6 += 1036;
        --v5;
      }
      while ( v5 >= 0 );
      chdir("../htdocs/");
      *(char *)&addr.sa_data[0] = atoport(*(char **)(v3 + 4), v7);
      *&addr.sa_data[6] = 0;
      *&addr.sa_data[10] = 0;
      addr.sa_family = 2;
      *&addr.sa_data[2] = 0;
      if ( bind(sock, &addr, 0x10u) >= 0 )
      {
        listen(sock, 95);
        highsock = sock;
        while ( 1 )
        {
          do
          {
            build_select_list();
            timeout.tv_sec = 1;
            timeout.tv_usec = 0;
            v8 = select(highsock + 1, &socks, 0, 0, &timeout);
          }
          while ( !v8 );
          if ( v8 > 0 )
            read_socks();
        }
      }
      perror("bind");
      close(sock);
    }
  }
  exit(1);
}
//----- (08049ADC) --------------------------------------------------------
 int  sock_gets(int fd, int a2, int a3)
{
  int v3; 
  unsigned int v4; 
   int v5; 
  char v6; 
  void v8; 
  char buf; 

  buf = 0;
  v3 = a2;
  v4 = 0;
  while ( 1 )
  {
    v8 = read(fd, &buf, 1u);
    v5 = -1;
    if ( v8 <= 0 )
      return v5;
    if ( v4 >= a3 )
    {
      v6 = buf;
    }
    else
    {
      v6 = buf;
      if ( buf == 10 )
        goto LABEL_8;
      if ( buf != 13 )
      {
        *v3 = buf;
        ++v4;
        ++v3;
      }
    }
    if ( v6 == 10 )
    {
LABEL_8:
      if ( a3 )
        *v3 = 0;
      return v4;
    }
  }
}

int  http_send_error(int a1, int a2, int a3, int a4, int a5)
{
  int v6; 
  int v7; 
  int v8; 
  char buf; 

  v6 = a5;
  v7 = a2;
  v8 = a1;
  http_send_headers(a1, a2, a3, (int)"text/html", -1, -1, a5);
  sprintf(&buf, "<HTML><HEAD><TITLE>%d %s</TITLE></HEAD>\n<BODY><H2>%d %s</H2>\n", v8, v7, v8, v7);
  sock_puts(*&hc[4228 * v6 + 4220], &buf);
  sprintf(&buf,"The following error occurred while trying to examine the garbage that you sent this poor webserver: <br><b>%s</b><br><br>\n");
  sock_puts(*&hc[4228 * v6 + 4220], &buf);
  sprintf(&buf,"<HR>\n<ADDRESS>This cool page was automaticly generated by the trained rodents living inside the <A HREF=\"%s\">%s</A> webserver.</ADDRESS>\n</BODY></HTML>\n","http://www.redshift.com/~yramin/atp/atphttpd/","ATPhttpd/0.4");
  sock_puts(*&hc[4228 * v6 + 4220], &buf);
  return 0;
}


