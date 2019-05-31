/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualTouchDeviceDescriptor;

@interface MRRegisterHIDDeviceMessage : MRProtocolMessage {

	MRVirtualTouchDeviceDescriptor* _deviceDescriptor;

}

@property (nonatomic,copy,readonly) MRVirtualTouchDeviceDescriptor * deviceDescriptor; 
-(id)initWithDeviceDescriptor:(id)arg1 ;
-(MRVirtualTouchDeviceDescriptor *)deviceDescriptor;
-(unsigned long long)type;
@end

