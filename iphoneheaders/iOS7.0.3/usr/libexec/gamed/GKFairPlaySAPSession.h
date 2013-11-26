/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <gamed/gamed-Structs.h>
@class NSString;

@interface GKFairPlaySAPSession : NSObject {

	BOOL _complete;
	FairPlayHWInfo_ _hardwareInfo;
	FPSAPContextOpaque_Ref _session;
	NSString* _SAPVersion;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (setter=APVersion,retain) NSString * SAPVersion;                   //@synthesize SAPVersion=_SAPVersion - In the implementation block
-(id)signatureStringForData:(id)arg1 error:(id*)arg2 ;
-(id)signatureForData:(id)arg1 error:(id*)arg2 ;
-(id)processSignedData:(id)arg1 withSignature:(id)arg2 error:(id*)arg3 ;
-(void)setSAPVersion:(id)arg1 ;
-(id)SAPVersion;
-(void)dealloc;
-(id)init;
-(BOOL)_getHardwareInfo:(FairPlayHWInfo_*)arg1 ;
-(BOOL)isComplete;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
@end
