/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NAFuture, NSNumber;

@interface _HFMediaValueManagerTransaction : NSObject {

	NAFuture* _writeFuture;
	long long _playbackState;
	NSNumber* _transactionNumber;

}

@property (nonatomic,retain) NAFuture * writeFuture;                    //@synthesize writeFuture=_writeFuture - In the implementation block
@property (assign,nonatomic) long long playbackState;                   //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,retain) NSNumber * transactionNumber;              //@synthesize transactionNumber=_transactionNumber - In the implementation block
-(NSNumber *)transactionNumber;
-(NAFuture *)writeFuture;
-(void)setWriteFuture:(NAFuture *)arg1 ;
-(void)setTransactionNumber:(NSNumber *)arg1 ;
-(long long)playbackState;
-(void)setPlaybackState:(long long)arg1 ;
-(id)init;
-(id)description;
@end

