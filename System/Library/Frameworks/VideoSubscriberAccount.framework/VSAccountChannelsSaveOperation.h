/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSError, VSAccountChannels, VSAccountChannelsCenter;

@interface VSAccountChannelsSaveOperation : VSAsyncOperation {

	NSError* _error;
	VSAccountChannels* _unsavedAccountChannels;
	VSAccountChannelsCenter* _accountChannelsCenter;

}

@property (nonatomic,retain) VSAccountChannels * unsavedAccountChannels;                   //@synthesize unsavedAccountChannels=_unsavedAccountChannels - In the implementation block
@property (nonatomic,retain) VSAccountChannelsCenter * accountChannelsCenter;              //@synthesize accountChannelsCenter=_accountChannelsCenter - In the implementation block
@property (nonatomic,copy) NSError * error;                                                //@synthesize error=_error - In the implementation block
-(VSAccountChannels *)unsavedAccountChannels;
-(VSAccountChannelsCenter *)accountChannelsCenter;
-(void)setUnsavedAccountChannels:(VSAccountChannels *)arg1 ;
-(void)setAccountChannelsCenter:(VSAccountChannelsCenter *)arg1 ;
-(id)initWithUnsavedAccountChannels:(id)arg1 accountChannelsCenter:(id)arg2 ;
-(void)executionDidBegin;
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

