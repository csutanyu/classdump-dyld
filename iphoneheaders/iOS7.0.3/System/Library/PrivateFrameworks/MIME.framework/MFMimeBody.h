/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFMessageBody.h>

@class MFMimePart;

@interface MFMimeBody : MFMessageBody {

	MFMimePart* _topLevelPart;
	unsigned _preferredAlternative : 16;
	unsigned _numAlternatives : 16;

}
+(id)versionString;
+(id)copyNewMimeBoundary;
-(void)setPreferredAlternative:(int)arg1 ;
-(unsigned)totalTextSize;
-(unsigned)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)mimeType;
-(BOOL)isRich;
-(id)preferredBodyPart;
-(int)preferredAlternative;
-(id)mimeSubtype;
-(id)firstPartPassingTest:(/*^block*/ id)arg1 ;
-(void)setTopLevelPart:(id)arg1 ;
-(id)topLevelPart;
-(id)attachmentURLs;
-(id)textHtmlPart;
-(BOOL)isHTML;
-(id)attachments;
-(id)contentToOffset:(unsigned)arg1 resultOffset:(unsigned*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(id)partWithNumber:(id)arg1 ;
-(int)numberOfAlternatives;
@end

