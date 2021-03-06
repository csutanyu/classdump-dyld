/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>
#import <PhotosUI/PUReorderableLayout.h>
#import <PhotosUI/PUGridLayoutProtocol.h>
#import <PhotosUI/PUCollectionViewLayoutDelegating.h>

@protocol PUCollectionViewLayoutTransitioningDelegate;
@class NSIndexSet, NSSet, NSIndexPath, UICollectionViewLayoutAttributes, NSString;

@interface PUCollectionViewFlowLayout : UICollectionViewFlowLayout <PUReorderableLayout, PUGridLayoutProtocol, PUCollectionViewLayoutDelegating> {

	NSIndexSet* _deletedSections;
	NSSet* _deletedItemIndexPaths;
	NSIndexPath* _reorderingSourceIndexPath;
	NSIndexPath* _reorderingTargetIndexPath;
	NSIndexPath* _reorderingInsertedIndexPath;
	UICollectionViewLayoutAttributes* _globalFooterLayoutAttributes;
	NSIndexPath* globalFooterIndexPath;
	float globalTopPadding;
	float globalBottomPadding;
	NSString* sectionHeaderElementKind;
	float sectionTopPadding;
	<PUCollectionViewLayoutTransitioningDelegate>* transitioningDelegate;
	NSSet* _hiddenItemIndexPaths;
	float _globalFooterHeight;

}

@property (assign,nonatomic,__weak) <PUCollectionViewLayoutTransitioningDelegate> * transitioningDelegate; 
@property (nonatomic,readonly) NSIndexPath * globalFooterIndexPath; 
@property (assign,nonatomic) float globalFooterHeight;                                                                  //@synthesize globalFooterHeight=_globalFooterHeight - In the implementation block
@property (assign,nonatomic) float globalTopPadding; 
@property (assign,nonatomic) float globalBottomPadding; 
@property (nonatomic,copy) NSSet * hiddenItemIndexPaths;                                                                //@synthesize hiddenItemIndexPaths=_hiddenItemIndexPaths - In the implementation block
@property (nonatomic,copy) NSString * sectionHeaderElementKind; 
@property (assign,nonatomic) float sectionHeaderHeight; 
@property (assign,nonatomic) float sectionTopPadding; 
-(void)setSectionHeaderHeight:(float)arg1 ;
-(float)sectionHeaderHeight;
-(id)transitioningDelegate;
-(void)setTransitioningDelegate:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)sectionHeaderElementKind;
-(void)invalidateLayoutForVerticalScroll;
-(id)assetIndexPathsForElementsInRect:(CGRect)arg1 ;
-(float)globalFooterHeight;
-(void)setGlobalFooterHeight:(float)arg1 ;
-(id)globalFooterIndexPath;
-(float)globalTopPadding;
-(void)setGlobalTopPadding:(float)arg1 ;
-(float)globalBottomPadding;
-(void)setGlobalBottomPadding:(float)arg1 ;
-(id)hiddenItemIndexPaths;
-(void)setHiddenItemIndexPaths:(id)arg1 ;
-(void)setSectionHeaderElementKind:(id)arg1 ;
-(float)sectionTopPadding;
-(void)setSectionTopPadding:(float)arg1 ;
-(void)beginReorderingItemAtIndexPath:(id)arg1 ;
-(id)reorderedIndexPath:(id)arg1 ;
-(void)updateReorderingTargetIndexPath:(id)arg1 ;
-(void)endReordering;
-(void)beginInsertingItemAtIndexPath:(id)arg1 ;
-(void)endInsertingItem;
-(CGRect)_frameForGlobalFooter;
-(void)_updateLayoutAttributes:(id)arg1 ignoringReordering:(BOOL)arg2 ;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg1 ignoringReordering:(BOOL)arg2 ;
-(void).cxx_destruct;
@end

