/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface FBSXPCMessage : NSObject {

	NSObject*<OS_xpc_object> _payload;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> payload;              //@synthesize payload=_payload - In the implementation block
+(id)messageWithPayload:(id)arg1 ;
+(id)messageWithPacker:(/*^block*/id)arg1 ;
+(id)message;
-(id)initWithMessagePayload:(id)arg1 ;
-(id)initWithMessagePacker:(/*^block*/id)arg1 ;
-(void)sendReplyMessageWithPacker:(/*^block*/id)arg1 ;
-(id)init;
-(NSObject*<OS_xpc_object>)payload;
@end

