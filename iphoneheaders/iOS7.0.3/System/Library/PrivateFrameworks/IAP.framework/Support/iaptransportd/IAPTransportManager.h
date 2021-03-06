/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iaptransportd/iaptransportd-Structs.h>
@class NSNumber;

@interface IAPTransportManager : NSObject {

	unsigned _service;
	IONotificationPortRef _notificationPortRef;
	unsigned _notification;
	NSNumber* _portNumber;
	int _accResistorID;

}

@property (nonatomic,readonly) unsigned service;                   //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSNumber * portNumber;              //@synthesize portNumber=_portNumber - In the implementation block
@property (nonatomic,readonly) int accResistorID;                  //@synthesize accResistorID=_accResistorID - In the implementation block
-(id)initWithService:(unsigned)arg1 andNotificationPort:(IONotificationPortRef)arg2 ;
-(int)accResistorID;
-(void)_setAccResistorID:(int)arg1 ;
-(unsigned)service;
-(void)dealloc;
-(id)portNumber;
@end

