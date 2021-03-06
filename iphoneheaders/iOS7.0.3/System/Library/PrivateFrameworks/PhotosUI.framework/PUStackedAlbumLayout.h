/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary, NSArray, UICollectionViewLayoutAttributes, PUAlbumListTransitionContext;

@interface PUStackedAlbumLayout : UICollectionViewLayout {

	NSMutableDictionary* _visibleLayoutAttributesByIndexPath;
	NSMutableDictionary* _derivedLayoutAttributesByIndexPath;
	NSMutableDictionary* _zIndexByIndexPath;
	BOOL _isInteractive;
	NSArray* _visibleStackedItemLayoutAttributes;
	UICollectionViewLayoutAttributes* _referenceItemLayoutAttributes;
	float _yAdjust;
	PUAlbumListTransitionContext* _albumListTransitionContext;
	CGPoint _referenceCenter;
	CGSize _contentSizeAdjust;

}

@property (nonatomic,copy) NSArray * visibleStackedItemLayoutAttributes;                                  //@synthesize visibleStackedItemLayoutAttributes=_visibleStackedItemLayoutAttributes - In the implementation block
@property (nonatomic,copy) UICollectionViewLayoutAttributes * referenceItemLayoutAttributes;              //@synthesize referenceItemLayoutAttributes=_referenceItemLayoutAttributes - In the implementation block
@property (assign,nonatomic) CGPoint referenceCenter;                                                     //@synthesize referenceCenter=_referenceCenter - In the implementation block
@property (assign,nonatomic) float yAdjust;                                                               //@synthesize yAdjust=_yAdjust - In the implementation block
@property (assign,nonatomic) CGSize contentSizeAdjust;                                                    //@synthesize contentSizeAdjust=_contentSizeAdjust - In the implementation block
@property (nonatomic,retain) PUAlbumListTransitionContext * albumListTransitionContext;                   //@synthesize albumListTransitionContext=_albumListTransitionContext - In the implementation block
@property (assign,setter=setInteractive:,nonatomic) BOOL isInteractive;                                   //@synthesize isInteractive=_isInteractive - In the implementation block
-(BOOL)isInteractive;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(/*^block*/ id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned)arg3 ;
-(id)albumListTransitionContext;
-(void)setAlbumListTransitionContext:(id)arg1 ;
-(id)visibleStackedItemLayoutAttributes;
-(CGPoint)referenceCenter;
-(void)setInteractive:(BOOL)arg1 ;
-(void)setYAdjust:(float)arg1 ;
-(void)setContentSizeAdjust:(CGSize)arg1 ;
-(int)zIndexForItemAtIndexPath:(id)arg1 ;
-(void)setReferenceItemLayoutAttributes:(id)arg1 ;
-(void)setVisibleStackedItemLayoutAttributes:(id)arg1 ;
-(void)setReferenceCenter:(CGPoint)arg1 ;
-(float)yAdjust;
-(CGSize)contentSizeAdjust;
-(id)_newAdjustedLayoutAttributes:(id)arg1 indexPath:(id)arg2 ;
-(id)referenceItemLayoutAttributes;
-(void).cxx_destruct;
@end

