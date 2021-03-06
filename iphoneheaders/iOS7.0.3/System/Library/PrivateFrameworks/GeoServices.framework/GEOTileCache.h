/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <GeoServices/GeoServices-Structs.h>
@class GEOTileCacheReserved, NSObject;

@interface GEOTileCache : NSObject {

	GEOTileCacheReserved* _reserved;
	NSObject<OS_dispatch_source>* _memoryNotificationEventSource;

}

@property (assign) unsigned maxCapacity; 
@property (assign) unsigned maxCost; 
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(void)_receivedMemoryNotification;
-(id)_description;
-(void)setMaxCapacity:(unsigned)arg1 ;
-(void)setMaxCost:(unsigned)arg1 ;
-(BOOL)containsKey:(const GEOTileKey*)arg1 cost:(unsigned*)arg2 ;
-(void)removeTilesMatchingPredicate:(/*^block*/ id)arg1 ;
-(void)setTile:(id)arg1 forKey:(const GEOTileKey*)arg2 cost:(unsigned)arg3 ;
-(void)_enteredBackground:(id)arg1 ;
-(void)_evictWithMaxCost:(unsigned)arg1 maxCapacity:(unsigned)arg2 ;
-(void)_removeTileForKey:(const GEOTileKey*)arg1 ;
-(void)enumerate:(/*^block*/ id)arg1 ;
-(unsigned)maxCapacity;
-(unsigned)maxCost;
-(void)setNullForKey:(const GEOTileKey*)arg1 ;
-(void)removeTileForKey:(const GEOTileKey*)arg1 ;
-(void)removeTilesWithKeys:(id)arg1 ;
-(id)tileForKey:(const GEOTileKey*)arg1 ;
@end

