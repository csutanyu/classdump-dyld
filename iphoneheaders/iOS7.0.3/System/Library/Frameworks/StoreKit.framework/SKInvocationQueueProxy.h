/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, Protocol;

@interface SKInvocationQueueProxy : NSObject {

	NSMutableArray* _invocationQueue;
	id _invocationTarget;
	Protocol* _protocol;

}

@property (nonatomic,retain) id invocationTarget;              //@synthesize invocationTarget=_invocationTarget - In the implementation block
-(id)initWithProtocol:(id)arg1 ;
-(void)setInvocationTarget:(id)arg1 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)invocationTarget;
-(void)forwardInvocation:(id)arg1 ;
@end

