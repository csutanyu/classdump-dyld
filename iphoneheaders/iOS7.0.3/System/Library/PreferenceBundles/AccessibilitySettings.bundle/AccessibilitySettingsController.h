/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UISlider, UIActionSheet, UIAlertView;

@interface AccessibilitySettingsController : PSListController <UIActionSheetDelegate, UIAlertViewDelegate> {

	BOOL _didConfirmDisabling;
	int _ignoreNextAXNotificationCount;
	UISlider* _leftRightSlider;
	UIActionSheet* _restartActionSheet;
	UIAlertView* _restartAlertView;

}
-(id)scatEnabled:(id)arg1 ;
-(id)handEnabled:(id)arg1 ;
-(id)homeClickSpeed:(id)arg1 ;
-(BOOL)confirmDisablingWithString:(id)arg1 forKey:(id)arg2 ;
-(void)_orientationChange:(id)arg1 ;
-(void)_handleCancelForBoldText;
-(void)_handleRestartForBoldText;
-(void)_handleInvertColorsEnabled:(BOOL)arg1 ;
-(id)voiceOverTouchEnabled:(id)arg1 ;
-(void)_handleSpeakCorrectionsEnabled:(BOOL)arg1 ;
-(void)_handleMonoAudioEnabled:(BOOL)arg1 ;
-(void)_showTextLegibilityMenuToRestart;
-(void)_enableAXInspector;
-(void)handleReloadSpecifiers;
-(void)setAXInspectorEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)accessibilityLargeFontStatus:(id)arg1 ;
-(id)largeFontsStatus:(id)arg1 ;
-(id)accessibilityPreferenceForSpecifier:(id)arg1 ;
-(void)accessibilitySetPreference:(id)arg1 specifier:(id)arg2 ;
-(id)zoomTouchEnabled:(id)arg1 ;
-(id)largerTextEnabled:(id)arg1 ;
-(id)guidedAccessEnabled:(id)arg1 ;
-(id)quickSpeakEnabled:(id)arg1 ;
-(id)tripleClickStatus:(id)arg1 ;
-(id)AXInspectorEnabled:(id)arg1 ;
-(void)disableOption:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)actionSheetCancel:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifierForKey:(id)arg1 ;
-(id)specifiers;
@end
