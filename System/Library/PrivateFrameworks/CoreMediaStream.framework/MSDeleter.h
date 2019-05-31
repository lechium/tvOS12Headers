/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:53 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/MSCupidStateMachine.h>
#import <libobjc.A.dylib/MSDeleter.h>

@protocol MSDeleter <NSObject>
@property (assign,nonatomic) id<MSDeleterDelegate> delegate; 
@required
-(void)performOutstandingActivities;
-(void)deleteAssetCollections:(id)arg1;
-(void)abort;
-(void)setDelegate:(id)arg1;
-(id<MSDeleterDelegate>)delegate;
-(void)stop;

@end

#import <libobjc.A.dylib/MSDeleteStreamsProtocolDelegate.h>

@protocol MSDeleterDelegate;
@class MSDeleteStreamsProtocol, MSObjectQueue, NSMutableArray, MSMediaStreamDaemon, NSString;

@interface MSDeleter : MSCupidStateMachine <MSDeleter, MSDeleteStreamsProtocolDelegate> {

	MSDeleteStreamsProtocol* _protocol;
	int _state;
	MSObjectQueue* _deleteQueue;
	NSMutableArray* _requestedDeleteWrappers;
	int _batchSize;
	int _maxErrorCount;
	id<MSDeleterDelegate> _delegate;
	MSMediaStreamDaemon* _daemon;

}

@property (assign,nonatomic) MSMediaStreamDaemon * daemon;                //@synthesize daemon=_daemon - In the implementation block
@property (assign,nonatomic) int batchSize;                               //@synthesize batchSize=_batchSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<MSDeleterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)nextActivityDate;
+(id)personIDsWithOutstandingActivities;
+(BOOL)isInRetryState;
+(id)deleterForPersonID:(id)arg1 ;
+(id)existingDeleterForPersonID:(id)arg1 ;
+(void)stopAllActivities;
+(void)abortAllActivities;
+(id)nextActivityDateForPersonID:(id)arg1 ;
+(void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2 ;
+(id)_clearInstantiatedDeletersByPersonID;
+(void)forgetPersonID:(id)arg1 ;
-(void)setDaemon:(MSMediaStreamDaemon *)arg1 ;
-(MSMediaStreamDaemon *)daemon;
-(void)performOutstandingActivities;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(BOOL)_isInRetryState;
-(void)_updateMasterManifest;
-(id)_abortedError;
-(void)_forget;
-(BOOL)_isAllowedToDelete;
-(void)_sendDeleteRequest;
-(void)deleteProtocol:(id)arg1 didFinishSuccessfulCollections:(id)arg2 failedCollections:(id)arg3 error:(id)arg4 ;
-(void)deleteProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(int)batchSize;
-(void)setBatchSize:(int)arg1 ;
-(void)deleteAssetCollections:(id)arg1 ;
-(void)abort;
-(void)_abort;
-(void)dealloc;
-(void)setDelegate:(id<MSDeleterDelegate>)arg1 ;
-(id<MSDeleterDelegate>)delegate;
-(void)stop;
-(void)_stop;
-(void)deactivate;
@end

