/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>
#import <CoreFoundation/NSCopying.h>

@class UIColor, SKUIColorScheme;

@interface SKUINewsstandImageDataConsumer : SKUIImageDataConsumer <NSCopying> {

	UIColor* _backgroundColor;
	SKUIColorScheme* _colorScheme;
	CGSize _iconSize;
	int _bindingEdge;
	int _bindingType;

}

@property (nonatomic,readonly) CGSize iconSize;                          //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) int bindingEdge;                            //@synthesize bindingEdge=_bindingEdge - In the implementation block
@property (assign,nonatomic) int bindingType;                            //@synthesize bindingType=_bindingType - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
+(id)smartBannerConsumer;
+(id)cardConsumer;
+(id)consumerWithSize:(CGSize)arg1 ;
+(id)giftComposeConsumer;
+(id)giftResultConsumer;
+(id)giftThemeConsumer;
+(id)lockupConsumerWithSize:(int)arg1 ;
+(id)chartsConsumer;
+(id)mixedChartsConsumer;
+(id)roomConsumer;
+(id)wishlistConsumer;
+(id)productPageConsumer;
+(id)newsstandRoomConsumer;
+(id)swooshConsumer;
+(id)newsstandSwooshConsumer;
+(id)updatesConsumer;
+(id)purchasedConsumer;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)_borderImage;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(id)imageForColor:(id)arg1 ;
-(CGSize)iconSize;
-(id)imageForSize:(CGSize)arg1 ;
-(int)bindingEdge;
-(void)setBindingEdge:(int)arg1 ;
-(int)bindingType;
-(void)setBindingType:(int)arg1 ;
-(void).cxx_destruct;
@end

