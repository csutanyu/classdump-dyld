/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileNotes/NotesBackgroundViewDelegate.h>
#import <MobileNotes/NotesStateArchiving.h>

@class NSDictionary;

@interface ResumableViewController : UIViewController <NotesBackgroundViewDelegate, NotesStateArchiving> {

	NSDictionary* _archivedConfiguration;

}
+(void)loadMessageUIIfNecessary;
-(id)initWithArchivedConfiguration:(id)arg1 ;
-(id)archivedConfiguration;
-(void)applyArchivedConfiguration:(id)arg1 ;
-(float)topFadingHeightForBackgroundView:(id)arg1 ;
-(float)bottomFadingHeightForBackgroundView:(id)arg1 ;
-(BOOL)controllerIsInLandscapeMode;
-(id)init;
-(void)viewDidLoad;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void).cxx_destruct;
@end

