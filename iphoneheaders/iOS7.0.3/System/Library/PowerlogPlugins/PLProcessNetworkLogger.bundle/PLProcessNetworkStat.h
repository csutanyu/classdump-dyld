/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLProcessNetworkLogger.bundle/PLProcessNetworkLogger
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <PLProcessNetworkLogger/PLProcessNetworkLogger-Structs.h>
@class NSDictionary;

@interface PLProcessNetworkStat : NSObject {

	NSDictionary* desc;
	NSDictionary* counts;
	NStatSourceRef source;

}

@property (nonatomic,copy) NSDictionary * desc; 
@property (nonatomic,copy) NSDictionary * counts; 
@property (assign,nonatomic) NStatSourceRef source; 
-(void)dealloc;
-(id)description;
-(NStatSourceRef)source;
-(void)setSource:(NStatSourceRef)arg1 ;
-(id)counts;
-(id)desc;
-(void)setCounts:(id)arg1 ;
-(void)setDesc:(id)arg1 ;
@end

