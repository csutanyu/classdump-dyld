/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class ACAccount, NSArray, SLFacebookPostPrivacySetting;

@interface SLFacebookPostPrivacyManager : NSObject {

	ACAccount* _account;
	NSArray* _privacySettings;

}

@property (@dynamic,retain) SLFacebookPostPrivacySetting * privacySetting; 
+(id)baseAudienceButtonImageNameForPrivacySettingType:(int)arg1 ;
-(id)_userDefaultsDict;
-(id)defaultPrivacySetting;
-(id)_privacySettingsFromPrivacyOptionDictionaries:(id)arg1 ;
-(void)_setPrivacySettings:(id)arg1 ;
-(void)_handlePrivacySettingsUpdateResponseWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(id)privacySetting;
-(id)privacySettings;
-(void)setPrivacySetting:(id)arg1 ;
-(void)updatePrivacySettingsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void).cxx_destruct;
@end
