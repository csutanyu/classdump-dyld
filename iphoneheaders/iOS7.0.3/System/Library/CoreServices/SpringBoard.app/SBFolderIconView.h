/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconView.h>
#import <UIKit/_UISettingsKeyObserver.h>

@class SBFolderSettings;

@interface SBFolderIconView : SBIconView <_UISettingsKeyObserver> {

	SBFolderSettings* _folderSettings;

}
+(BOOL)canShowUpdatedMark;
-(void)prepareDropGlow;
-(void)showDropGlow:(BOOL)arg1 ;
-(void)removeDropGlow;
-(id)dropGlow;
-(CGRect)frameForMiniIconAtIndex:(unsigned)arg1 ;
-(id)iconBackgroundView;
-(id)folderIcon;
-(void)scrollToFirstGapAnimated:(BOOL)arg1 ;
-(unsigned)firstVisibleMiniIconIndex;
-(void)scrollToTopOfFirstPageAnimated:(BOOL)arg1 ;
-(void)setBackgroundAndIconGridImageAlpha:(float)arg1 ;
-(void)scrollToTopOfPage:(unsigned)arg1 animated:(BOOL)arg2 ;
-(unsigned)visibleMiniIconCount;
-(void)setFloatyFolderCrossfadeFraction:(float)arg1 ;
-(void)scrollToGapOrTopIfFullOfPage:(unsigned)arg1 animated:(BOOL)arg2 ;
-(unsigned)visibleMiniIconListIndex;
-(unsigned)centerVisibleMiniIconIndex;
-(unsigned)lastVisibleMiniIconIndex;
-(CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned)arg1 ;
-(void)setIconGridImageAlpha:(float)arg1 ;
-(void)setSuppressesBlurryBackgroundChanges:(BOOL)arg1 ;
-(void)prepareToCrossfadeWithFloatyFolderView:(id)arg1 allowFolderInteraction:(BOOL)arg2 ;
-(void)cleanupAfterFloatyFolderCrossfade;
-(void)_updateAdaptiveColors;
-(double)grabDurationForEvent:(id)arg1 ;
-(BOOL)allowsTapWhileEditing;
-(void)_applyEditingStateAnimated:(BOOL)arg1 ;
-(id)_folderIconImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setIcon:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)folder;
@end

