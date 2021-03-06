/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartCommand.h>

@class NSString;

@interface TSCHCommandSetCategoryName : TSCHChartCommand {

	unsigned mCategoryIndex;
	NSString* mOldName;
	NSString* mNewName;
	BOOL mIsMultiDataIndex;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithChartInfo:(id)arg1 categoryIndex:(unsigned)arg2 name:(id)arg3 ;
-(void)commitPrimitive;
-(void)undoPrimitive;
-(void)redoPrimitive;
-(const ChartCommandArchive*)chartCommandArchiveFromUnarchiver:(id)arg1 ;
-(void)p_setNameForCategoryToName:(id)arg1 ;
-(id)initWithChartInfo:(id)arg1 multiDataSetCategoryIndex:(unsigned)arg2 name:(id)arg3 ;
-(void)dealloc;
-(BOOL)process;
@end

