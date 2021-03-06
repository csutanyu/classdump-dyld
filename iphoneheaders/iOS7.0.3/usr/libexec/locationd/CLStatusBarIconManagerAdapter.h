/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <CoreMotion/CLIntersiloService.h>
#import <locationd/CLStatusBarIconManagerProtocol.h>

@interface CLStatusBarIconManagerAdapter : CLIntersiloService <CLStatusBarIconManagerProtocol> {

	CLStatusBarIconManager* _manager;

}

@property (assign,nonatomic) CLStatusBarIconManager* manager;              //@synthesize manager=_manager - In the implementation block
+(id)getSilo;
-(int)syncgetIconState;
-(void)setStatusBarIconForEntityClass:(int)arg1 visible:(BOOL)arg2 ;
-(BOOL)syncgetStatusBarIconForEntityClass:(int)arg1 ;
-(id)initInSilo:(id)arg1 ;
-(void)heartAttack;
-(void)beginService;
-(void)endService;
-(CLStatusBarIconManager*)manager;
-(void)setManager:(CLStatusBarIconManager*)arg1 ;
@end

