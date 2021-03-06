/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureInputPortInternal, AVCaptureInput, NSString;

@interface AVCaptureInputPort : NSObject {

	AVCaptureInputPortInternal* _internal;

}

@property (nonatomic,readonly) AVCaptureInput * input; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef formatDescription; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) OpaqueCMClockRef clock; 
+(id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 enabled:(BOOL)arg4 ;
+(BOOL)automaticallyNotifiesObserversOfClock;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(void)_setClock:(OpaqueCMClockRef)arg1 ;
-(OpaqueCMClockRef)clock;
-(void)_setFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 enabled:(BOOL)arg4 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)input;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)mediaType;
-(void)setOwner:(id)arg1 ;
@end

