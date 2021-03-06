/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <CoreFoundation/NSCoding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITableView, NSString, UIView, UIImageView, UILabel, UIColor, UIControl, _UITableViewCellSeparatorView, UITextField, NSTimer, UIImage, UILongPressGestureRecognizer, NSIndexPath, UITableViewCellDeleteConfirmationView, UITapGestureRecognizer, UIScrollView, SUGridView;

@interface UITableViewCell : UIView <UIScrollViewDelegate, NSCoding, UIGestureRecognizerDelegate> {

	UITableView* _tableView;
	id _layoutManager;
	id _target;
	SEL _editAction;
	SEL _accessoryAction;
	id _oldEditingData;
	id _editingData;
	float _rightMargin;
	int _indentationLevel;
	float _indentationWidth;
	NSString* _reuseIdentifier;
	UIView* _contentView;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIView* _backgroundView;
	UIView* _selectedBackgroundView;
	UIView* _multipleSelectionBackgroundView;
	UIView* _selectedOverlayView;
	float _selectionFadeDuration;
	UIColor* _backgroundColor;
	UIColor* _separatorColor;
	UIColor* _topShadowColor;
	UIColor* _bottomShadowColor;
	UIColor* _sectionBorderColor;
	UIView* _floatingSeparatorView;
	UIView* _topShadowAnimationView;
	UIView* _bottomShadowAnimationView;
	id _badge;
	CFDictionaryRef _unhighlightedStates;
	id _highlightingSupport;
	id _selectionSegueTemplate;
	id _accessoryActionSegueTemplate;
	struct {
		unsigned showingDeleteConfirmation : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned selectionFadeFraction : 11;
		unsigned editing : 1;
		unsigned editingStyle : 3;
		unsigned accessoryType : 3;
		unsigned editingAccessoryType : 3;
		unsigned showsAccessoryWhenEditing : 1;
		unsigned showsReorderControl : 1;
		unsigned showDisclosure : 1;
		unsigned showTopSeparator : 1;
		unsigned hideTopSeparatorDuringReordering : 1;
		unsigned disclosureClickable : 1;
		unsigned disclosureStyle : 1;
		unsigned showingRemoveControl : 1;
		unsigned sectionLocation : 3;
		unsigned tableViewStyle : 1;
		unsigned shouldIndentWhileEditing : 1;
		unsigned fontSet : 1;
		unsigned usingDefaultSelectedBackgroundView : 1;
		unsigned wasSwiped : 1;
		unsigned highlighted : 1;
		unsigned separatorDirty : 1;
		unsigned drawn : 1;
		unsigned drawingDisabled : 1;
		unsigned style : 12;
		unsigned showingMenu : 1;
		unsigned clipsContents : 1;
		unsigned animatingSelection : 1;
		unsigned backgroundColorSet : 1;
		unsigned needsSetup : 1;
		unsigned dontDrawTopShadow : 1;
		unsigned usingMultiselectbackgroundView : 1;
		unsigned layoutLoopCounter : 2;
		unsigned isPigglyWigglyCell;
		unsigned deleteAnimationInProgress : 1;
		unsigned deleteCancelationAnimationInProgress : 1;
		unsigned animating : 1;
		unsigned shouldHaveFullLengthBottomSeparator : 1;
		unsigned shouldHaveFullLengthTopSeparator : 1;
		unsigned drawsSeparatorAtTopOfSection : 1;
		unsigned drawsSeparatorAtBottomOfSection : 1;
		unsigned separatorBackdropOverlayBlendMode : 3;
		unsigned separatorDrawsInVibrantLightMode : 1;
		unsigned separatorHidden : 1;
	}  _tableCellFlags;
	UIControl* _accessoryView;
	UIControl* _editingAccessoryView;
	UIView* _customAccessoryView;
	UIView* _customEditingAccessoryView;
	_UITableViewCellSeparatorView* _separatorView;
	_UITableViewCellSeparatorView* _topSeparatorView;
	UIView* _topShadowView;
	UITextField* _editableTextField;
	double _lastSelectionTime;
	NSTimer* _deselectTimer;
	float _textFieldOffset;
	float _indexBarWidth;
	UIEdgeInsets _separatorInset;
	UIEdgeInsets _backgroundInset;
	SEL _returnAction;
	UIColor* _selectionTintColor;
	UIColor* _accessoryTintColor;
	UIImage* _reorderControlImage;
	UILongPressGestureRecognizer* _menuGesture;
	NSIndexPath* _representedIndexPath;
	BOOL _isPigglyWigglyCell;
	UITableViewCellDeleteConfirmationView* _swipeToDeleteConfirmationView;
	UITapGestureRecognizer* _swipeToDeleteCancelationGesture;
	UIScrollView* _wrapperView;
	UIView* _clearBlendingView;
	float _swipeToDeleteDistancePulled;
	float _sectionCornerRadius;
	float _sectionBorderWidth;

}

