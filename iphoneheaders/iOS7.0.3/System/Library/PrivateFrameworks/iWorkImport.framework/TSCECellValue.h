/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCECellValue : NSObject {

	int mValueType;

}

@property (nonatomic,readonly) int valueType; 
-(SCD_Struct_TS52*)formatStruct;
-(BOOL)isEqualToCellValue:(id)arg1 ;
-(id)initCellValueWithArchive:(const CellValueArchive*)arg1 ;
-(void)encodeCellValueToArchive:(CellValueArchive*)arg1 ;
-(void)dealloc;
-(id)displayString;
-(int)valueType;
@end

