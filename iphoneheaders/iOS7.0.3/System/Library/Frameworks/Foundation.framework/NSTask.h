/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSTask : NSObject

@property (copy) id terminationHandler; 
+(id)currentTaskDictionary;
+(id)launchedTaskWithDictionary:(id)arg1 ;
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(id)currentDirectoryPath;
-(void)setArguments:(id)arg1 ;
-(int)terminationStatus;
-(int)terminationReason;
-(void)launch;
-(void)setCurrentDirectoryPath:(id)arg1 ;
-(void)setEnvironment:(id)arg1 ;
-(void)setLaunchPath:(id)arg1 ;
-(void)interrupt;
-(void)terminate;
-(int)suspendCount;
-(id)launchPath;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardOutput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(id)standardInput;
-(id)standardOutput;
-(id)standardError;
-(id)init;
-(id)environment;
-(BOOL)suspend;
-(id)arguments;
-(BOOL)resume;
-(BOOL)isRunning;
-(void)setTerminationHandler:(/*^block*/ id)arg1 ;
-(int)processIdentifier;
-(/*^block*/ id)terminationHandler;
@end

