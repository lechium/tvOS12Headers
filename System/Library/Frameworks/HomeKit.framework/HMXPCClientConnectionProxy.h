/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMXPCMessageTransport.h>

@class NSString;

@interface HMXPCClientConnectionProxy : HMFMessageTransport <HMXPCMessageTransport> {

	/*^block*/id _refreshHandler;

}

@property (nonatomic,copy) id refreshHandler;                       //@synthesize refreshHandler=_refreshHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithName:(id)arg1 identifier:(id)arg2 target:(id)arg3 payload:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(id)refreshHandler;
-(id)initWithRefreshHandler:(/*^block*/id)arg1 ;
-(void)setRefreshHandler:(id)arg1 ;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 ;
-(void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
@end

