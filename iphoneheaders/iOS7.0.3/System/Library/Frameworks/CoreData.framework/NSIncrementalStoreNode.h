/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject {

	NSManagedObjectID* _objectID;
	unsigned long long _versionNumber;
	id _propertyCache;
	void* _reserved1;

}
+(void)initialize;
-(unsigned)_versionNumber;
-(const id*)knownKeyValuesPointer;
-(id)_snapshot_;
-(id)_propertyCache;
-(id)valueForPropertyDescription:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 fromSQLRow:(id)arg2 ;
-(id)initWithObjectID:(id)arg1 withValues:(id)arg2 version:(unsigned long long)arg3 ;
-(void)updateWithValues:(id)arg1 version:(unsigned long long)arg2 ;
-(void)updateFromSQLRow:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)version;
-(id)objectID;
@end
