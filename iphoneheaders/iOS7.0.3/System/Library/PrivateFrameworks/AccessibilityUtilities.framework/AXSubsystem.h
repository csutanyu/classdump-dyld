/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface AXSubsystem : NSObject
+(void)initialize;
+(id)identifier;
+(BOOL)shouldProcessMessageForLogs;
+(BOOL)shouldIncludeBacktraceInLogs;
+(int)defaultLogLevel;
+(id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2 ;
+(int)effectiveLogLevel;
+(id)subsystems;
+(id)errorWithDescription:(id)arg1 ;
+(id)wrapError:(id)arg1 description:(id)arg2 ;
+(void)setPreferredLogLevel:(int)arg1 ;
+(void)resetPreferredLogLevel;
+(BOOL)willLog;
@end

