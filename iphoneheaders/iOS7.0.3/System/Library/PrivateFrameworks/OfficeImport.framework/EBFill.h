/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBFill : NSObject
+(id)edFillFromXlXf:(XlXf*)arg1 edResources:(id)arg2 ;
+(id)edFillFromXlDXf:(XlDXf*)arg1 edResources:(id)arg2 ;
+(int)convertXlFillPatternEnumToED:(int)arg1 ;
+(int)convertEDPatternFillEnumToXl:(int)arg1 ;
+(bool)extractFromEDFill:(id)arg1 foreColorReference:(id*)arg2 backColorReference:(id*)arg3 fillPatternEnum:(int*)arg4 ;
@end

