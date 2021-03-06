/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputDeviceConfigurationModification.h>

@class NSString;

@interface AVFigRoutingContextCommandOutputDeviceConfigurationModification : NSObject <AVOutputDeviceConfigurationModification> {

	CFDictionaryRef _payload;

}

@property (nonatomic,readonly) CFDictionaryRef routingContextCommandPayload;              //@synthesize payload=_payload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(CFDictionaryRef)routingContextCommandPayload;
-(void)startAutomaticallyAllowingConnectionsFromPeersInHomeGroupAndRejectOtherConnections:(BOOL)arg1 ;
-(void)addPeerToHomeGroup:(id)arg1 ;
-(void)setDevicePassword:(id)arg1 ;
-(void)stopAutomaticallyAllowingConnectionsFromPeersInHomeGroup;
-(void)removePeerWithIDFromHomeGroup:(id)arg1 ;
-(void)setDeviceName:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

