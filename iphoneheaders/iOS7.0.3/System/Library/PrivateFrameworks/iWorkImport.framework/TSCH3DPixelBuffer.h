/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DPixelBuffer : NSObject {

	tvec2<int> mSize;
	unsigned mComponents;
	CGContextRef mBitmapContext;

}

@property (nonatomic,readonly) tvec2<int> size; 
@property (nonatomic,readonly) unsigned components; 
@property (nonatomic,readonly) char* buffer; 
@property (nonatomic,readonly) CGContextRef context; 
+(id)pixelBufferFromGLViewport:(const box<glm::detail::tvec2<int> >*)arg1 components:(unsigned)arg2 flipped:(BOOL)arg3 ;
+(id)pixelBufferWithSize:(const tvec2<int>*)arg1 components:(unsigned)arg2 ;
-(id)initWithSize:(const tvec2<int>*)arg1 components:(unsigned)arg2 ;
-(void)copyPixelsFromGLViewport:(const box<glm::detail::tvec2<int> >*)arg1 targetRegion:(const box<glm::detail::tvec2<int> >*)arg2 flipped:(BOOL)arg3 ;
-(id)TSUImage;
-(void)copyPixelsFromData:(const void*)arg1 ;
-(void)dealloc;
-(tvec2<int>)size;
-(void*)data;
-(CGContextRef)context;
-(id).cxx_construct;
-(void)flip;
-(unsigned)components;
-(char*)buffer;
@end

