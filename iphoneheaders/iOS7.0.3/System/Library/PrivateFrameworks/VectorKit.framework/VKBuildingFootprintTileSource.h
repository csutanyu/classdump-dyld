/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorTileSource.h>

@interface VKBuildingFootprintTileSource : VKVectorTileSource {

	int _minimumZoomLevel;
	BOOL _makeFacades;

}

@property (assign,nonatomic) BOOL makeFacades;              //@synthesize makeFacades=_makeFacades - In the implementation block
-(int)minimumZoomLevel;
-(id)initWithTileSet:(id)arg1 ;
-(void)setMinimumZoomLevel:(unsigned)arg1 ;
-(void)setMakeFacades:(BOOL)arg1 ;
-(BOOL)minimumZoomLevelBoundsCamera;
-(BOOL)maximumZoomLevelBoundsCamera;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(unsigned)mapLayerForZoomLevelRange;
-(BOOL)makeFacades;
@end
