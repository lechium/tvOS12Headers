/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCControlChannelTransactionDelegate <NSObject>
@property (readonly) BOOL isEncryptionEnabled; 
@required
-(BOOL)isParticipantActive:(unsigned long long)arg1;
-(void)addToSentStats:(int)arg1;
-(BOOL)isEncryptionEnabled;
-(id)lastUsedMKIBytes;
-(void)scheduleAfter:(unsigned)arg1 block:(/*^block*/id)arg2;
-(void)addToReceivedStats:(int)arg1;

@end

