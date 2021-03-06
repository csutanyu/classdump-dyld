/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol CAMAvalancheSessionDelegate, OS_dispatch_source, OS_dispatch_queue;
#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class NSString, PLManagedAsset, NSDate, NSObject, CIBurstImageSet;

@interface CAMAvalancheSession : NSObject {

	int _type;
	<CAMAvalancheSessionDelegate>* _delegate;
	int _state;
	NSString* _uuid;
	unsigned _numberOfPhotos;
	PLManagedAsset* _possibleAvalancheAsset;
	NSDate* __expirationDate;
	NSObject<OS_dispatch_source>* __expirationTimer;
	NSObject<OS_dispatch_queue>* __expirationQueue;
	CIBurstImageSet* __burstImageSet;

}

@property (nonatomic,readonly) int type;                                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) <CAMAvalancheSessionDelegate> * delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int state;                                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * uuid;                                                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned numberOfPhotos;                                        //@synthesize numberOfPhotos=_numberOfPhotos - In the implementation block
@property (nonatomic,retain) PLManagedAsset * possibleAvalancheAsset;                          //@synthesize possibleAvalancheAsset=_possibleAvalancheAsset - In the implementation block
@property (setter=_setExpirationDate:,nonatomic,retain) NSDate * _expirationDate;              //@synthesize _expirationDate=__expirationDate - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_source> * _expirationTimer;                //@synthesize _expirationTimer=__expirationTimer - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * _expirationQueue;                 //@synthesize _expirationQueue=__expirationQueue - In the implementation block
@property (nonatomic,readonly) CIBurstImageSet * _burstImageSet;                               //@synthesize _burstImageSet=__burstImageSet - In the implementation block
-(void)_setUUID:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(int)state;
-(int)type;
-(id)initWithType:(int)arg1 ;
-(void)_setState:(int)arg1 ;
-(unsigned)numberOfPhotos;
-(void)_setupExpirationTimer;
-(void)finalizeWithAnalysis:(BOOL)arg1 ;
-(void)_teardownExpirationTimer;
-(void)_setExpirationDate:(id)arg1 ;
-(id)allAssetIdentifiers;
-(id)bestAssetIndentifiers;
-(id)stackAssetIdentifier;
-(id)possibleAvalancheAsset;
-(void)_transitionToState:(int)arg1 ;
-(void)_expirationTimerFired;
-(void)_setPossibleAvalancheAsset:(id)arg1 ;
-(id)_burstImageSet;
-(BOOL)_ensureValidStateChange:(int)arg1 ;
-(void)_didTransitionToState:(int)arg1 ;
-(BOOL)extend;
-(void)addAssetForAnalysis:(id)arg1 withIOSurface:(IOSurfaceRef)arg2 metadata:(id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(id)_expirationDate;
-(id)_expirationTimer;
-(id)_expirationQueue;
-(id)uuid;
@end

