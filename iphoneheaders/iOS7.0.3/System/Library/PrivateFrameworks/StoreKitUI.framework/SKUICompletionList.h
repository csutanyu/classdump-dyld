/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUICacheCoding.h>

@class NSArray, NSString, NSMutableDictionary;

@interface SKUICompletionList : NSObject <SKUICacheCoding> {

	NSArray* _completions;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * completions;                                  //@synthesize completions=_completions - In the implementation block
@property (nonatomic,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(id)title;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)cacheRepresentation;
-(id)completions;
-(id)initWithCompletionListDictionary:(id)arg1 ;
-(void).cxx_destruct;
@end

