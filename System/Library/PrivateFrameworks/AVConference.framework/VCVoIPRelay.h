/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class VCVoIPRelayInternal;

@interface VCVoIPRelay : NSObject {

	VCVoIPRelayInternal* _internal;

}

@property (nonatomic,readonly) AudioStreamBasicDescription audioFormat; 
@property (nonatomic,readonly) unsigned long long blockSizeSamples; 
-(AudioStreamBasicDescription)audioFormat;
-(unsigned long long)blockSizeSamples;
-(id)initWithCaptureBlock:(/*^block*/id)arg1 renderBlock:(/*^block*/id)arg2 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)stopWithCompletionHandler:(/*^block*/id)arg1 ;
@end

