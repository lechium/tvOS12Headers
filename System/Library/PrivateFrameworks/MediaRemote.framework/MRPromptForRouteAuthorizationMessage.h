/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:05 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRAVOutputDevice;

@interface MRPromptForRouteAuthorizationMessage : MRProtocolMessage {

	MRAVOutputDevice* _route;

}

@property (nonatomic,readonly) MRAVOutputDevice * route; 
@property (nonatomic,readonly) long long inputType; 
-(MRAVOutputDevice *)route;
-(long long)inputType;
-(id)initWithRoute:(id)arg1 inputType:(long long)arg2 ;
-(unsigned long long)type;
@end

