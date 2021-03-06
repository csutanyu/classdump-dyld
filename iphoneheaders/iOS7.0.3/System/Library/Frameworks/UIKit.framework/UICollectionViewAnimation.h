/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UICollectionReusableView, UICollectionViewLayoutAttributes, NSMutableArray;

@interface UICollectionViewAnimation : NSObject {

	UICollectionReusableView* _view;
	UICollectionViewLayoutAttributes* _finalLayoutAttributes;
	float _startFraction;
	float _endFraction;
	int _viewType;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _startupHandlers;
	/*^block*/ id _animationBlock;
	struct {
		unsigned animateFromCurrentPosition : 1;
		unsigned deleteAterAnimation : 1;
		unsigned rasterizeAfterAnimation : 1;
		unsigned resetRasterizationAfterAnimation : 1;
	}  _collectionViewAnimationFlags;

}

@property (nonatomic,readonly) UICollectionReusableView * view;                                       //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) int viewType;                                                          //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayoutAttributes * finalLayoutAttributes;              //@synthesize finalLayoutAttributes=_finalLayoutAttributes - In the implementation block
@property (nonatomic,readonly) float startFraction;                                                   //@synthesize startFraction=_startFraction - In the implementation block
@property (nonatomic,readonly) float endFraction;                                                     //@synthesize endFraction=_endFraction - In the implementation block
@property (nonatomic,readonly) BOOL animateFromCurrentPosition; 
@property (nonatomic,readonly) BOOL deleteAfterAnimation; 
@property (assign,nonatomic) BOOL rasterizeAfterAnimation; 
@property (assign,nonatomic) BOOL resetRasterizationAfterAnimation; 
-(void)dealloc;
-(id)description;
-(id)view;
-(float)startFraction;
-(float)endFraction;
-(BOOL)animateFromCurrentPosition;
-(void)start;
-(id)initWithView:(id)arg1 viewType:(int)arg2 finalLayoutAttributes:(id)arg3 startFraction:(float)arg4 endFraction:(float)arg5 animateFromCurrentPostion:(BOOL)arg6 deleteAfterAnimation:(BOOL)arg7 customAnimations:(/*^block*/ id)arg8 ;
-(BOOL)deleteAfterAnimation;
-(void)setRasterizeAfterAnimation:(BOOL)arg1 ;
-(BOOL)rasterizeAfterAnimation;
-(void)setResetRasterizationAfterAnimation:(BOOL)arg1 ;
-(BOOL)resetRasterizationAfterAnimation;
-(void)addCompletionHandler:(/*^block*/ id)arg1 ;
-(void)addStartupHandler:(/*^block*/ id)arg1 ;
-(int)viewType;
-(id)finalLayoutAttributes;
@end

