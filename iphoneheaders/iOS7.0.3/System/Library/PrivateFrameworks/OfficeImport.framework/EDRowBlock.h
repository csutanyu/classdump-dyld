/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EDRowBlock : NSObject {

	CFDataRef mPackedData;
	CFDataRef mCellOffsets;

}
+(id)rowBlock;
-(void)dealloc;
-(id)init;
-(unsigned)index;
-(void)setIndex:(unsigned)arg1 ;
-(unsigned)rowCount;
-(EDCellHeader*)cellAtIndex:(unsigned)arg1 rowInfo:(EDRowInfo*)arg2 ;
-(EDCellHeader*)cellWithColumnNumber:(unsigned)arg1 rowInfo:(EDRowInfo*)arg2 ;
-(EDRowInfo*)rowInfoWithRowNumber:(unsigned)arg1 ;
-(EDCellHeader*)addCellWithColumnNumber:(unsigned)arg1 type:(int)arg2 isFormulaCell:(bool)arg3 rowInfo:(EDRowInfo*)arg4 rowBlocks:(id)arg5 ;
-(EDRowInfo*)addRowInfoWithRowNumber:(unsigned)arg1 cellCountHint:(unsigned)arg2 ;
-(EDRowInfo*)rowInfoAtIndex:(unsigned)arg1 ;
-(void)unarchiveFromData:(CFDataRef)arg1 offset:(unsigned*)arg2 ;
-(void)archiveByAppendingToMutableData:(CFDataRef)arg1 ;
-(unsigned)indexOfRowInfoWithRowNumber:(unsigned)arg1 ;
-(unsigned)expectedIndexOfCellWithColumnNumber:(unsigned)arg1 rowInfo:(EDRowInfo*)arg2 ;
-(void)doneWithContent;
-(EDRowInfo*)rowInfoWithRowNumber:(unsigned)arg1 createIfNil:(bool)arg2 ;
-(unsigned)indexOfCellWithColumnNumber:(unsigned)arg1 rowInfo:(EDRowInfo*)arg2 ;
-(void)removeCellAtIndex:(unsigned)arg1 rowInfo:(EDRowInfo*)arg2 ;
-(unsigned long)startOfCellsOrThrow;
-(unsigned)firstRowNumber;
-(unsigned)lastRowNumber;
-(void)checkCellOffsetOrThrow:(unsigned long)arg1 ;
-(void)incrementIndex;
@end

