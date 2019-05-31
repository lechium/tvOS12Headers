/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioNode;

@interface AVAudioConnectionPoint : NSObject {

	AVAudioNode* _node;
	unsigned long long _bus;
	void* _reserved;

}

@property (nonatomic,__weak,readonly) AVAudioNode * node;              //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) unsigned long long bus;                 //@synthesize bus=_bus - In the implementation block
+(id)connectionPointWithNode:(id)arg1 bus:(unsigned long long)arg2 ;
-(unsigned long long)bus;
-(id)initWithNode:(id)arg1 bus:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(AVAudioNode *)node;
@end
