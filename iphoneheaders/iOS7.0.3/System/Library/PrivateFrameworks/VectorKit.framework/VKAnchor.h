/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKAnchor : NSObject {

	shared_ptr<vk::Anchor>* _anchor;

}

@property (nonatomic,readonly) BOOL isMercator; 
@property (nonatomic,readonly) BOOL isGeocentric; 
@property (nonatomic,readonly) BOOL followsTerrain; 
@property (nonatomic,readonly) VKPoint worldPoint; 
@property (nonatomic,readonly) VKPoint mercatorPoint; 
@property (assign,nonatomic) SCD_Struct_VK61 coordinate; 
@property (assign,nonatomic) <VKAnchorDelegate> * delegate; 
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id).cxx_construct;
-(SCD_Struct_VK61)coordinate;
-(void)setCoordinate:(SCD_Struct_VK61)arg1 ;
-(VKPoint)worldPoint;
-(BOOL)isMercator;
-(BOOL)isGeocentric;
-(BOOL)followsTerrain;
-(int)worldIndexWithContext:(id)arg1 ;
-(id)initWithAnchor:(shared_ptr<vk::Anchor>*)arg1 ;
-(void)worldPointDidChange;
-(void)setMercatorPoint:(VKPoint)arg1 ;
-(VKPoint)mercatorPoint;
-(void).cxx_destruct;
@end

