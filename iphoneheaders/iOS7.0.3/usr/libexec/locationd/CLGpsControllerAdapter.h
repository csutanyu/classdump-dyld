/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <locationd/CLLocationProviderAdapter.h>
#import <locationd/CLGpsControllerProtocol.h>

@interface CLGpsControllerAdapter : CLLocationProviderAdapter <CLGpsControllerProtocol>
+(id)getSilo;
-(id)initInSilo:(id)arg1 ;
-(void)heartAttack;
-(void)beginService;
-(void)endService;
@end
