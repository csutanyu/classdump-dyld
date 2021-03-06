/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary, NSString, SSDialogButton, NSDictionary;

@interface SSDialog : NSObject {

	NSArray* _buttons;
	NSMutableDictionary* _dialogDictionary;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSArray * buttons; 
@property (nonatomic,retain) SSDialogButton * defaultButton; 
@property (nonatomic,readonly) NSDictionary * dialogDictionary; 
@property (nonatomic,readonly) NSString * dialogKind; 
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)message;
-(id)defaultButton;
-(void)setDefaultButton:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)buttons;
-(id)valueForProperty:(id)arg1 ;
-(id)dialogKind;
-(id)initWithDialogDictionary:(id)arg1 ;
-(void)setButtons:(id)arg1 ;
-(id)dialogDictionary;
@end

