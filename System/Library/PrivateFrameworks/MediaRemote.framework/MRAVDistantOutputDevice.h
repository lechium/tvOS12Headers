/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVOutputDevice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _MRAVOutputDeviceDescriptorProtobuf, MRAVOutputDeviceSourceInfo, NSDictionary;

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding> {

	_MRAVOutputDeviceDescriptorProtobuf* _protobuf;
	MRAVOutputDeviceSourceInfo* _sourceInfo;
	NSDictionary* _modelSpecificInfo;

}
+(BOOL)supportsSecureCoding;
-(BOOL)requiresAuthorization;
-(BOOL)canAccessAppleMusic;
-(BOOL)canAccessiCloudMusicLibrary;
-(BOOL)supportsBufferedAirPlay;
-(BOOL)groupContainsGroupLeader;
-(id)logicalDeviceID;
-(BOOL)canRelayCommunicationChannel;
-(BOOL)hasBatteryLevel;
-(id)initWithDescriptor:(id)arg1 ;
-(BOOL)isLocalDevice;
-(BOOL)isRemoteControllable;
-(BOOL)isGroupable;
-(BOOL)isDeviceGroupable;
-(BOOL)isAirPlayReceiverSessionActive;
-(BOOL)parentGroupContainsDiscoverableLeader;
-(id)parentGroupIdentifier;
-(id)modelSpecificInfo;
-(BOOL)supportsExternalScreen;
-(id)sourceInfo;
-(id)initWithSkeleton:(id)arg1 ;
-(BOOL)canAccessRemoteAssets;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)isVolumeControlAvailable;
-(BOOL)isProxyGroupPlayer;
-(BOOL)isGroupLeader;
-(unsigned)deviceType;
-(id)firmwareVersion;
-(id)groupID;
-(id)modelID;
-(float)volume;
-(unsigned)deviceSubtype;
-(id)MACAddress;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)name;
-(id)descriptor;
-(float)batteryLevel;
-(id)uid;
@end

