/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXCell : NSObject
+(int)edCellTypeFromXmlCellElement:(xmlNode*)arg1 stringIndex:(bool*)arg2 ;
+(bool)edBoolFromXmlBoolString:(id)arg1 ;
+(int)edErrorFromXmlErrorString:(id)arg1 ;
+(void)edCellFromXmlCellElement:(xmlNode*)arg1 edRowInfo:(EDRowInfo*)arg2 edRowBlock:(id)arg3 edRowBlocks:(id)arg4 state:(id)arg5 ;
@end
