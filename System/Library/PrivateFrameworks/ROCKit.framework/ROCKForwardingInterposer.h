/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@interface ROCKForwardingInterposer : NSObject {

	id<NSObject> _remoteObject;

}

@property (nonatomic,retain) id<NSObject> remoteObject;              //@synthesize remoteObject=_remoteObject - In the implementation block
+(id)forwardingInterposerWithRemoteObject:(id)arg1 ;
-(id)rockEncodeWithSessionManager:(id)arg1 error:(id*)arg2 ;
-(void)setRemoteObject:(id<NSObject>)arg1 ;
-(id<NSObject>)remoteObject;
-(id)initWithRemoteObject:(id)arg1 ;
-(void)forwardCallWithInvocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end
