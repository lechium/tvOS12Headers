/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMCore/IMCore-Structs.h>
@class IMChat, IMPluginPayload, NSURL, DDScannerResult, NSArray, NSMutableSet, NSString, IMMessage, LPLinkMetadata, NSData, NSAttributedString;

@interface IMBalloonPluginDataSource : NSObject {

	BOOL _payloadInShelf;
	BOOL _initialMessageIsFromMe;
	BOOL _isLast;
	BOOL _isShowingLatestMessageAsBreadcrumb;
	BOOL _hasInvalidatedSize;
	BOOL _parentChatHasAllUnknownRecipients;
	BOOL _showingLatestMessageAsBreadcrumb;
	IMChat* _chat;
	IMPluginPayload* _pluginPayload;
	NSURL* _url;
	DDScannerResult* _dataDetectedResult;
	NSArray* _attachmentGUIDs;
	NSURL* _URLToOpenOnTapAction;
	NSArray* _pendingAttachmentData;
	NSMutableSet* _temporaryAttachmentURLs;
	NSString* __imMessageGUID;
	NSString* _messageGUID;
	NSString* _sessionGUID;
	NSString* _bundleID;
	NSArray* _consumedPayloads;
	NSString* _guidOfLastMessageInSession;
	long long _messageIDOfLastMessageInSession;

}

