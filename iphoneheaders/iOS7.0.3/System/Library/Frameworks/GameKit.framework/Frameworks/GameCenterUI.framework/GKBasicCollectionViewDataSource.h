/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionViewDataSource.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, NSPredicate;

@interface GKBasicCollectionViewDataSource : GKCollectionViewDataSource <NSCopying> {

	NSArray* _items;
	SEL _showAllAction;
	unsigned _pageSize;
	NSPredicate* _filterPredicate;
	NSRange _preloadedRange;

}

@property (nonatomic,copy) NSArray * items;                              //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) SEL showAllAction;                          //@synthesize showAllAction=_showAllAction - In the implementation block
@property (assign,nonatomic) unsigned pageSize;                          //@synthesize pageSize=_pageSize - In the implementation block
@property (assign,nonatomic) NSRange preloadedRange;                     //@synthesize preloadedRange=_preloadedRange - In the implementation block
@property (nonatomic,retain) NSPredicate * filterPredicate;              //@synthesize filterPredicate=_filterPredicate - In the implementation block
-(void)configureCollectionView:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
-(void)preloadImagesForItems:(id)arg1 startingAtIndex:(unsigned)arg2 loadBlock:(/*^block*/ id)arg3 ;
-(id)_gkDescriptionWithChildren:(int)arg1 ;
-(void)collectionViewDidBecomeInactive:(id)arg1 ;
-(id)indexPathsForItem:(id)arg1 ;
-(void)setShowAllAction:(SEL)arg1 ;
-(SEL)showAllAction;
-(void)setItemsNoNotify:(id)arg1 ;
-(void)setFilterPredicate:(id)arg1 ;
-(void)setPageSize:(unsigned)arg1 ;
-(void)setPreloadedRange:(NSRange)arg1 ;
-(void)removeItemsAtIndexes:(id)arg1 ;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 complete:(/*^block*/ id)arg3 ;
-(unsigned)countOfItems;
-(id)itemsAtIndexes:(id)arg1 ;
-(void)getItems:(id*)arg1 range:(NSRange)arg2 ;
-(void)insertItems:(id)arg1 atIndexes:(id)arg2 ;
-(void)replaceItemsAtIndexes:(id)arg1 withItems:(id)arg2 ;
-(NSRange)preloadedRange;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)items;
-(void)setItems:(id)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(unsigned)pageSize;
-(id)filterPredicate;
-(id)sectionTitle;
@end

