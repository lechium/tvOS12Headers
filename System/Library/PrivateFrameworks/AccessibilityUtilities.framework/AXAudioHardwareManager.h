/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXAudioHardwareManager : NSObject
+(void)enableMultiroute;
+(void)disableMultiroute;
+(id)defaultPort;
+(id)channelsForPort:(id)arg1 ;
+(BOOL)channelsAreAirplay:(id)arg1 route:(id)arg2 ;
+(BOOL)channelsAreWiredHeadphones:(id)arg1 ;
+(void)setDefaultPortChannels:(id)arg1 ;
+(id)defaultPortChannels;
+(void)setDefaultPort:(id)arg1 ;
+(id)sharedManager;
-(id)_savedIdForRouteDescription:(id)arg1 ;
-(void)_handleSurroundSoundDefaults:(id)arg1 returnedChannels:(id)arg2 port:(id)arg3 source:(long long)arg4 ;
-(id)savedChannelsForOutput:(id)arg1 forSource:(long long)arg2 ;
-(void)setSavedChannels:(id)arg1 forOutput:(id)arg2 forSource:(long long)arg3 ;
-(id)init;
@end

