/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/MSASModelBase.h>

@interface MSPerformanceLogger : MSASModelBase
+(id)sharedLogger;
+(void)nukeCompletionBlock:(/*^block*/ id)arg1 ;
-(id)init;
-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2 ;
-(void)stopOperation:(id)arg1 itemGUID:(id)arg2 ;
-(void)discardOperation:(id)arg1 itemGUID:(id)arg2 ;
-(void)startOperation:(id)arg1 itemGUID:(id)arg2 ;
-(void)summarizeOperation:(id)arg1 itemGUID:(id)arg2 formatBlock:(/*^block*/ id)arg3 ;
-(void)_logSqliteErrorLine:(int)arg1 ;
-(void)dbQueueDiscardOperation:(id)arg1 itemGUID:(id)arg2 ;
@end