@property (nonatomic,retain) NSURL * url;                                                                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) DDScannerResult * dataDetectedResult;                                                             //@synthesize dataDetectedResult=_dataDetectedResult - In the implementation block
@property (nonatomic,retain) NSArray * attachmentGUIDs;                                                                        //@synthesize attachmentGUIDs=_attachmentGUIDs - In the implementation block
@property (nonatomic,retain) IMPluginPayload * pluginPayload;                                                                  //@synthesize pluginPayload=_pluginPayload - In the implementation block
@property (nonatomic,retain) NSArray * pendingAttachmentData;                                                                  //@synthesize pendingAttachmentData=_pendingAttachmentData - In the implementation block
@property (nonatomic,retain) NSMutableSet * temporaryAttachmentURLs;                                                           //@synthesize temporaryAttachmentURLs=_temporaryAttachmentURLs - In the implementation block
@property (nonatomic,retain) NSString * _imMessageGUID;                                                                        //@synthesize _imMessageGUID=__imMessageGUID - In the implementation block
@property (assign,setter=setShowingLatestMessageAsBreadcrumb:,nonatomic) BOOL isShowingLatestMessageAsBreadcrumb;              //@synthesize isShowingLatestMessageAsBreadcrumb=_isShowingLatestMessageAsBreadcrumb - In the implementation block
@property (nonatomic,retain) NSString * messageGUID;                                                                           //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,retain) NSString * sessionGUID;                                                                           //@synthesize sessionGUID=_sessionGUID - In the implementation block
@property (nonatomic,retain,readonly) NSString * bundleID;                                                                     //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidatedSize;                                                                          //@synthesize hasInvalidatedSize=_hasInvalidatedSize - In the implementation block
@property (assign,nonatomic) BOOL payloadInShelf;                                                                              //@synthesize payloadInShelf=_payloadInShelf - In the implementation block
@property (nonatomic,readonly) IMMessage * imMessage; 
@property (nonatomic,retain) IMChat * chat;                                                                                    //@synthesize chat=_chat - In the implementation block
@property (nonatomic,retain) NSArray * consumedPayloads;                                                                       //@synthesize consumedPayloads=_consumedPayloads - In the implementation block
@property (assign,nonatomic) BOOL initialMessageIsFromMe;                                                                      //@synthesize initialMessageIsFromMe=_initialMessageIsFromMe - In the implementation block
@property (assign,nonatomic) BOOL parentChatHasAllUnknownRecipients;                                                           //@synthesize parentChatHasAllUnknownRecipients=_parentChatHasAllUnknownRecipients - In the implementation block
@property (nonatomic,readonly) LPLinkMetadata * richLinkMetadata; 
@property (nonatomic,retain,readonly) NSData * messagePayloadDataForSending; 
@property (assign,setter=setLast:,nonatomic) BOOL isLast;                                                                      //@synthesize isLast=_isLast - In the implementation block
@property (getter=isShowingLatestMessageAsBreadcrumb,nonatomic,readonly) BOOL showingLatestMessageAsBreadcrumb;                //@synthesize showingLatestMessageAsBreadcrumb=_showingLatestMessageAsBreadcrumb - In the implementation block
@property (nonatomic,retain,readonly) NSString * guidOfLastMessageInSession;                                                   //@synthesize guidOfLastMessageInSession=_guidOfLastMessageInSession - In the implementation block
@property (nonatomic,readonly) long long messageIDOfLastMessageInSession;                                                      //@synthesize messageIDOfLastMessageInSession=_messageIDOfLastMessageInSession - In the implementation block
@property (nonatomic,readonly) BOOL supportsDynamicSize; 
@property (nonatomic,retain) NSData * payload; 
@property (nonatomic,readonly) BOOL wantsStatusItem; 
@property (nonatomic,retain,readonly) NSString * statusString; 
@property (nonatomic,retain,readonly) NSAttributedString * statusAttributedString; 
@property (nonatomic,readonly) BOOL wantsReplyFromContentView; 
@property (nonatomic,readonly) NSURL * URLToOpenOnTapAction;                                                                   //@synthesize URLToOpenOnTapAction=_URLToOpenOnTapAction - In the implementation block
@property (nonatomic,readonly) NSArray * allPayloads; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL isPlayed; 
+(BOOL)supportsURL:(id)arg1 ;
+(id)previewSummary;
+(BOOL)supportsIndividualPreviewSummaries;
+(id)previewSummaryForPluginBundle:(id)arg1 ;
+(id)replaceHandleWithContactNameInString:(id)arg1 forAccount:(id)arg2 additionalHandles:(id)arg3 ;
+(id)unlocalizedPreviewSummaryForPluginBundle:(id)arg1 pluginDisplayName:(id)arg2 ;
+(id)previewSummaryForPluginPayload:(id)arg1 withBundleID:(id)arg2 previewAttachmentURL:(id*)arg3 previewAttachmentUTI:(id*)arg4 ;
-(unsigned long long)playbackType;
-(void)setSessionGUID:(NSString *)arg1 ;
-(NSString *)sessionGUID;
-(void)stopPlayback;
-(NSString *)statusString;
-(NSString *)messageGUID;
-(DDScannerResult *)dataDetectedResult;
-(id)initWithMessageGUID:(id)arg1 payload:(id)arg2 dataDetectedResult:(id)arg3 url:(id)arg4 ;
-(void)setPluginPayload:(IMPluginPayload *)arg1 ;
-(void)_updateTemporaryAttachmentURLsForPluginPayload;
-(IMPluginPayload *)pluginPayload;
-(NSArray *)consumedPayloads;
-(void)setPendingAttachmentData:(NSArray *)arg1 ;
-(NSArray *)pendingAttachmentData;
-(IMChat *)chat;
-(NSString *)_imMessageGUID;
-(void)sendPayload:(id)arg1 attachments:(id)arg2 ;
-(void)updatePayload:(id)arg1 attachments:(id)arg2 ;
-(unsigned long long)_updateWithPluginPayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3 ;
-(void)pluginPayloadDidChange:(unsigned long long)arg1 ;
-(void)payloadDidChange;
-(NSMutableSet *)temporaryAttachmentURLs;
-(void)setTemporaryAttachmentURLs:(NSMutableSet *)arg1 ;
-(long long)messageIDOfLastMessageInSession;
-(void)setMessageGUID:(NSString *)arg1 ;
-(BOOL)_senderIsSameBetweenPayload:(id)arg1 andOtherPayload:(id)arg2 ;
-(BOOL)isFromMe;
-(void)_removeTemporaryAttachmentURLs;
-(BOOL)isPlayed;
-(void)setHasInvalidatedSize:(BOOL)arg1 ;
-(NSString *)guidOfLastMessageInSession;
-(id)initWithPluginPayload:(id)arg1 ;
-(id)individualPreviewAttachmentFileAndUTI:(id*)arg1 ;
-(id)individualPreviewSummary;
-(id)_summaryText;
-(id)_replaceHandleWithContactNameInString:(id)arg1 ;
-(BOOL)isShowingLatestMessageAsBreadcrumb;
-(BOOL)isShowingLatestMessageAsBreadcrumb;
-(void)setShowingLatestMessageAsBreadcrumb:(BOOL)arg1 ;
-(void)_reloadLatestUnconsumedBreadcrumb;
-(NSArray *)allPayloads;
-(void)setPayload:(id)arg1 attachments:(id)arg2 ;
-(NSData *)messagePayloadDataForSending;
-(IMMessage *)imMessage;
-(void)sendPayload:(id)arg1 ;
-(void)updatePayload:(id)arg1 ;
-(void)_updatePayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3 ;
-(void)thumbnailURLWithSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)payloadWillEnterShelf;
-(void)payloadWillSendFromShelf;
-(BOOL)wantsStatusItem;
-(NSAttributedString *)statusAttributedString;
-(void)didTapStatusItem;
-(BOOL)wantsReplyFromContentView;
-(void)statusStringNeedsUpdate;
-(BOOL)supportsDynamicSize;
-(void)needsResize;
-(void)markAsPlayed;
-(void)playbackWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)datasourceWasMovedToNewGuid:(id)arg1 ;
-(LPLinkMetadata *)richLinkMetadata;
-(void)beginShowingLastConsumedBreadcrumbForOutgoingPayload:(id)arg1 ;
-(void)endShowingLastConsumedBreadcrumb;
-(void)setChat:(IMChat *)arg1 ;
-(BOOL)payloadInShelf;
-(void)setPayloadInShelf:(BOOL)arg1 ;
-(void)setDataDetectedResult:(DDScannerResult *)arg1 ;
-(NSArray *)attachmentGUIDs;
-(void)setAttachmentGUIDs:(NSArray *)arg1 ;
-(NSURL *)URLToOpenOnTapAction;
-(BOOL)initialMessageIsFromMe;
-(void)setInitialMessageIsFromMe:(BOOL)arg1 ;
-(void)set_imMessageGUID:(NSString *)arg1 ;
-(BOOL)hasInvalidatedSize;
-(void)setConsumedPayloads:(NSArray *)arg1 ;
-(BOOL)parentChatHasAllUnknownRecipients;
-(void)setParentChatHasAllUnknownRecipients:(BOOL)arg1 ;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSData *)payload;
-(void)setPayload:(NSData *)arg1 ;
-(NSString *)bundleID;
-(BOOL)isLast;
-(void)setLast:(BOOL)arg1 ;
@end

