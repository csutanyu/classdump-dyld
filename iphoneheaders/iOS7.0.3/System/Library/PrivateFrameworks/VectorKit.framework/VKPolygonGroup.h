/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class VKStyle, VKVectorTile, VGLMeshVendor, VGLTexture, GEOFeatureStyleAttributes;

@interface VKPolygonGroup : NSObject {

	VKStyle* _style;
	VKVectorTile* _tile;
	VGLMeshVendor* _fillMeshVendor;
	VGLMeshVendor* _strokeMeshVendor;
	float _contentScale;
	VGLTexture* _texture;
	VGLTexture* _textureVariant;
	float _variation;
	GEOFeatureStyleAttributes* _styleAttributes;

}

@property (nonatomic,readonly) VGLTexture * texture;                                   //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) VKStyle * style;                                        //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) VGLMeshVendor * strokeMeshVendor;                       //@synthesize strokeMeshVendor=_strokeMeshVendor - In the implementation block
@property (nonatomic,readonly) VGLMeshVendor * fillMeshVendor;                         //@synthesize fillMeshVendor=_fillMeshVendor - In the implementation block
@property (nonatomic,readonly) VGLTexture * textureVariant;                            //@synthesize textureVariant=_textureVariant - In the implementation block
@property (nonatomic,retain) GEOFeatureStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
-(void)dealloc;
-(id)style;
-(id)texture;
-(unsigned)triangleCount;
-(id)initWithStyle:(id)arg1 tile:(id)arg2 attributes:(id)arg3 contentScale:(float)arg4 ;
-(id)fillMeshVendor;
-(id)strokeMeshVendor;
-(id)_textureForName:(id)arg1 scale:(float)arg2 ;
-(void)updateTextures;
-(id)textureVariant;
-(id)styleAttributes;
-(void)setStyleAttributes:(id)arg1 ;
@end

