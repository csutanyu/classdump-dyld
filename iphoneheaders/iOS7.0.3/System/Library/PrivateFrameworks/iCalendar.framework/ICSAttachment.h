/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSAttachment : ICSProperty

@property (retain) NSString * fmtype; 
@property (retain) NSString * managed_id; 
@property (retain) NSString * managed_filename; 
@property (assign) int size; 
@property (assign) BOOL x_apple_autoarchived; 
@property (retain) NSString * x_apple_filename; 
@property (retain) NSString * x_apple_ews_attachmentid; 
-(id)fmtype;
-(void)setFmtype:(id)arg1 ;
-(void)setX_apple_filename:(id)arg1 ;
-(int)size;
-(void)setData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setSize:(int)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isBinary;
-(id)filename;
-(void)_ICSStringWithOptions:(unsigned)arg1 appendingToString:(id)arg2 ;
-(id)managed_filename;
-(id)x_apple_filename;
-(id)managed_id;
-(void)setManaged_id:(id)arg1 ;
-(BOOL)x_apple_autoarchived;
-(void)setX_apple_autoarchived:(BOOL)arg1 ;
-(void)setManaged_filename:(id)arg1 ;
-(id)x_apple_ews_attachmentid;
-(void)setX_apple_ews_attachmentid:(id)arg1 ;
@end

