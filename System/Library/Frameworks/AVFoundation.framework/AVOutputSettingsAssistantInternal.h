/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:39 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVOutputSettingsAssistantBaseSettingsProvider, AVOutputSettingsAssistantVideoSettingsAdjuster;
#import <AVFoundation/AVFoundation-Structs.h>
@interface AVOutputSettingsAssistantInternal : NSObject {

	id<AVOutputSettingsAssistantBaseSettingsProvider> baseSettingsProvider;
	id<AVOutputSettingsAssistantVideoSettingsAdjuster> videoSettingsAdjuster;
	opaqueCMFormatDescriptionRef sourceVideoFormat;
	opaqueCMFormatDescriptionRef sourceAudioFormat;
	SCD_Struct_AV5 sourceVideoAverageFrameDuration;
	SCD_Struct_AV5 sourceVideoMinFrameDuration;

}
@end

