/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActionSheet.h>

@interface RUTrackActionSheet : UIActionSheet {

	BOOL _disableAddToWishList;
	BOOL _disableBan;
	BOOL _disableLike;

}

@property (assign,nonatomic) BOOL disableAddToWishList;              //@synthesize disableAddToWishList=_disableAddToWishList - In the implementation block
@property (assign,nonatomic) BOOL disableBan;                        //@synthesize disableBan=_disableBan - In the implementation block
@property (assign,nonatomic) BOOL disableLike;                       //@synthesize disableLike=_disableLike - In the implementation block
-(id)initWithDelegate:(id)arg1 ;
-(void)setDisableAddToWishList:(BOOL)arg1 ;
-(void)setDisableBan:(BOOL)arg1 ;
-(void)setDisableLike:(BOOL)arg1 ;
-(BOOL)disableAddToWishList;
-(BOOL)disableBan;
-(BOOL)disableLike;
@end

