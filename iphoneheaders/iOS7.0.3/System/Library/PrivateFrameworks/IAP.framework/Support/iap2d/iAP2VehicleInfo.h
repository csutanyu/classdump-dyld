/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface iAP2VehicleInfo : NSObject {

	unsigned paramCountArr[3];
	NSNumber* componentID;
	NSString* componentName;
	unsigned long long engineTypeBitmask;

}

@property (retain) NSNumber * componentID; 
@property (retain) NSString * componentName; 
@property (assign) unsigned long long engineTypeBitmask; 
-(unsigned)paramCount:(int)arg1 ;
-(id)componentID;
-(void)incrementParamCount:(int)arg1 ;
-(void)setComponentName:(id)arg1 ;
-(void)setComponentID:(id)arg1 ;
-(BOOL)isVehicleInfoSupported:(int)arg1 ;
-(void)addEngineTypeBitmask:(int)arg1 ;
-(unsigned long long)engineTypeBitmask;
-(void)setEngineTypeBitmask:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)componentName;
@end

