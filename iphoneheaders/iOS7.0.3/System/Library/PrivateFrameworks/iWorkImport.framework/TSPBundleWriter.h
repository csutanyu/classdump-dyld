/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPPackageWriter.h>

@protocol TSPPackage, TSPComponentWriteChannel, OS_dispatch_queue;
@class NSURL, SFUCryptoKey, TSUZipFileWriter, NSObject, NSError, TSPBundle, TSUPathSet;

@interface TSPBundleWriter : NSObject <TSPPackageWriter> {

	NSURL* _URL;
	SFUCryptoKey* _encryptionKey;
	<TSPPackage>* _originalDocumentPackage;
	<TSPPackage>* _originalSupportPackage;
	TSUZipFileWriter* _objectArchiveWriter;
	<TSPComponentWriteChannel>* _componentWriteChannel;
	NSObject<OS_dispatch_queue>* _errorQueue;
	NSError* _error;
	TSPBundle* _writtenBundle;
	BOOL _isClosed;
	TSUPathSet* _dataPathSet;
	BOOL _obscureAssetFilenames;
	NSURL* _documentTargetURL;
	NSURL* _relativeURLForExternalData;

}

@property (assign,nonatomic) BOOL obscureAssetFilenames;                        //@synthesize obscureAssetFilenames=_obscureAssetFilenames - In the implementation block
@property (nonatomic,readonly) NSURL * documentTargetURL;                       //@synthesize documentTargetURL=_documentTargetURL - In the implementation block
@property (nonatomic,readonly) NSURL * relativeURLForExternalData;              //@synthesize relativeURLForExternalData=_relativeURLForExternalData - In the implementation block
-(void)closeWithQueue:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)relativeURLForExternalData;
-(id)initWithURL:(id)arg1 documentTargetURL:(id)arg2 relativeURLForExternalData:(id)arg3 packageIdentifier:(unsigned char)arg4 encryptionKey:(id)arg5 originalDocumentPackage:(id)arg6 originalSuppportPackage:(id)arg7 fileCoordinatorDelegate:(id)arg8 error:(id*)arg9 ;
-(id)writtenPackage;
-(BOOL)writeData:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 ;
-(id)dataFilenameForPreferredFilename:(id)arg1 ;
-(BOOL)obscureAssetFilenames;
-(id)newComponentWriteChannelWithPackageLocator:(id)arg1 storeOutsideObjectArchive:(BOOL)arg2 ;
-(void)copyComponent:(id)arg1 locator:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(BOOL)addData:(id)arg1 infoMessage:(DataInfo*)arg2 saveOperationState:(id)arg3 ;
-(id)documentTargetURL;
-(id)linkOrCopyDataFromURL:(id)arg1 decryptionKey:(id)arg2 preferredFilename:(id)arg3 ;
-(void)setObscureAssetFilenames:(BOOL)arg1 ;
-(void)dealloc;
-(void).cxx_destruct;
@end

