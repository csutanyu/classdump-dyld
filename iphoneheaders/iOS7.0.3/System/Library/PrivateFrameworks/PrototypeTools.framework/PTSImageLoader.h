/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PTSImageLoaderDelegate;
@class NSString, ;

@interface PTSImageLoader : NSObject {

	NSString* _path;
	BOOL _loading;
	<PTSImageLoaderDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <PTSImageLoaderDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isLoading) BOOL loading;                                            //@synthesize loading=_loading - In the implementation block
-(void)startLoading;
-(void)setLoading:(BOOL)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)isLoading;
-(void)stopLoading;
-(id)initWithPath:(id)arg1 ;
-(void).cxx_destruct;
@end
