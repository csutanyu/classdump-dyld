/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <MobileSafari/TiltedTabSnapshotCacheDelegate.h>
#import <UIKit/_UIBasicAnimationFactory.h>

@protocol TiltedTabViewDelegate;
@class UIPanGestureRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer, UIScrollView, GradientView, TiltedTabItem, UIView, HighlightRecognizer, CADisplayLink, NSArray, NSMutableSet, NSMutableArray, CloudTabItemView, NSTimer, TiltedTabSnapshotCache, UIImage, UIColor;

@interface TiltedTabView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate, TiltedTabSnapshotCacheDelegate, _UIBasicAnimationFactory> {

	BOOL _presented;
	BOOL _sentDidDismissToDelegate;
	BOOL _sentDidPresentToDelegate;
	UIPanGestureRecognizer* _tabCloseRecognizer;
	UILongPressGestureRecognizer* _tabReorderRecognizer;
	UITapGestureRecognizer* _tabSelectionRecognizer;
	UIScrollView* _scrollView;
	BOOL _suppressingScrollViewDidScroll;
	GradientView* _statusBarGradient;
	unsigned _activeAnimationCount;
	TiltedTabItem* _animatingItem;
	BOOL _startedAnimatingItem;
	UIView* _animatingTopBackdropView;
	TiltedTabItem* _itemToScrollIntoView;
	BOOL _topBackdropViewHidden;
	TiltedTabItem* _interactivelyClosingItem;
	float _interactiveCloseProgress;
	float _interactiveCloseVelocity;
	TiltedTabItem* _onlyHorizontalVelocityItem;
	BOOL _applyVelocityOnlyToHorizontalPosition;
	TiltedTabItem* _pressedItem;
	HighlightRecognizer* _pressRecognizer;
	TiltedTabItem* _interactivelyReorderingItem;
	float _interactiveReorderOffsetDistanceFromTouch;
	float _interactiveReorderOffset;
	BOOL _reorderOffsetNeedsReset;
	CADisplayLink* _reorderScrollDisplayLink;
	float _reorderScrollVelocity;
	float _reorderScrollOffsetError;
	NSArray* _itemsInvolvedInAnimation;
	NSMutableSet* _itemsCurrentlyClosing;
	UIView* _cloudTabContainer;
	NSMutableArray* _cloudTabViews;
	CloudTabItemView* _selectedCloudTabView;
	BOOL _cloudTabsNeedLayout;
	NSTimer* _itemActivationTimer;
	TiltedTabSnapshotCache* _snapshotCache;
	BOOL _flushPendingSnapshots;
	/*^block*/ id _flushPendingSnapshotsCompletion;
	UIImage* _closeButtonImage;
	UIView* _bottomMaskView;
	<TiltedTabViewDelegate>* _delegate;
	NSArray* _items;
	TiltedTabItem* _itemToActivate;
	UIColor* _titleColor;

}

