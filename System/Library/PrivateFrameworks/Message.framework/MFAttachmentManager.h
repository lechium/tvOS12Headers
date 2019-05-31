/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSLock;

@interface MFAttachmentManager : NSObject {

	NSObject*<OS_dispatch_queue> _arrayAccessQueue;
	NSMutableDictionary* _providers;
	NSMutableDictionary* _attachments;
	NSMutableDictionary* _metadata;
	NSLock* _metaDataLock;
	NSObject*<OS_dispatch_queue> _imageScalingQueue;

}
+(id)allManagers;
+(id)supportedDocumentUTIs;
+(id)defaultManager;
-(void)removeProvider:(id)arg1 ;
-(void)removeAttachmentForURL:(id)arg1 ;
-(void)clearMetadataForAttachment:(id)arg1 ;
-(void)removeProviderForBaseURL:(id)arg1 ;
-(id)attachmentsForContext:(id)arg1 ;
-(id)_dataProviderForAttachmentURL:(id)arg1 error:(id*)arg2 ;
-(void)_fetchCompletedForAttachment:(id)arg1 error:(id)arg2 ;
-(id)attachmentForURL:(id)arg1 error:(id*)arg2 ;
-(void)addProvider:(id)arg1 forBaseURL:(id)arg2 ;
-(void)setContentID:(id)arg1 forAttachment:(id)arg2 ;
-(id)attachmentForCID:(id)arg1 ;
-(id)attachmentForData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5 ;
-(id)_fetchDataForAttachment:(id)arg1 withProvider:(id)arg2 syncLock:(id*)arg3 ;
-(void)loadAttachmentURL:(id)arg1 forContextID:(id)arg2 ;
-(BOOL)updateAttachment:(id)arg1 withNewData:(id)arg2 ;
-(void)recordPasteboardAttachmentsForURLs:(id)arg1 forContextID:(id)arg2 ;
-(void)recordUndoAttachmentsForURLs:(id)arg1 forContextID:(id)arg2 ;
-(id)attachmentForURL:(id)arg1 withMimeBody:(id)arg2 error:(id*)arg3 ;
-(id)metadataForAttachment:(id)arg1 forKey:(id)arg2 ;
-(void)setMetadataForAttachment:(id)arg1 toValue:(id)arg2 forKey:(id)arg3 ;
-(void)fetchDataForAttachment:(id)arg1 ;
-(void)fetchDataSynchronouslyForAttachment:(id)arg1 ;
-(void)cancelFetchForAttachment:(id)arg1 ;
-(id)_filePathForAttachment:(id)arg1 ;
-(id)_contentIDForAttachment:(id)arg1 ;
-(id)attachmentsForURLs:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setupAttachment:(id)arg1 withMimeBody:(id)arg2 error:(id*)arg3 ;
-(id)attachmentForContentID:(id)arg1 preferredSchemes:(id)arg2 ;
-(id)imageScalingQueue;
-(id)attachmentForTextAttachment:(id)arg1 error:(id*)arg2 ;
-(id)attachmentForContentID:(id)arg1 ;
-(void)fetchDataForAttachment:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
@end

