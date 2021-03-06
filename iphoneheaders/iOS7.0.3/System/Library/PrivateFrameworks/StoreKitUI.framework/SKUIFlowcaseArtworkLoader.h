/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIArtworkRequestDelegate.h>

@protocol OS_dispatch_queue;
@class SKUIResourceLoader, NSObject, SKUIFlowcaseViewController, NSMapTable, SKUIFlowcaseImageDataConsumer, UIImage;

@interface SKUIFlowcaseArtworkLoader : NSObject <SKUIArtworkRequestDelegate> {

	SKUIResourceLoader* _artworkLoader;
	NSObject<OS_dispatch_queue>* _backgroundQueue;
	SKUIFlowcaseViewController* _flowcaseViewController;
	NSMapTable* _landscapeArtworkRequestIDs;
	SKUIFlowcaseImageDataConsumer* _landscapeConsumer;
	UIImage* _landscapePlaceholderImage;
	NSMapTable* _portraitArtworkRequestIDs;
	SKUIFlowcaseImageDataConsumer* _portraitConsumer;
	UIImage* _portraitPlaceholderImage;
	NSMapTable* _outstandingArtworkRequests;

}

@property (nonatomic,readonly) SKUIResourceLoader * artworkLoader;                               //@synthesize artworkLoader=_artworkLoader - In the implementation block
@property (nonatomic,readonly) SKUIFlowcaseViewController * flowcaseViewController;              //@synthesize flowcaseViewController=_flowcaseViewController - In the implementation block
-(void)prefetchResourcesWithReason:(int)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(BOOL)loadImageForItem:(id)arg1 reason:(int)arg2 ;
-(id)artworkLoader;
-(void)_cutOrientationImagesWithItem:(id)arg1 image:(id)arg2 ;
-(void)_setLandscapeImage:(id)arg1 portraitImage:(id)arg2 forItem:(id)arg3 ;
-(id)initWithArtworkLoader:(id)arg1 flowcase:(id)arg2 ;
-(id)cachedImageForItem:(id)arg1 orientation:(int)arg2 ;
-(id)placeholderImageForOrientation:(int)arg1 ;
-(id)flowcaseViewController;
-(void).cxx_destruct;
@end

