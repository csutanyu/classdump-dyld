/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class TSTTableDataStore, NSString, TSTHiddenStateFormulaOwner, TSCEOwnerFormulaMap, TSCECalculationEngine, TSTCellDictionary, TSCECellCoordinateVector, TSTConditionalStyleFormulaOwner, TSWPStorage, TSTTableFilterSet, TSKDocumentRoot, TSDStroke, TSTTableStyle, TSTCellStyle, TSWPParagraphStyle, TSWPShapeStyle, TSTCell, TSDFill, NSArray;

@interface TSTTableModel : TSPObject {

	TSTTableDataStore* mDataStore;
	CFUUIDRef mTableID;
	CFUUIDRef mFromTableID;
	unsigned short mNumberOfRows;
	unsigned short mNumberOfColumns;
	unsigned short mNumberOfHeaderRows;
	unsigned short mNumberOfHeaderColumns;
	unsigned short mNumberOfFooterRows;
	BOOL mHeaderRowsFrozen;
	BOOL mHeaderColumnsFrozen;
	unsigned short mNumberOfHiddenRows;
	unsigned short mNumberOfHiddenColumns;
	unsigned short mNumberOfUserHiddenRows;
	unsigned short mNumberOfUserHiddenColumns;
	unsigned short mNumberOfFilteredRows;
	float mDefaultRowHeight;
	float mDefaultColumnWidth;
	NSString* mTableName;
	BOOL mTableNameEnabled;
	float mTableNameHeight;
	BOOL mTableNameBorderEnabled;
	BOOL mRepeatingHeaderRowsEnabled;
	BOOL mRepeatingHeaderColumnsEnabled;
	TSTHiddenStateFormulaOwner* mHiddenStateFormulaOwnerForRows;
	TSTHiddenStateFormulaOwner* mHiddenStateFormulaOwnerForColumns;
	unsigned mPresetIndex;
	BOOL mStyleApplyClearsAll;
	SCD_Struct_TS491 mStyles;
	TSTDefaultCellBlock mDefaultCells;
	TSCEOwnerFormulaMap* mFormulasForUndo;
	TSCECalculationEngine* mCalcEngine;
	TSTCellDictionary* mCellsPendingWrite;
	opaque_pthread_mutex_t mCellsToInvalidateAfterRecalcLock;
	TSCECellCoordinateVector* mCellsToInvalidateAfterRecalc;
	TSCECellCoordinateVector* mCellsToInvalidateNonoverflowingAfterRecalc;
	TSTConditionalStyleFormulaOwner* mConditionalStyleFormulaOwner;
	TSWPStorage* mDeprecatedProvider;
	BOOL mWasUnarchivedFromAProvidedTable;
	TSTTableFilterSet* mFilterSet;
	TSCEOwnerFormulaMap* _formulasForUndo;

}

