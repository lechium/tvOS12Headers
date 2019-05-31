/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDCameraGetSnapshotProtocol.h>
#import <libobjc.A.dylib/HMDCameraSnapshotSenderProtocol.h>
#import <libobjc.A.dylib/HMDCameraSnapshotReceiverProtocol.h>
#import <libobjc.A.dylib/HMDCameraSnapshotRemoteStreamSenderDelegate.h>
#import <libobjc.A.dylib/HMDCameraSnapshotRemoteRelayReceiverDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDCameraSnapshotRemoteRelayStreamDelegate;
@class NSObject, HMDCameraSnapshotRemoteStreamSender, HMDCameraSnapshotRemoteRelayReceiver, NSString;

@interface HMDCameraSnapshotRemoteRelayStream : HMFObject <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotRemoteStreamSenderDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMFLogging> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMDCameraSnapshotRemoteStreamSender* _streamSender;
	HMDCameraSnapshotRemoteRelayReceiver* _relayReceiver;
	id<HMDCameraSnapshotRemoteRelayStreamDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                      //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMDCameraSnapshotRemoteStreamSender * streamSender;                          //@synthesize streamSender=_streamSender - In the implementation block
@property (nonatomic,readonly) HMDCameraSnapshotRemoteRelayReceiver * relayReceiver;                        //@synthesize relayReceiver=_relayReceiver - In the implementation block
@property (nonatomic,__weak,readonly) id<HMDCameraSnapshotRemoteRelayStreamDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                                  //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)logIdentifier;
-(void)getSnapshot:(unsigned long long)arg1 ;
-(void)_callDidStartCaptureImageDelegate:(id)arg1 ;
-(void)_callDidCompleteSendImageDelegate:(id)arg1 ;
-(void)snapshotStreamSender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotStreamSender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3 ;
-(void)_sendImageSendFailure:(id)arg1 ;
-(void)snapShotTransferComplete;
-(HMDCameraSnapshotRemoteStreamSender *)streamSender;
-(HMDCameraSnapshotRemoteRelayReceiver *)relayReceiver;
-(void)snapShotSendFailed:(id)arg1 ;
-(void)snapshotRelayReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3 ;
-(void)snapshotRelayReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4 ;
-(id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 device:(id)arg4 accessory:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 uniqueIdentifier:(id)arg8 snapshotRequestHandler:(id)arg9 residentMessageHandler:(id)arg10 ;
-(void)dealloc;
-(id<HMDCameraSnapshotRemoteRelayStreamDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
@end

