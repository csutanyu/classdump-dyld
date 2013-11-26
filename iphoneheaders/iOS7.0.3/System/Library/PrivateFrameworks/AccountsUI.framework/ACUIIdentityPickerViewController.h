/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccountsUI/AccountsUI-Structs.h>
#import <Preferences/PSListController.h>

@protocol ACUIIdentityPickerViewControllerDelegate;
@class , NSString, NSArray;

@interface ACUIIdentityPickerViewController : PSListController {

	<ACUIIdentityPickerViewControllerDelegate>* _delegate;
	NSString* _property;
	NSArray* _identities;
	NSArray* _emailAddresses;
	BOOL _allowEditing;

}

@property (nonatomic,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
-(id)property;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)_finishedFetchingIdentities:(id)arg1 ;
-(SecIdentityRef)_selectedIdentity;
-(BOOL)_isPropertyEnabled;
-(void)_setValue:(id)arg1 forSwitchSpecifier:(id)arg2 ;
-(id)_valueForSwitchSpecifier:(id)arg1 ;
-(id)_specifiersForIdentities:(id)arg1 ;
-(SecIdentityRef)_identityToAutoselectWithEnabled:(BOOL)arg1 ;
-(void)_setPropertyEnabled:(BOOL)arg1 identity:(SecIdentityRef)arg2 ;
-(void)_updateCell:(id)arg1 selected:(BOOL)arg2 ;
-(BOOL)_allowIdentitySelection;
-(id)_identitySpecifiers;
-(id)specifiers;
-(void).cxx_destruct;
@end