@property (nonatomic,readonly) TSKDocumentRoot * documentRoot; 
@property (assign,nonatomic) TSCECalculationEngine * calcEngine; 
@property (nonatomic,retain) TSCEOwnerFormulaMap * formulasForUndo;                                                //@synthesize formulasForUndo=_formulasForUndo - In the implementation block
@property (nonatomic,readonly) CFUUIDRef tableID; 
@property (nonatomic,readonly) CFUUIDRef fromTableID; 
@property (nonatomic,retain) NSString * tableName; 
@property (assign,nonatomic) BOOL tableNameEnabled; 
@property (assign,nonatomic) float tableNameHeight; 
@property (assign,nonatomic) BOOL tableNameBorderEnabled; 
@property (nonatomic,readonly) TSDStroke * tableNameBorderStroke; 
@property (assign,nonatomic) BOOL repeatingHeaderRowsEnabled; 
@property (assign,nonatomic) BOOL repeatingHeaderColumnsEnabled; 
@property (assign,nonatomic) BOOL styleApplyClearsAll; 
@property (nonatomic,readonly) BOOL hasTableBorder; 
@property (nonatomic,readonly) BOOL hasAlternatingRows; 
@property (assign,nonatomic) unsigned short numberOfRows; 
@property (assign,nonatomic) unsigned short numberOfColumns; 
@property (assign,nonatomic) unsigned short numberOfHeaderRows; 
@property (assign,nonatomic) unsigned short numberOfFooterRows; 
@property (assign,nonatomic) unsigned short numberOfHeaderColumns; 
@property (nonatomic,readonly) unsigned short numberOfHiddenRows; 
@property (nonatomic,readonly) unsigned short numberOfHiddenColumns; 
@property (nonatomic,readonly) unsigned short numberOfUserHiddenRows; 
@property (nonatomic,readonly) unsigned short numberOfUserHiddenColumns; 
@property (nonatomic,readonly) unsigned short numberOfVisibleBodyRows; 
@property (nonatomic,readonly) unsigned short numberOfVisibleBodyColumns; 
@property (assign,nonatomic) unsigned presetIndex; 
@property (assign,nonatomic) BOOL headerRowsFrozen; 
@property (assign,nonatomic) BOOL headerColumnsFrozen; 
@property (nonatomic,readonly) TSTTableStyle * tableStyle; 
@property (nonatomic,readonly) TSTCellStyle * bodyCellStyle; 
@property (nonatomic,readonly) TSTCellStyle * headerRowCellStyle; 
@property (nonatomic,readonly) TSTCellStyle * headerColumnCellStyle; 
@property (nonatomic,readonly) TSTCellStyle * footerRowCellStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * bodyTextStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * headerRowTextStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * headerColumnTextStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * footerRowTextStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * tableNameStyle; 
@property (nonatomic,readonly) TSWPShapeStyle * tableNameShapeStyle; 
@property (nonatomic,readonly) TSTCell * defaultBodyCell; 
@property (nonatomic,readonly) TSTCell * defaultHeaderRowCell; 
@property (nonatomic,readonly) TSTCell * defaultHeaderColumnCell; 
@property (nonatomic,readonly) TSTCell * defaultFooterRowCell; 
@property (nonatomic,readonly) TSDFill * backgroundFill; 
@property (nonatomic,readonly) TSDFill * bodyFill; 
@property (nonatomic,readonly) TSDFill * headerColumnsFill; 
@property (nonatomic,readonly) TSDFill * headerRowsFill; 
@property (nonatomic,readonly) TSDFill * footerRowsFill; 
@property (nonatomic,readonly) TSDStroke * borderStrokeEvenIfNotVisible; 
@property (nonatomic,readonly) TSDStroke * parentBorderStroke; 
@property (nonatomic,readonly) TSDStroke * bodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * bodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnBorderStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnBodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnBodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnSeparatorStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowBorderStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowBodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowBodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowSeparatorStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowBorderStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowBodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowBodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowSeparatorStroke; 
@property (assign,nonatomic) TSTConditionalStyleFormulaOwner * conditionalStyleFormulaOwner; 
@property (nonatomic,readonly) TSTHiddenStateFormulaOwner * hiddenStateFormulaOwnerForRows; 
@property (nonatomic,readonly) TSTHiddenStateFormulaOwner * hiddenStateFormulaOwnerForColumns; 
@property (nonatomic,copy) TSTTableFilterSet * filterSet; 
@property (assign,nonatomic) BOOL wasUnarchivedFromAProvidedTable; 
@property (nonatomic,readonly) TSTCellDictionary * cellsPendingWrite; 
@property (nonatomic,readonly) TSCECellCoordinateVector * cellsToInvalidateAfterRecalc; 
@property (nonatomic,readonly) TSCECellCoordinateVector * cellsToInvalidateNonoverflowingAfterRecalc; 
@property (assign) NSArray * rowHeights; 
@property (assign) NSArray * columnWidths; 
+(id)unnamedTableString;
+(int)tableAreaForCellID:(SCD_Struct_TS266)arg1 inTableWithHeaderColumns:(unsigned short)arg2 headerRows:(unsigned short)arg3 footerRows:(unsigned short)arg4 totalRows:(unsigned short)arg5 ;
+(SCD_Struct_TS490)cellRangeForTableArea:(int)arg1 givenTableSize:(SCD_Struct_TS489)arg2 numberOfHeaderRows:(unsigned short)arg3 numberOfFooterRows:(unsigned short)arg4 numberOfHeaderColumns:(unsigned short)arg5 ;
+(CFDictionaryRef)newIDMapForPastedTablesInDrawables:(id)arg1 calculationEngine:(id)arg2 ;
+(void)load;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(CFUUIDRef)tableID;
-(void)upgradeFromPreUFF;
-(void)registerAllFormulasWithCalculationEngine:(id)arg1 ;
-(id)calcEngine;
-(unsigned)presetIndex;
-(id)documentStylesheet;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)setTableID:(CFUUIDRef)arg1 ;
-(int)tableAreaForCellID:(SCD_Struct_TS266)arg1 ;
-(void)p_releaseExistingDefaultStyles;
-(id)bodyCellStyle;
-(id)headerRowCellStyle;
-(id)headerColumnCellStyle;
-(id)footerRowCellStyle;
-(id)headerRowTextStyle;
-(id)headerColumnTextStyle;
-(id)footerRowTextStyle;
-(id)tableNameStyle;
-(id)tableNameShapeStyle;
-(void)resetStyles:(id)arg1 ;
-(void)setupDefaultCells;
-(id)initWithContext:(id)arg1 rows:(unsigned short)arg2 columns:(unsigned short)arg3 styles:(id)arg4 tableInfo:(id)arg5 ;
-(BOOL)repeatingHeaderRowsEnabled;
-(BOOL)repeatingHeaderColumnsEnabled;
-(BOOL)headerRowsFrozen;
-(BOOL)headerColumnsFrozen;
-(unsigned short)numberOfHeaderRows;
-(unsigned short)numberOfHeaderColumns;
-(unsigned short)numberOfFooterRows;
-(BOOL)tableNameEnabled;
-(BOOL)tableNameBorderEnabled;
-(void)setTableNameBorderEnabled:(BOOL)arg1 ;
-(float)tableNameHeight;
-(void)setTableNameHeight:(float)arg1 ;
-(BOOL)styleApplyClearsAll;
-(void)setStyleApplyClearsAll:(BOOL)arg1 ;
-(id)filterSet;
-(SCD_Struct_TS490)cellRangeForTableArea:(int)arg1 ;
-(id)dataStore;
-(void)setDrawableIsBeingCopied:(BOOL)arg1 ;
-(void)filterSetUpdated;
-(id)addRules:(id)arg1 inFilter:(unsigned)arg2 ;
-(id)addRules:(id)arg1 atRuleIndices:(id)arg2 inFilter:(unsigned)arg3 isNew:(BOOL)arg4 ;
-(id)removeRulesWithIndices:(id)arg1 inFilter:(unsigned)arg2 ;
-(id)replaceRule:(id)arg1 atRuleIndex:(unsigned)arg2 inFilter:(unsigned)arg3 ;
-(void)setFilterSetType:(int)arg1 ;
-(void)dirtyFilterState;
-(void)setStorageParentToInfo:(id)arg1 ;
-(void)chooseUniqueNameInContainer:(id)arg1 forPaste:(BOOL)arg2 needsNewName:(BOOL)arg3 ;
-(id)defaultCellForTableArea:(int)arg1 ;
-(id)conditionalStyleFormulaOwner;
-(void)p_fetchCellHoldingReadLock:(void*)arg1 returnCode:(void*)arg2 ;
-(id)defaultCellStyleForTableArea:(int)arg1 ;
-(id)defaultTextStyleForTableArea:(int)arg1 ;
-(SCD_Struct_TS490)bodyRange;
-(void)p_clearDataListEntriesInRange:(SCD_Struct_TS490)arg1 ignoreSizeChecks:(BOOL)arg2 ;
-(SCD_Struct_TS490)headerRowRange;
-(SCD_Struct_TS490)footerRowRange;
-(SCD_Struct_TS490)bodyRowRange;
-(SCD_Struct_TS490)headerColumnRange;
-(SCD_Struct_TS490)bodyColumnRange;
-(void)defaultStrokesForCellID:(SCD_Struct_TS266)arg1 inTableWithHeaderColumns:(unsigned short)arg2 headerRows:(unsigned short)arg3 footerRows:(unsigned short)arg4 totalColumns:(unsigned short)arg5 totalRows:(unsigned short)arg6 tableArea:(int)arg7 outTopStroke:(id*)arg8 outLeftStroke:(id*)arg9 outBottomStroke:(id*)arg10 outRightStroke:(id*)arg11 ;
-(CFUUIDRef)fromTableID;
-(id)hiddenStateFormulaOwnerForRows;
-(id)hiddenStateFormulaOwnerForColumns;
-(void)setPresetIndex:(unsigned)arg1 ;
-(void)setTableNameStyle:(id)arg1 ;
-(void)setTableNameShapeStyle:(id)arg1 ;
-(void)mapTableStylesToStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)p_scaleStrokeFromProperty:(int)arg1 style:(id)arg2 pmap:(id)arg3 scale:(float)arg4 ;
-(void)p_scaleStrokesOnCell:(id)arg1 atCellID:(SCD_Struct_TS266)arg2 transformedObjects:(id)arg3 scale:(float)arg4 ;
-(id)allRichTextPayloadStorages;
-(id)initWithContext:(id)arg1 fromSourceModel:(id)arg2 region:(id)arg3 tableInfo:(id)arg4 ;
-(void)bakeFormulas;
-(void)setTableNameEnabled:(BOOL)arg1 ;
-(void)setRepeatingHeaderRowsEnabled:(BOOL)arg1 ;
-(void)setRepeatingHeaderColumnsEnabled:(BOOL)arg1 ;
-(void)setNumberOfHeaderRows:(unsigned short)arg1 ;
-(void)setNumberOfFooterRows:(unsigned short)arg1 ;
-(void)setNumberOfHeaderColumns:(unsigned short)arg1 ;
-(void)setHeaderRowsFrozen:(BOOL)arg1 ;
-(void)setHeaderColumnsFrozen:(BOOL)arg1 ;
-(void)setBodyCellStyle:(id)arg1 ;
-(void)setHeaderRowCellStyle:(id)arg1 ;
-(void)setHeaderColumnCellStyle:(id)arg1 ;
-(void)setFooterRowCellStyle:(id)arg1 ;
-(void)setHeaderRowTextStyle:(id)arg1 ;
-(void)setHeaderColumnTextStyle:(id)arg1 ;
-(void)setFooterRowTextStyle:(id)arg1 ;
-(BOOL)hasTableBorder;
-(BOOL)hasAlternatingRows;
-(id)tableNameBorderStroke;
-(void)setConditionalStyleFormulaOwner:(id)arg1 ;
-(void)setFilterSet:(id)arg1 ;
-(id)duplicateFilterSet;
-(id)removeFilterRules:(id)arg1 ;
-(BOOL)needsFilterFormulaRewriteForImport;
-(void)setNeedsFilterFormulaRewriteForImport:(BOOL)arg1 ;
-(void)mutateFormulaFiltersUsingBlock:(/*^block*/ id)arg1 ;
-(void)enableRule:(BOOL)arg1 atIndex:(unsigned)arg2 inFilterIndex:(unsigned)arg3 ;
-(void)enableFilter:(BOOL)arg1 atIndex:(unsigned)arg2 ;
-(void)enableFilterSet:(BOOL)arg1 ;
-(void)setFilterRulesAtAbsoluteIndices:(id)arg1 enabled:(BOOL)arg2 ;
-(BOOL)hasActiveFilters;
-(id)defaultBodyCell;
-(id)defaultFooterRowCell;
-(id)defaultHeaderRowCell;
-(id)defaultHeaderColumnCell;
-(BOOL)useBandedFill;
-(id)bandedFillObject;
-(void)chooseUniqueNameInContainer:(id)arg1 forPaste:(BOOL)arg2 ;
-(int)defaultCell:(id)arg1 forTableArea:(int)arg2 ;
-(id)columnNameForCellID:(SCD_Struct_TS266)arg1 cellRangeContainingName:(SCD_Struct_TS490*)arg2 restrictToBodyRange:(BOOL)arg3 ;
-(id)rowNameForCellID:(SCD_Struct_TS266)arg1 cellRangeContainingName:(SCD_Struct_TS490*)arg2 restrictToBodyRange:(BOOL)arg3 ;
-(void)setHeight:(float)arg1 ofRow:(unsigned short)arg2 ;
-(void)setWidth:(float)arg1 ofColumn:(unsigned char)arg2 ;
-(id)rowHeights;
-(void)setColumnWidths:(id)arg1 ;
-(void)setRowHeights:(id)arg1 ;
-(BOOL)isRowHidden:(unsigned short)arg1 forAction:(int)arg2 ;
-(BOOL)isColumnHidden:(unsigned char)arg1 forAction:(int)arg2 ;
-(int)hidingStateForRow:(unsigned short)arg1 ;
-(int)hidingStateForColumn:(unsigned char)arg1 ;
-(unsigned short)numberOfVisibleBodyRows;
-(unsigned short)numberOfVisibleBodyColumns;
-(BOOL)hasMergeRanges;
-(id)mergedGridIndicesForDirection:(int)arg1 ;
-(id)backgroundFill;
-(id)bodyFill;
-(id)headerColumnsFill;
-(id)headerRowsFill;
-(id)footerRowsFill;
-(id)borderStrokeEvenIfNotVisible;
-(id)parentBorderStroke;
-(id)bodyColumnStroke;
-(id)bodyRowStroke;
-(id)headerColumnBorderStroke;
-(id)headerColumnBodyColumnStroke;
-(id)headerColumnBodyRowStroke;
-(id)headerColumnSeparatorStroke;
-(id)headerRowBorderStroke;
-(id)headerRowBodyColumnStroke;
-(id)headerRowBodyRowStroke;
-(id)headerRowSeparatorStroke;
-(id)footerRowBorderStroke;
-(id)footerRowBodyColumnStroke;
-(id)footerRowBodyRowStroke;
-(id)footerRowSeparatorStroke;
-(void)defaultStrokesForCellID:(SCD_Struct_TS266)arg1 outTopStroke:(id*)arg2 outLeftStroke:(id*)arg3 outBottomStroke:(id*)arg4 outRightStroke:(id*)arg5 ;
-(id)cellRegionWithConditionalStyleMatchingCell:(SCD_Struct_TS266)arg1 ;
-(void)remapTableIDsInFormulasWithMap:(CFDictionaryRef)arg1 calcEngine:(id)arg2 ;
-(void)copyPasteboardCustomFormatsToDocumentAndUpdateCellsInRegion:(id)arg1 ;
-(SCD_Struct_TS274*)referenceToHiddenStateFromRow:(unsigned short)arg1 toRow:(unsigned short)arg2 ;
-(SCD_Struct_TS274*)referenceToHiddenStateFromColumn:(unsigned char)arg1 toColumn:(unsigned char)arg2 ;
-(BOOL)hasFormulas;
-(BOOL)cellWasModifiedInCurrentRecalcCycle:(SCD_Struct_TS266)arg1 ;
-(void)moveCalcEngineReferencesFromSourceTable:(CFUUIDRef)arg1 sourceRange:(SCD_Struct_TS490)arg2 sourceOffset:(SCD_Struct_GQ13)arg3 ;
-(void)validateStyles;
-(void)private_validateMergeCellsPedantically;
-(SCD_Struct_TS490)minPopulatedCellRange;
-(void)transformStrokes:(CGAffineTransform)arg1 transformedObjects:(id)arg2 inBounds:(CGRect)arg3 ;
-(unsigned short)numberOfHiddenColumns;
-(unsigned short)numberOfUserHiddenRows;
-(unsigned short)numberOfUserHiddenColumns;
-(BOOL)wasUnarchivedFromAProvidedTable;
-(void)setWasUnarchivedFromAProvidedTable:(BOOL)arg1 ;
-(id)cellsPendingWrite;
-(id)cellsToInvalidateAfterRecalc;
-(id)cellsToInvalidateNonoverflowingAfterRecalc;
-(void)setCalcEngine:(id)arg1 ;
-(id)formulasForUndo;
-(void)setFormulasForUndo:(id)arg1 ;
-(id)tableName;
-(void)setTableName:(id)arg1 ;
-(void)validate;
-(void)dealloc;
-(id)init;
-(unsigned short)numberOfColumns;
-(unsigned short)numberOfRows;
-(SCD_Struct_TS490)range;
-(void)setNumberOfRows:(unsigned short)arg1 ;
-(id).cxx_construct;
-(void)setNumberOfColumns:(unsigned short)arg1 ;
-(id)tableStyle;
-(id)documentRoot;
-(void)setBodyTextStyle:(id)arg1 ;
-(id)bodyTextStyle;
-(void)setTableStyle:(id)arg1 ;
-(id)columnWidths;
-(unsigned short)numberOfHiddenRows;
@end

