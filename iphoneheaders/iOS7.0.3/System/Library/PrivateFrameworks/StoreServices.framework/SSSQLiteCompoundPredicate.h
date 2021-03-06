/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSSQLitePredicate.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSArray;

@interface SSSQLiteCompoundPredicate : SSSQLitePredicate <NSCopying> {

	NSString* _combinationOperation;
	NSArray* _predicates;

}

@property (nonatomic,readonly) NSArray * predicates;              //@synthesize predicates=_predicates - In the implementation block
+(id)predicateMatchingAllPredicates:(id)arg1 ;
+(id)predicateMatchingAnyPredicates:(id)arg1 ;
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(int)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)predicates;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
@end

