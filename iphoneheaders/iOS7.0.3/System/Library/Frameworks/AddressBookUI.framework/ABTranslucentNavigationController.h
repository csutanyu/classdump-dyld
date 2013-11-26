/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UINavigationController.h>

@protocol ABStyleProvider;
@class ;

@interface ABTranslucentNavigationController : UINavigationController {

	BOOL _overridesNavigationBarInset;
	<ABStyleProvider>* _styleProvider;

}

@property (assign,nonatomic) BOOL overridesNavigationBarInset;               //@synthesize overridesNavigationBarInset=_overridesNavigationBarInset - In the implementation block
@property (nonatomic,retain) <ABStyleProvider> * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(BOOL)overridesNavigationBarInset;
-(void)setOverridesNavigationBarInset:(BOOL)arg1 ;
-(BOOL)_shouldNavigationBarInsetViewController:(id)arg1 ;
@end
