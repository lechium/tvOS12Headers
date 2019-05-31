/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <AudioToolbox/AUAudioUnitBus.h>

@class AUAudioUnitV2Bridge;

@interface AUV2BridgeBus : AUAudioUnitBus {

	AUAudioUnitV2Bridge* _owner;
	OpaqueAudioComponentInstanceRef _audioUnit;
	unsigned _scope;
	unsigned _element;

}
-(id)initWithOwner:(id)arg1 au:(OpaqueAudioComponentInstanceRef)arg2 scope:(unsigned)arg3 element:(unsigned)arg4 ;
-(BOOL)setFormat:(id)arg1 error:(id*)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)format;
@end

