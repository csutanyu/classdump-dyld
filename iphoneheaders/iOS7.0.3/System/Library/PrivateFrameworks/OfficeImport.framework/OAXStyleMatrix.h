/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXStyleMatrix : NSObject
+(void)readFromNode:(xmlNode*)arg1 toStyleMatrix:(id)arg2 packagePart:(id)arg3 drawingState:(id)arg4 ;
+(BOOL)readReferenceFromParentNode:(xmlNode*)arg1 name:(const char*)arg2 inNamespace:(id)arg3 color:(id*)arg4 index:(unsigned*)arg5 ;
+(id)readReferenceFromNode:(xmlNode*)arg1 ;
@end
