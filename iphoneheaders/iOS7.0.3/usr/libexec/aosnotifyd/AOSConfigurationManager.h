/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AOSConfigurationManager : NSObject {

	NSMutableDictionary* _theConfig;
	NSMutableDictionary* _serviceDict;
	BOOL _hasLegacySubscriptions;

}
+(id)sharedInstance;
-(void)_readConfigs;
-(id)urlForRequestType:(id)arg1 ;
-(id)serviceProperty:(id)arg1 forServiceName:(id)arg2 ;
-(BOOL)hasLegacySubscriptions;
-(void)removeLegacySubscriptions;
-(void)_readDefaultsPlistConfiguration:(id)arg1 intoConfiguration:(id)arg2 ;
-(void)_readLocalDefaultsIntoConfig:(id)arg1 ;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void).cxx_destruct;
@end

