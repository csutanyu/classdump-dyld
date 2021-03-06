/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISwooshViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class SKUIItemArtworkContext, UICollectionView, NSMutableIndexSet, NSArray, NSString, NSURL, SKUISwooshView;

@interface SKUILockupSwooshViewController : SKUISwooshViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	SKUIItemArtworkContext* _artworkContext;
	UICollectionView* _collectionView;
	BOOL _delegateWantsWillDisplay;
	BOOL _didInitialReload;
	NSMutableIndexSet* _hiddenIconIndexSet;
	NSArray* _items;
	CGSize _maxCellSize;
	CGSize _maxImageSize;
	NSString* _seeAllTitle;
	NSURL* _seeAllURL;
	BOOL _seeAllHidden;
	SKUISwooshView* _swooshView;
	int _swooshType;
	unsigned _visibleLockupFields;

}

@property (assign,getter=isSeeAllHidden,nonatomic) BOOL seeAllHidden;                //@synthesize seeAllHidden=_seeAllHidden - In the implementation block
@property (nonatomic,readonly) SKUIItemArtworkContext * artworkContext;              //@synthesize artworkContext=_artworkContext - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                      //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) CGRect seeAllButtonFrame; 
@property (nonatomic,readonly) NSURL * seeAllURL;                                    //@synthesize seeAllURL=_seeAllURL - In the implementation block
@property (assign,nonatomic) int swooshType;                                         //@synthesize swooshType=_swooshType - In the implementation block
+(int)_swooshTypeForItems:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)items;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(id)indexPathsForVisibleItems;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setColorScheme:(id)arg1 ;
-(void)setImage:(id)arg1 forItemAtIndex:(int)arg2 ;
-(id)artworkContext;
-(int)swooshType;
-(id)seeAllURL;
-(CGRect)frameForItemAtIndex:(int)arg1 ;
-(id)initWithSwoosh:(id)arg1 ;
-(id)popImageViewForItemAtIndex:(int)arg1 ;
-(void)unhideImages;
-(id)_newArtworkContextForSwooshType:(int)arg1 ;
-(CGSize)_maximumCellSizeForImageSize:(CGSize)arg1 ;
-(void)_seeAllAction:(id)arg1 ;
-(id)initWithItemList:(id)arg1 ;
-(void)setSeeAllHidden:(BOOL)arg1 ;
-(CGRect)seeAllButtonFrame;
-(void)setItemsWithLockups:(id)arg1 ;
-(void)setSwooshType:(int)arg1 ;
-(BOOL)isSeeAllHidden;
-(void).cxx_destruct;
-(void)setClientContext:(id)arg1 ;
@end

