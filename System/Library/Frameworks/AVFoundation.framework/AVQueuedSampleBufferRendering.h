/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVQueuedSampleBufferRendering <NSObject>
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData; 
@required
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1;
-(void)stopRequestingMediaData;
-(OpaqueCMTimebaseRef)timebase;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(BOOL)isReadyForMoreMediaData;
-(void)flush;

@end

