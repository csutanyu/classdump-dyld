/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@class NSManagedObject, NSString, NSMutableSet;

@interface _NSNotifyingWrapperMutableSet : NSMutableSet {

	NSManagedObject* _container;
	NSString* _key;
	NSMutableSet* _mutableSet;

}
-(void)getObjects:(id*)arg1 ;
-(void)setSet:(id)arg1 ;
-(id)objectsWithOptions:(unsigned)arg1 passingTest:(/*^block*/ id)arg2 ;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)initWithContainer:(id)arg1 key:(id)arg2 mutableSet:(id)arg3 ;
-(void)dealloc;
-(void)removeObject:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(id)description;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(id)anyObject;
-(void)intersectSet:(id)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)minusSet:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)objectEnumerator;
-(id)valueForKeyPath:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(id)allObjects;
-(BOOL)isEqualToSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(id)member:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
@end

