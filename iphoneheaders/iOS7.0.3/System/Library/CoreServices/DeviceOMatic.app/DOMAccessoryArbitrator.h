/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/DeviceOMatic.app/DeviceOMatic
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DeviceOMatic/DeviceOMatic-Structs.h>
@class NSMutableArray, NSObject;

@interface DOMAccessoryArbitrator : NSObject {

	NSMutableArray* badDevices;
	CFUserNotificationRef notificationRef;
	NSObject<OS_dispatch_queue>* mainQ;
	NSMutableArray* _personalities;
	IONotificationPortRef _ioNotificationPort;
	long long _iOSDeviceThreshold;

}

@property (nonatomic,retain) NSMutableArray * personalities;              //@synthesize personalities=_personalities - In the implementation block
@property (assign) IONotificationPortRef ioNotificationPort;              //@synthesize ioNotificationPort=_ioNotificationPort - In the implementation block
@property (readonly) long long iOSDeviceThreshold;                        //@synthesize iOSDeviceThreshold=_iOSDeviceThreshold - In the implementation block
+(id)sharedDomAccessoryArbitrator;
-(void)deviceArrived:(unsigned)arg1 ;
-(void)loadLaunchdJobsAtPath:(id)arg1 ;
-(void)addMatchJobServiceNamed:(id)arg1 info:(id)arg2 jobType:(int)arg3 ;
-(void)scanPlistsAtPath:(id)arg1 execBlock:(/*^block*/ id)arg2 ;
-(void)scheduleDialog;
-(void)displayDialog;
-(void)addBadDevicesToDialogDictBody:(id)arg1 ;
-(id)createUserNotificationDict;
-(IONotificationPortRef)ioNotificationPort;
-(void)addNotification:(id)arg1 matchJob:(id)arg2 ;
-(void)addPersonality:(id)arg1 matchJob:(id)arg2 ;
-(id)personalities;
-(void)addMatchingThings:(id)arg1 matchJob:(id)arg2 ;
-(id)jobType:(id)arg1 jobType:(int*)arg2 ;
-(void)probePersonalitiesForService:(unsigned)arg1 ofDevice:(id)arg2 inGroup:(id)arg3 ;
-(long long)iOSDeviceThreshold;
-(void)unregisterOffendingDomDevice:(id)arg1 ;
-(void)registerOffendingDomDevice:(id)arg1 ;
-(void)matchDevice:(id)arg1 ;
-(void)userDismissedNotification:(CFUserNotificationRef)arg1 ;
-(void)setPersonalities:(id)arg1 ;
-(void)setIoNotificationPort:(IONotificationPortRef)arg1 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end

