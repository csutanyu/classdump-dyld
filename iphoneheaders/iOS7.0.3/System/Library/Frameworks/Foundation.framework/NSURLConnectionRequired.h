/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLConnectionRequired <NSObject>
@optional
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
-(void)_setDelegateQueue:(id)arg1;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
-(void)_suspendLoading;
-(void)_resumeLoading;
-(void)_setShouldSkipCancelOnRelease:(bool)arg1;
-(void)cancel;
-(void)start;
@end

