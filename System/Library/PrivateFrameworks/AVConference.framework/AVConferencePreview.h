/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVConferencePreviewClientDelegate, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, CALayer, VideoAttributes, NSObject, NSString;

@interface AVConferencePreview : NSObject {

	BOOL clientWantsPreview;
	unsigned connectionAttempts;
	AVConferenceXPCClient* connection;
	CALayer* caLayerFront;
	CALayer* caLayerBack;
	VideoAttributes* localVideoAttributes;
	CGSize localScreenPortraitAspectRatio;
	CGSize localScreenLandscapeAspectRatio;
	NSObject*<AVConferencePreviewClientDelegate> delegate;
	NSObject*<OS_dispatch_queue> avConferencePreviewQueue;
	NSObject*<OS_dispatch_queue> avConferencePreviewNotificationQueue;
	BOOL _isPreviewRunning;
	NSString* _localCameraUID;

}

@property (nonatomic,retain) NSObject*<AVConferencePreviewClientDelegate> delegate; 
+(id)AVConferencePreviewSingleton;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(void)startPreview;
-(BOOL)isPreviewRunning;
-(void)setAnimoji:(id)arg1 ;
-(void)setMemoji:(id)arg1 ;
-(void)registerBlocksForDelegateNotifications;
-(id)localVideoAttributes;
-(void)pausePreview;
-(void)stopPreview;
-(void)setLocalVideoAttributes:(id)arg1 ;
-(void)beginPreviewToPIPAnimation;
-(void)endPreviewToPIPAnimation;
-(void)beginPIPToPreviewAnimation;
-(void)endPIPToPreviewAnimation;
-(void)addStickerWithURL:(id)arg1 isFaceSticker:(BOOL)arg2 atPosition:(CGPoint)arg3 identifier:(id)arg4 ;
-(void)clearAllStickers:(BOOL)arg1 ;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2 ;
-(void)didStartPreview;
-(void)didStopPreview;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1 ;
-(void)didChangeLocalVideoAttributes:(id)arg1 ;
-(void)didChangeLocalScreenAttributes:(id)arg1 ;
-(void)didPausePreview;
-(void)startPreviewUnpausing:(BOOL)arg1 ;
-(void)didReceiveCommError;
-(void)didGetSnapshot:(id)arg1 ;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg1 ;
-(void)cameraDidBecomeInterruptedForForUniqueID:(id)arg1 reason:(long long)arg2 ;
-(void)setLocalVideoLayer:(id)arg1 front:(BOOL)arg2 ;
-(void)connectLayer:(id)arg1 withSlot:(unsigned)arg2 ;
-(void)getSnapshot;
-(id)localVideoLayer:(BOOL)arg1 ;
-(void)setLocalCamera:(unsigned)arg1 ;
-(void)setLocalCameraWithUID:(id)arg1 ;
-(unsigned)localCamera;
-(id)localCameraUID;
-(id)init;
-(void)dealloc;
-(id)allocWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(unsigned long long)retainCount;
-(void)setDelegate:(NSObject*<AVConferencePreviewClientDelegate>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<AVConferencePreviewClientDelegate>)delegate;
@end
