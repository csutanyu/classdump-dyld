/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSEditableTableCell.h>

@class NSString;

@interface PHSettingsNumberCell : PSEditableTableCell {

	NSString* _previouslySavedValue;

}

@property (retain) NSString * previouslySavedValue;              //@synthesize previouslySavedValue=_previouslySavedValue - In the implementation block
-(void)dealloc;
-(id)previouslySavedValue;
-(BOOL)_valueDifferentFromPreviouslySavedValue;
-(void)setPreviouslySavedValue:(id)arg1 ;
-(void)saveNumberValue;
-(void)endEditingAndSave;
@end
