/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCSessionDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface VCSessionManager : NSObject <VCSessionDelegate> {

	NSMutableDictionary* _sessions;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * sessions;              //@synthesize sessions=_sessions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2 ;
+(id)sharedInstance;
-(void)registerBlocksForService;
-(void)deregisterBlocksForService;
-(NSMutableDictionary *)sessions;
-(id)participantConfigFromXPCDictionary:(id)arg1 ;
-(void)vcSession:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3 ;
-(void)vcSession:(id)arg1 didStopWithError:(id)arg2 ;
-(void)vcSession:(id)arg1 addParticipantWithID:(id)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)vcSession:(id)arg1 removeParticipantWithID:(id)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)vcSession:(id)arg1 updateConfiguration:(id)arg2 didSucceed:(BOOL)arg3 error:(id)arg4 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 audioEnabled:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(id)arg5 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 videoEnabled:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(id)arg5 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioEnabledDidChange:(BOOL)arg3 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoEnabledDidChange:(BOOL)arg3 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 audioPaused:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(id)arg5 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 videoPaused:(BOOL)arg3 didSucceed:(BOOL)arg4 error:(id)arg5 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioPausedDidChange:(BOOL)arg3 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoPausedDidChange:(BOOL)arg3 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 didChangeProminence:(unsigned char)arg3 description:(id)arg4 ;
-(void)vcSession:(id)arg1 participantID:(id)arg2 didDetectError:(id)arg3 ;
-(id)sessionForUUID:(id)arg1 ;
-(id)sessionForStreamToken:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
@end

