/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

typedef struct in_addr {
	unsigned s_addr;
} in_addr;

typedef struct sockaddr_in {
	unsigned char sin_len;
	unsigned char sin_family;
	unsigned short sin_port;
	in_addr sin_addr;
	BOOL sin_zero[8];
} sockaddr_in;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	int field1;
	char* field2;
	int field3;
	unsigned field4;
} SCD_Struct_GC4;

typedef struct opaqueRTCReporting* opaqueRTCReportingRef;

typedef struct _NSZone* NSZoneRef;

typedef struct OpaqueGCKSession* OpaqueGCKSessionRef;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	BOOL __opaque[40];
} opaque_pthread_mutex_t;

typedef struct opaque_pthread_cond_t {
	long __sig;
	BOOL __opaque[24];
} opaque_pthread_cond_t;

typedef struct opaque_pthread_rwlock_t {
	long __sig;
	BOOL __opaque[124];
} opaque_pthread_rwlock_t;

typedef struct OpaqueAGPSession* OpaqueAGPSessionRef;

typedef struct _DNSServiceRef_t* DNSServiceRef_tRef;

typedef struct tagIPPORT {
	int iFlags;
	BOOL szIfName[16];
	/*function pointer*/ void* IP;
	unsigned dwIPv4;
	unsigned char abIPv6[16];
	unsigned short wPort;
} tagIPPORT;

typedef struct tagCONNRESULT {
	unsigned dwCallID;
	int iResultCount;
	int iRole;
	unsigned dwRemoteCallID;
	int proto;
	int bIfRelay;
	unsigned short wRelayServType;
	unsigned short wChannelNumber;
	tagIPPORT mbLocal;
	tagIPPORT mbRemote;
	tagIPPORT mbSrc;
	tagIPPORT mbDst;
	tagIPPORT mbRemoteSrc;
	tagIPPORT mbRelayExt;
	unsigned dwRTT;
	int bIfLocalCellularQoS;
	int bIfRemoteCellularQoS;
	int iLocalCellTech;
	int iRemoteCellTech;
	unsigned dwCellularUniqueTag;
	unsigned short wCellularMTU;
	int bIfUpgrade;
	tagCONNRESULT next;
} tagCONNRESULT;