@property (assign,nonatomic) <TiltedTabViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * items;                                   //@synthesize items=_items - In the implementation block
@property (assign,getter=isPresented,nonatomic) BOOL presented;               //@synthesize presented=_presented - In the implementation block
@property (nonatomic,retain) TiltedTabItem * itemToActivate;                  //@synthesize itemToActivate=_itemToActivate - In the implementation block
@property (nonatomic,copy) UIColor * titleColor;                              //@synthesize titleColor=_titleColor - In the implementation block
+(float)snapshotTopBackdropHeight;
-(void)setPresented:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)flushPendingSnapshotsWithCompletion:(/*^block*/ id)arg1 ;
-(void)setPresented:(BOOL)arg1 ;
-(void)precacheSavedSnapshots;
-(void)removeAllSnapshots;
-(void)tiltedTabSnapshotCache:(id)arg1 didCacheSnapshotWithIdentifier:(id)arg2 ;
-(void)tiltedTabSnapshotCache:(id)arg1 requestSnapshotWithIdentifier:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)tiltedTabSnapshotCacheDidFinishUpdating:(id)arg1 ;
-(void)_updateSnapshotCacheIdentifiers;
-(void)_invalidateSnapshotForItem:(id)arg1 ;
-(void)_tabPressUpdated:(id)arg1 ;
-(void)_tabCloseRecognized:(id)arg1 ;
-(void)_tabReorderRecognized:(id)arg1 ;
-(void)_tabSelectionRecognized:(id)arg1 ;
-(float)_scrollingEffectFactorForTabsWithCount:(float)arg1 ;
-(float)_baseOffsetForItem:(id)arg1 index:(unsigned*)arg2 count:(float*)arg3 ;
-(float)_baseOffsetForCloudTabViews;
-(float)_spaceBetweenTabsWithCount:(float)arg1 ;
-(float)_topAreaHeightForTabsWithCount:(float)arg1 ;
-(CGRect)_tabLayoutBounds;
-(CGRect)_hitRectForItem:(id)arg1 ;
-(void)_layoutItemsAnimated:(BOOL)arg1 ;
-(id)_tiltedTabItemForLocation:(CGPoint)arg1 ;
-(void)_setPressedItem:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldInteractWithItem:(id)arg2 ;
-(float)_tabCloseAnimationSlideDistance;
-(void)_relinquishBorrowedContent;
-(void)_reorderScroll:(id)arg1 ;
-(void)_updateReorderGesture;
-(void)_resetInteractiveReorderOffsetAtLocation:(CGPoint)arg1 ;
-(void)_setReorderScrollVelocity:(float)arg1 ;
-(void)_attemptToRelinquishBorrowedContentEarly;
-(void)_setItemActivationTimer:(id)arg1 ;
-(void)setItemToActivate:(id)arg1 ;
-(void)_sendPresentedStateDidChangeToDelegateIfNeeded;
-(void)_updateItemsInvolvedInAnimation;
-(void)_activateItemToActivate;
-(void)_updateSnapshotsAnimated:(BOOL)arg1 ;
-(void)_updateSnapshotCacheStateForPresented:(BOOL)arg1 ;
-(void)_finishAnimations;
-(void)_stopReorderingItem:(id)arg1 withFinalTimeAdjustment:(double)arg2 tabCount:(float)arg3 ;
-(void)_closeButtonPressed:(id)arg1 ;
-(BOOL)_shouldContinueAnimatingItem:(id)arg1 ;
-(void)_resetItem:(id)arg1 ;
-(void)_updateCloseButtonImageForItem:(id)arg1 ;
-(void)_updateSpringAnimationForView:(id)arg1 withFrame:(CGRect)arg2 transform:(CATransform3D)arg3 zPosition:(float)arg4 opacity:(float)arg5 verticalScrollAdjustment:(float)arg6 animated:(BOOL)arg7 ;
-(float)_velocityForSpringAnimations;
-(double)_durationForSpringAnimations;
-(void)_addSpringAnimationWithKeyPath:(id)arg1 toLayer:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 ;
-(id)_makeReorderAnimationWithDirection:(int)arg1 springDuration:(float)arg2 tabCount:(float)arg3 ;
-(void)_updateReorderAnimationBeginTimeForLayer:(id)arg1 withTimeAdjustment:(double)arg2 ;
-(float)_contentHeightForCloudTabs;
-(float)_interactiveCloseProgressForLayout;
-(CGSize)_contentSizeForItemCount:(float)arg1 ;
-(float)_baseOffsetForItemAtIndex:(unsigned)arg1 withItemCountForLayout:(float)arg2 ;
-(void)_updateReorderAnimationsForItem:(id)arg1 withTimeAdjustment:(double)arg2 tabCount:(float)arg3 createIfNecessary:(BOOL)arg4 ;
-(void)_updateSpringAnimationForView:(id)arg1 withBounds:(CGRect)arg2 animated:(BOOL)arg3 ;
-(void)_setTopBackdropViewHidden:(BOOL)arg1 ;
-(void)_updateSpringAnimationForView:(id)arg1 withFrame:(CGRect)arg2 verticalScrollAdjustment:(float)arg3 animated:(BOOL)arg4 ;
-(unsigned)_selectedCloudTabIndex;
-(void)_didSelectCloudTabItemView:(id)arg1 ;
-(void)setCloudTabDevices:(id)arg1 ;
-(id)itemToActivate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)delegate;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(id)items;
-(void)setItems:(id)arg1 ;
-(id)titleColor;
-(void)setTitleColor:(id)arg1 ;
-(BOOL)isPresented;
@end

