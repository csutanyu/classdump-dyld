/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ESDContainer, OADTable, OABReaderState, OABTableSortedIntArray;

@interface OABRTable : NSObject {

	ESDContainer* mSrcTable;
	OADTable* mTgtTable;
	OABReaderState* mState;
	CGPoint mScale;
	int mRowCount;
	int mColumnCount;
	OABTableSortedIntArray* mXCoords;
	OABTableSortedIntArray* mYCoords;
	OABTable2DArray<EshShape *>* mHorzLines;
	OABTable2DArray<EshShape *>* mVertLines;
	OABTable2DArray<OABTableCell>* mCells;

}
-(void)dealloc;
-(id).cxx_construct;
-(id)readStrokeFromShape:(EshShape*)arg1 ;
-(void)readAnchor;
-(void)mapScale;
-(void)readCoordinates;
-(void)readCellsAndLines;
-(void)validateTable;
-(void)createTargetTableContents;
-(id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3 ;
-(void)map;
@end

