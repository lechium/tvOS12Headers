/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned capabilities; 
@property (nonatomic,readonly) NSString * endpointUID; 
@property (nonatomic,readonly) NSString * outputDeviceUID; 
-(NSString *)outputDeviceUID;
-(NSString *)endpointUID;
-(id)initWithCapabilities:(unsigned)arg1 endpointUID:(id)arg2 outputDeviceUID:(id)arg3 ;
-(unsigned)capabilities;
-(unsigned long long)type;
@end
