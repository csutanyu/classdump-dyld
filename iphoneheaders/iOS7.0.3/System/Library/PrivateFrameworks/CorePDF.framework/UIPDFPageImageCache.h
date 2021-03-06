/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class UIPDFDocument, NSOperationQueue;

@interface UIPDFPageImageCache : NSObject {

	UIPDFDocument* _document;
	unsigned _lookAhead;
	unsigned _jobCount;
	id* _jobsPrioritized;
	unsigned _nextJobIndex;
	unsigned _pageCount;
	id* _jobsByPage;
	NSOperationQueue* _renderQueue;
	int _lock;

}

@property (readonly) UIPDFDocument * document;              //@synthesize document=_document - In the implementation block
@property (readonly) unsigned pageCount;                    //@synthesize pageCount=_pageCount - In the implementation block
@property (readonly) unsigned lookAhead;                    //@synthesize lookAhead=_lookAhead - In the implementation block
-(void)dealloc;
-(unsigned)pageCount;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(id)initWithDocument:(id)arg1 cacheCount:(unsigned)arg2 lookAhead:(unsigned)arg3 ;
-(id)getImageIfAvailableForPage:(unsigned)arg1 ;
-(void)deliverImageOfPage:(unsigned)arg1 maxSize:(CGSize)arg2 quality:(BOOL*)arg3 receiver:(id)arg4 selector:(SEL)arg5 info:(id)arg6 ;
-(void)addRenderJob:(id)arg1 ;
-(void)cacheImageOfPage:(unsigned)arg1 maxSize:(CGSize)arg2 ;
-(void)cancelPendingRenderOperations;
-(void)cancelPendingRenderOperationsForTarget:(id)arg1 ;
-(unsigned)lookAhead;
-(void)clearCache;
@end

