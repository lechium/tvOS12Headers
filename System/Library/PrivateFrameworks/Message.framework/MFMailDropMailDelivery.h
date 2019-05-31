/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:51 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOutgoingMessageDelivery.h>

@class NSArray, MFMailDropMetadata;

@interface MFMailDropMailDelivery : MFOutgoingMessageDelivery {

	NSArray* _attachments;
	MFMailDropMetadata* _imageArchiveMetadata;
	long long _mailDropState;

}

@property (nonatomic,retain) NSArray * attachments;                                  //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) MFMailDropMetadata * imageArchiveMetadata;              //@synthesize imageArchiveMetadata=_imageArchiveMetadata - In the implementation block
@property (assign,nonatomic) long long mailDropState;                                //@synthesize mailDropState=_mailDropState - In the implementation block
+(id)_mailDropZone;
-(id)_attachmentManager;
-(id)deliverSynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(long long)_processAttachments;
-(BOOL)_uploadAttachmentsViaCloudKit:(id)arg1 zone:(id)arg2 records:(id)arg3 zippedPhotos:(id)arg4 attachmentRecords:(id)arg5 images:(id)arg6 ;
-(id)scaledImages:(id)arg1 ;
-(void)_recordZoneIDInDatabase:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)updateMessageWithAttachmentsSynchronously;
-(MFMailDropMetadata *)imageArchiveMetadata;
-(void)setImageArchiveMetadata:(MFMailDropMetadata *)arg1 ;
-(id)_publishRecord:(id)arg1 database:(id)arg2 attachmentRecords:(id)arg3 images:(id)arg4 allowsCellularAccess:(BOOL)arg5 ;
-(long long)mailDropState;
-(void)setMailDropState:(long long)arg1 ;
-(void)dealloc;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
@end

