/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MessageUI/MFMessageBodyParser.h>

@class NSScanner;

@interface MFMessageBodyHTMLParser : MFMessageBodyParser {

	NSScanner* _scanner;

}
-(BOOL)parse;
-(int)messageBodyStringAccumulatorDefaultOptions;
-(Class)messageBodyElementClass;
-(void)didFindError:(id)arg1 ;
-(void)_findBody;
-(void)_consumeNodesFromNode:(id)arg1 upToNode:(id)arg2 ;
-(BOOL)_isMilestoneTagName:(id)arg1 ;
-(id)initWithHTML:(id)arg1 ;
-(void)dealloc;
@end
