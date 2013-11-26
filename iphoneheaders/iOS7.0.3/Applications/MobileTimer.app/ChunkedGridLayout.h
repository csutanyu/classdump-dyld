/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@protocol ChunkedGridLayoutDelegate;
@class , NSMutableArray, NSMutableDictionary;

@interface ChunkedGridLayout : UICollectionViewLayout {

	int _rowsPerChunk;
	int _columnsPerChunk;
	int _scrollDirection;
	int _fillFirstDirection;
	int _updatesMovementAllowed;
	int _boundsChangeMovementAllowed;
	<ChunkedGridLayoutDelegate>* _delegate;
	CGSize _itemSize;
	CGSize _currentBoundsSize;
	NSMutableArray* _sectionFrames;
	NSMutableArray* _allItemFrames;
	NSMutableDictionary* _cachedAttributes;
	NSMutableDictionary* _previousCachedAttributes;
	NSMutableDictionary* _finalAttributes;
	NSMutableDictionary* _initialAttributes;

}

@property (assign,nonatomic) int rowsPerChunk;                                    //@synthesize rowsPerChunk=_rowsPerChunk - In the implementation block
@property (assign,nonatomic) int columnsPerChunk;                                 //@synthesize columnsPerChunk=_columnsPerChunk - In the implementation block
@property (assign,nonatomic) int scrollDirection;                                 //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) int fillFirstDirection;                              //@synthesize fillFirstDirection=_fillFirstDirection - In the implementation block
@property (assign,nonatomic) int updatesMovementAllowed;                          //@synthesize updatesMovementAllowed=_updatesMovementAllowed - In the implementation block
@property (assign,nonatomic) int boundsChangeMovementAllowed;                     //@synthesize boundsChangeMovementAllowed=_boundsChangeMovementAllowed - In the implementation block
@property (assign,nonatomic) <ChunkedGridLayoutDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(int)chunkIndexForItemAtIndexPath:(id)arg1 ;
-(void)setRowsPerChunk:(int)arg1 ;
-(void)setColumnsPerChunk:(int)arg1 ;
-(int)columnsPerChunk;
-(int)rowsPerChunk;
-(void)setFillFirstDirection:(int)arg1 ;
-(void)setUpdatesMovementAllowed:(int)arg1 ;
-(void)setBoundsChangeMovementAllowed:(int)arg1 ;
-(void)resetAllFramesWithInvalidation:(BOOL)arg1 ;
-(void)calculateAllFrames;
-(id)indexPathsForElementsInRect:(CGRect)arg1 ;
-(void)calculateAnimationLayoutAttributesWithMovementAllowed:(int)arg1 updates:(id)arg2 ;
-(int)fillFirstDirection;
-(int)updatesMovementAllowed;
-(int)boundsChangeMovementAllowed;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)debugDescription;
-(id)delegate;
-(void)setScrollDirection:(int)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(int)scrollDirection;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(CGRect)frameForSection:(int)arg1 ;
@end
