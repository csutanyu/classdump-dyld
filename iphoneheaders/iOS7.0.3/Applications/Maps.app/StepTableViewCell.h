/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, MNSimpleSignView, VKShieldArtwork, MNJunction, UIImage, NSString;

@interface StepTableViewCell : UITableViewCell {

	UILabel* _distanceLabel;
	UILabel* _instructionsLabel;
	MNSimpleSignView* _sign;
	VKShieldArtwork* _shieldArtwork;
	int _maneuverType;
	MNJunction* _junction;
	UIImage* _shieldImage;

}

@property (nonatomic,copy) NSString * distanceText; 
@property (nonatomic,copy) NSString * instructionsText; 
@property (assign,nonatomic) int maneuverType;                             //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,retain) MNJunction * junction;                        //@synthesize junction=_junction - In the implementation block
@property (nonatomic,retain) UIImage * shieldImage;                        //@synthesize shieldImage=_shieldImage - In the implementation block
@property (nonatomic,retain) VKShieldArtwork * shieldArtwork;              //@synthesize shieldArtwork=_shieldArtwork - In the implementation block
+(void)getDistanceText:(id*)arg1 instructionsText:(id*)arg2 fromStep:(id)arg3 route:(id)arg4 ;
+(float)heightForWidth:(float)arg1 distanceText:(id)arg2 instructionsText:(id)arg3 ;
+(float)_instructionsHeightForWidth:(float)arg1 text:(id)arg2 ;
+(float)_distanceHeightForWidth:(float)arg1 text:(id)arg2 ;
+(id)_instructionsFont;
+(id)_distanceFont;
-(id)shieldImage;
-(void)setJunction:(id)arg1 ;
-(void)setShieldImage:(id)arg1 ;
-(id)junction;
-(id)_distanceLabel;
-(void)setDistanceText:(id)arg1 ;
-(id)distanceText;
-(void)setInstructionsText:(id)arg1 ;
-(void)setStep:(id)arg1 fromRoute:(id)arg2 response:(id)arg3 ;
-(id)_sign;
-(id)instructionsText;
-(void)_updateSignAppearance;
-(id)shieldArtwork;
-(void)setShieldArtwork:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setAccessoryType:(int)arg1 ;
-(int)maneuverType;
-(void)setManeuverType:(int)arg1 ;
-(id)_instructionsLabel;
@end

