/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBControlCenterSectionViewController.h>
#import <NowPlayingArtLockScreen/MPUSystemMediaControlsDelegate.h>

@class MPUSystemMediaControlsViewController;

@interface SBCCMediaControlsSectionController : SBControlCenterSectionViewController <MPUSystemMediaControlsDelegate> {

	MPUSystemMediaControlsViewController* _systemMediaViewController;

}
-(CGSize)contentSizeForOrientation:(int)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)sectionIdentifier;
-(void)systemMediaControlsViewController:(id)arg1 didReceiveTapOnControlType:(int)arg2 ;
@end
