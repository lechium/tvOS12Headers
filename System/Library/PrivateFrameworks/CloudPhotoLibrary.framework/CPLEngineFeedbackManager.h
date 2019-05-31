/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CPLEngineTransportSendFeedbackTask;
@class NSObject, NSMutableArray, NSArray, NSDate, NSURL, CPLEngineLibrary;

@interface CPLEngineFeedbackManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CPLEngineTransportSendFeedbackTask> _sendTask;
	NSMutableArray* _messagesToSend;
	NSArray* _messagesSending;
	NSDate* _lastAttemptDate;
	NSURL* _feedbackMessagesURL;
	BOOL _opened;
	BOOL _closed;
	BOOL _deactivated;
	CPLEngineLibrary* _engineLibrary;

}

@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;              //@synthesize engineLibrary=_engineLibrary - In the implementation block
-(CPLEngineLibrary *)engineLibrary;
-(void)reportResetType:(id)arg1 reason:(id)arg2 uuid:(id)arg3 ;
-(void)reportEndOfResetWithUUID:(id)arg1 reason:(id)arg2 ;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)_sendFeedbackToServerIfNecessary;
-(void)_reallySendFeedbackToServer;
-(void)_appendMessage:(id)arg1 ;
-(void)_appendMessages:(id)arg1 ;
-(void)reportMessage:(id)arg1 ;
-(void)sendFeedbackToServerIfNecessary;
-(void)reportMessages:(id)arg1 ;
-(void)reportFetchChangesRewindToFeatureVersion:(unsigned long long)arg1 ;
-(void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2 ;
-(void)reportMiscInformation:(id)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)componentName;
-(void)_save;
-(void)_load;
@end

