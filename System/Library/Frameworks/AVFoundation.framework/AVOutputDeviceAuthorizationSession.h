/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputDeviceAuthorizationSessionInternal;

@interface AVOutputDeviceAuthorizationSession : NSObject {

	AVOutputDeviceAuthorizationSessionInternal* _ivars;

}

@property (__weak) id<AVOutputDeviceAuthorizationSessionDelegate> delegate; 
+(id)sharedAuthorizationSession;
+(id)outputDeviceAuthorizationSessionWithEndpointUIAgent:(OpaqueFigEndpointUIAgentRef)arg1 ;
+(void)initialize;
-(id)impl;
-(id)initWithOutputDeviceAuthorizationSessionImpl:(id)arg1 ;
-(void)outputDeviceAuthorizationSessionImplDidExpireWithReplacementImpl:(id)arg1 ;
-(void)outputDeviceAuthorizationSessionImpl:(id)arg1 didProvideAuthorizationRequest:(id)arg2 ;
-(BOOL)outputDeviceAuthorizationSessionImpl:(id)arg1 shouldRetryAuthorizationRequest:(id)arg2 reason:(id)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id<AVOutputDeviceAuthorizationSessionDelegate>)arg1 ;
-(id<AVOutputDeviceAuthorizationSessionDelegate>)delegate;
@end

