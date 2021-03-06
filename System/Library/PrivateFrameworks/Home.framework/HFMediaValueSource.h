/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol HFMediaValueSource <NSObject>
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer; 
@property (nonatomic,readonly) BOOL hasPendingWrites; 
@property (nonatomic,readonly) NSError * cachedPlaybackStateWriteError; 
@required
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(BOOL)hasPendingWrites;
-(long long)lastPlaybackStateForProfile;
-(id)writePlaybackState:(long long)arg1;
-(NSError *)cachedPlaybackStateWriteError;

@end