@property (nonatomic,readonly) SUGridView * gridView; 
@property (nonatomic,readonly) UIImageView * imageView; 
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,retain) UIView * selectedBackgroundView; 
@property (nonatomic,retain) UIView * multipleSelectionBackgroundView; 
@property (nonatomic,readonly) NSString * reuseIdentifier; 
@property (assign,nonatomic) int selectionStyle; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,readonly) int editingStyle; 
@property (assign,nonatomic) BOOL showsReorderControl; 
@property (assign,nonatomic) BOOL shouldIndentWhileEditing; 
@property (assign,nonatomic) int accessoryType; 
@property (nonatomic,retain) UIView * accessoryView; 
@property (assign,nonatomic) int editingAccessoryType; 
@property (nonatomic,retain) UIView * editingAccessoryView; 
@property (assign,nonatomic) int indentationLevel; 
@property (assign,nonatomic) float indentationWidth; 
@property (assign,nonatomic) UIEdgeInsets separatorInset; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (nonatomic,readonly) BOOL showingDeleteConfirmation; 
+(void)initialize;
+(id)_defaultTopShadowColor;
-(id)gridView;
-(void)setEditingBySwiping:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)accessibilityTableViewCellText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(void)sendSubviewToBack:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setTarget:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)image;
-(int)style;
-(void)setLineBreakMode:(int)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)contentView;
-(id)_encodableSubviews;
-(BOOL)_canDrawContent;
-(BOOL)canBecomeFirstResponder;
-(void)_addSubview:(id)arg1 positioned:(int)arg2 relativeTo:(id)arg3 ;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_setHiddenForReuse:(BOOL)arg1 ;
-(void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3 ;
-(id)text;
-(id)_scriptingInfo;
-(id)target;
-(void)setFont:(id)arg1 ;
-(id)font;
-(id)_defaultFont;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setTextColor:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)_imageView;
-(void)_setIndexPath:(id)arg1 ;
-(void)_multiselectColorChanged;
-(id)separatorColor;
-(void)setSectionBorderColor:(id)arg1 ;
-(void)_setDrawsTopShadow:(BOOL)arg1 ;
-(void)_setIndexBarWidth:(float)arg1 ;
-(id)_indexPath;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)_updateSeparatorContent:(BOOL)arg1 ;
-(BOOL)_isMultiselecting;
-(void)_setSeparatorHidden:(BOOL)arg1 ;
-(int)accessoryType;
-(UIEdgeInsets)separatorInset;
-(void)setTableViewStyle:(int)arg1 ;
-(void)_setMarginWidth:(float)arg1 ;
-(void)_setRightMarginWidth:(float)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(id)reuseIdentifier;
-(void)_setAnimating:(BOOL)arg1 clippingAdjacentCells:(BOOL)arg2 ;
-(void)_setAnimating:(BOOL)arg1 ;
-(void)_updateFullWidthSwipeDeletionView;
-(BOOL)_needsSetup;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_removeFloatingSeparator;
-(void)_removeInnerShadow;
-(void)_setDrawsSeparatorAtTopOfSection:(BOOL)arg1 ;
-(void)_setDrawsSeparatorAtBottomOfSection:(BOOL)arg1 ;
-(id)accessoryActionSegueTemplate;
-(void)setSeparatorColor:(id)arg1 ;
-(id)tableBackgroundColor;
-(int)_popoverControllerStyle;
-(BOOL)drawingEnabled;
-(int)editingStyle;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)selectionSegueTemplate;
-(BOOL)isSelected;
-(void)_setBackgroundInset:(UIEdgeInsets)arg1 ;
-(void)setTopShadowColor:(id)arg1 ;
-(void)setBottomShadowColor:(id)arg1 ;
-(void)_updateHighlightColors;
-(void)_setTableBackgroundCGColor:(CGColorRef)arg1 withSystemColorName:(id)arg2 ;
-(void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)arg1 ;
-(void)setBackgroundView:(id)arg1 ;
-(void)prepareForReuse;
-(void)setReuseIdentifier:(id)arg1 ;
-(id)_wrapperView;
-(id)layoutManager;
-(void)_startToEditTextField;
-(void)_setTableView:(id)arg1 ;
-(void)_setNeedsSetup:(BOOL)arg1 ;
-(void)setIndentationLevel:(int)arg1 ;
-(unsigned)currentStateMask;
-(void)_setMultiselecting:(BOOL)arg1 ;
-(id)_target;
-(void)_setTarget:(id)arg1 ;
-(void)_setAccessoryAction:(SEL)arg1 ;
-(void)_setIsPigglyWigglyCell:(BOOL)arg1 ;
-(BOOL)_backgroundColorSet;
-(BOOL)_isPigglyWigglyCell;
-(id)sectionBorderColor;
-(int)_separatorBackdropOverlayBlendMode;
-(void)_setSeparatorBackdropOverlayBlendMode:(int)arg1 ;
-(float)_sectionBorderWidth;
-(void)_setSectionBorderWidth:(float)arg1 ;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(BOOL)_drawsTopSeparatorDuringReordering;
-(void)_setDrawsTopSeparator:(BOOL)arg1 ;
-(void)_saveOpaqueViewState:(id)arg1 ;
-(void)_setOpaque:(BOOL)arg1 forSubview:(id)arg2 ;
-(void)_setReordering:(BOOL)arg1 ;
-(id)textLabel;
-(id)detailTextLabel;
-(void)setAccessoryType:(int)arg1 ;
-(void)_setEditingStyle:(int)arg1 ;
-(void)_setShouldIndentWhileEditing:(BOOL)arg1 ;
-(void)_setShowsReorderControl:(BOOL)arg1 ;
-(void)setWasSwiped:(BOOL)arg1 ;
-(void)_setShowingDeleteConfirmation:(BOOL)arg1 ;
-(BOOL)shouldIndentWhileEditing;
-(BOOL)showingDeleteConfirmation;
-(BOOL)showsReorderControl;
-(void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg1 ;
-(void)_setShouldHaveFullLengthTopSeparator:(BOOL)arg1 ;
-(BOOL)_isAnimating;
-(void)_animateSwipeCancelation;
-(int)separatorStyle;
-(UIEdgeInsets)_backgroundInset;
-(void)_setSeparatorDrawsInVibrantLightMode:(BOOL)arg1 ;
-(void)_tableViewDidUpdateMarginWidth;
-(BOOL)_isInModalViewController;
-(id)backgroundView;
-(void)setEditing:(BOOL)arg1 ;
-(float)_marginWidth;
-(id)_titleForDeleteConfirmationButton;
-(id)textColor;
-(int)textAlignment;
-(id)selectedImage;
-(void)setLayoutManager:(id)arg1 ;
-(id)imageView;
-(void)_setBadgeText:(id)arg1 ;
-(BOOL)_isHighlighted;
-(void)_uiRemoveControlMinusButtonHideAnimationDone:(id)arg1 ;
-(CGRect)removeControl:(id)arg1 startFrameForTarget:(id)arg2 ;
-(CGRect)removeControl:(id)arg1 endFrameForTarget:(id)arg2 ;
-(void)removeControlWillHideRemoveConfirmation:(id)arg1 ;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(void)setShowingDeleteConfirmation:(BOOL)arg1 ;
-(void)removeControl:(id)arg1 wasCanceledForTarget:(id)arg2 ;
-(void)insertControl:(id)arg1 shouldInsertWithTarget:(id)arg2 ;
-(void)removeControl:(id)arg1 willRemoveTarget:(id)arg2 ;
-(id)_badge;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(int)lineBreakMode;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(id)_tableView;
-(id)_removeControl;
-(void)_grabberBeganReorder:(id)arg1 ;
-(void)_grabberDragged:(id)arg1 yDelta:(float)arg2 ;
-(void)_grabberReleased:(id)arg1 ;
-(void)setSelectionTintColor:(id)arg1 ;
-(void)setSelectionStyle:(int)arg1 ;
-(int)selectionStyle;
-(id)selectionTintColor;
-(id)_multiselectBackgroundColor;
-(void)_beginSwiping;
-(id)_swipeToDeleteConfirmationView;
-(void)_updateSwipeWithDistancePulled:(float)arg1 ;
-(void)_setSeparatorDrawsInVibrantLightModeUIAppearance:(id)arg1 ;
-(id)oldEditingData;
-(CGRect)reorderRectForBounds:(CGRect)arg1 ;
-(void)setOldEditingData:(id)arg1 ;
-(void)_releaseReorderingControl;
-(id)_tintedDisclosureImagePressed:(BOOL)arg1 ;
-(id)_detailDisclosureImage:(BOOL)arg1 ;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(id)_defaultAccessoryView;
-(void)_releaseRemoveControl;
-(void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2 ;
-(BOOL)_isCurrentlyConsideredHighlighted;
-(id)_reorderingControl;
-(id)_currentAccessoryView:(BOOL)arg1 ;
-(void)didTransitionToState:(unsigned)arg1 ;
-(void)_menuDismissed:(id)arg1 ;
-(int)tableViewStyle;
-(BOOL)_insetsBackground;
-(int)sectionLocation;
-(BOOL)_drawsTopShadow;
-(id)_selectedBackgroundView:(BOOL)arg1 ;
-(id)topShadowColor;
-(float)selectionFadeDuration;
-(void)_topShadowDidFadeOut;
-(void)_performAction:(SEL)arg1 sender:(id)arg2 ;
-(void)_updateSeparatorContent;
-(float)_rightMarginWidth;
-(BOOL)_showFullLengthTopSeparatorForTopOfSection;
-(BOOL)_canDoSeparatorLayout;
-(CGRect)_separatorFrame;
-(BOOL)_showSeparatorAtTopOfSection;
-(CGRect)_topSeparatorFrame;
-(id)initWithFrame:(CGRect)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelectionFadeDuration:(float)arg1 ;
-(void)_updateWrapperContentInset;
-(id)editingData:(BOOL)arg1 ;
-(void)_endSwiping:(BOOL)arg1 ;
-(void)_longPressGestureRecognized:(id)arg1 ;
-(void)_setupTableViewCellCommon;
-(void)_drawContentInRect:(CGRect)arg1 selected:(BOOL)arg2 ;
-(void)_setupMenuGesture;
-(void)_didCreateContentView;
-(id)_textLabel;
-(id)_detailTextLabel;
-(id)_textLabel:(BOOL)arg1 ;
-(void)_setFont:(id)arg1 layout:(BOOL)arg2 ;
-(void)_updateTopShadowView:(BOOL)arg1 ;
-(void)_setupSelectedBackgroundView;
-(void)selectedBackgroundViewChange:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)setSelectedBackgroundView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_resetSelectionTimer;
-(void)_removeRemoveControl;
-(void)removeEditingData;
-(void)_setSelectionStyle:(int)arg1 selectionTintColor:(id)arg2 ;
-(void)_deselectAnimationFinished;
-(void)_updateHighlightColorsForAnimationHalfwayPoint;
-(void)_cancelInternalPerformRequests;
-(void)showSelectedBackgroundView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_delayedDeselect;
-(void)_syncAccessoryViewsIfNecessary;
-(id)_accessoryView:(BOOL)arg1 ;
-(id)_editingAccessoryView:(BOOL)arg1 ;
-(BOOL)wasSwiped;
-(void)_updateContentClip;
-(void)willTransitionToState:(unsigned)arg1 ;
-(void)_editingTransitionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(id)_createRemoveControlForStyle:(int)arg1 ;
-(void)_showReorderControl;
-(void)_layoutSubviewsAnimated:(BOOL)arg1 ;
-(float)_editingButtonOffset;
-(CGRect)accessoryRectForBounds:(CGRect)arg1 accessoryView:(id)arg2 isCustom:(BOOL)arg3 ;
-(CGRect)_delegateConfirmationRect;
-(int)indentationLevel;
-(float)indentationWidth;
-(CGSize)_textInsetSize;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(CGSize)_imageInsetSize;
-(void)_updateViewsForDeleteButton;
-(void)_updateCellMaskViewsForView:(id)arg1 backdropView:(id)arg2 ;
-(id)_reorderingSeparatorView;
-(CGRect)textRectForContentRect:(CGRect)arg1 ;
-(void)setSectionLocation:(int)arg1 ;
-(id)_editableTextField;
-(void)_createReorderControlIfNeeded;
-(void)_willBeDeleted;
-(void)_setGrabberHidden:(BOOL)arg1 ;
-(id)_disclosureImage:(BOOL)arg1 ;
-(id)_disclosurePressedImage:(BOOL)arg1 ;
-(int)editingAccessoryType;
-(id)_newAccessoryView:(BOOL)arg1 ;
-(void)_clearOpaqueViewState:(id)arg1 ;
-(id)editableTextField;
-(void)_swipeDeleteButtonPushed;
-(void)_swipeAccessoryButtonPushed;
-(void)_handleSwipeDeleteCancelation:(id)arg1 ;
-(void)_finishedFadingGrabber:(id)arg1 finished:(BOOL)arg2 ;
-(void)_setDrawsTopSeparatorDuringReordering:(BOOL)arg1 ;
-(void)setAccessoryActionSegueTemplate:(id)arg1 ;
-(void)setSelectionSegueTemplate:(id)arg1 ;
-(BOOL)_shouldHaveFullLengthBottomSeparator;
-(BOOL)_shouldHaveFullLengthTopSeparator;
-(BOOL)_drawsSeparatorAtTopOfSection;
-(BOOL)_drawsSeparatorAtBottomOfSection;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(void)setSelectedTextColor:(id)arg1 ;
-(id)selectedTextColor;
-(void)setSelectedImage:(id)arg1 ;
-(id)_badgeText;
-(void)setSelectedBackgroundView:(id)arg1 ;
-(id)multipleSelectionBackgroundView;
-(void)setMultipleSelectionBackgroundView:(id)arg1 ;
-(id)selectedBackgroundView;
-(id)_contentBackgroundColor;
-(void)setTableBackgroundColor:(id)arg1 ;
-(id)bottomShadowColor;
-(BOOL)isAtLeastHalfSelected;
-(float)selectionPercent;
-(id)selectedOverlayView;
-(void)setEditingStyle:(int)arg1 ;
-(void)setShowsReorderControl:(BOOL)arg1 ;
-(void)setShouldIndentWhileEditing:(BOOL)arg1 ;
-(void)setAccessoryView:(id)arg1 ;
-(id)accessoryView;
-(void)_setAccessoryTintColor:(id)arg1 ;
-(id)_accessoryTintColor;
-(void)setEditingAccessoryType:(int)arg1 ;
-(void)setEditingAccessoryView:(id)arg1 ;
-(id)editingAccessoryView;
-(void)setHidesAccessoryWhenEditing:(BOOL)arg1 ;
-(BOOL)hidesAccessoryWhenEditing;
-(void)setIndentationWidth:(float)arg1 ;
-(void)setClipsContents:(BOOL)arg1 ;
-(BOOL)clipsContents;
-(CGRect)editRectForBounds:(CGRect)arg1 ;
-(void)setEditAction:(SEL)arg1 ;
-(SEL)editAction;
-(void)setAccessoryAction:(SEL)arg1 ;
-(SEL)accessoryAction;
-(CGRect)contentRectForState:(unsigned)arg1 ;
-(id)_detailTextLabel:(BOOL)arg1 ;
-(id)_editableTextField:(BOOL)arg1 ;
-(id)_imageView:(BOOL)arg1 ;
-(id)_badge:(BOOL)arg1 ;
-(void)_setReorderControlImage:(id)arg1 ;
-(id)_reorderControlImage;
-(void)_drawSeparatorInRect:(CGRect)arg1 ;
-(void)_animateFloatingSeparatorForInsertion:(BOOL)arg1 withRowAnimation:(int)arg2 ;
-(void)_animateInnerShadowForInsertion:(BOOL)arg1 withRowAnimation:(int)arg2 ;
-(void)editControlWasClicked:(id)arg1 ;
-(void)deleteConfirmationControlWasClicked:(id)arg1 ;
-(void)deleteConfirmationControlWasCancelled:(id)arg1 ;
-(BOOL)_isReorderable;
-(id)_customAccessoryView:(BOOL)arg1 ;
-(id)_customEditingAccessoryView:(BOOL)arg1 ;
-(id)_backgroundView:(BOOL)arg1 ;
-(id)_topShadowView:(BOOL)arg1 ;
-(BOOL)_hasAccessoryView;
-(BOOL)_hasEditingAccessoryView;
-(SEL)_accessoryAction;
-(BOOL)_shouldSaveOpaqueStateForView:(id)arg1 ;
-(BOOL)_isUsingOldStyleMultiselection;
-(id)_deleteConfirmationView;
-(BOOL)_isDeleteAnimationInProgress;
-(void)setTextFieldOffset:(float)arg1 ;
-(float)textFieldOffset;
-(void)setPlaceHolderValue:(id)arg1 ;
-(void)textFieldDidBecomeFirstResponder:(id)arg1 ;
-(void)setReturnAction:(SEL)arg1 ;
-(SEL)returnAction;
-(BOOL)_separatorDrawsInVibrantLightMode;
-(float)_indexBarWidth;
-(BOOL)_separatorHidden;
-(BOOL)_usesRoundedGroups;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

