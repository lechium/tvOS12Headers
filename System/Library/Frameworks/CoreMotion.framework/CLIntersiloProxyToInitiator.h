/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CLIntersiloProxy.h>

@class CLIntersiloProxy;

@interface CLIntersiloProxyToInitiator : CLIntersiloProxy {

	CLIntersiloProxy* _peer;

}

@property (nonatomic,__weak,readonly) CLIntersiloProxy * peer;              //@synthesize peer=_peer - In the implementation block
-(id)initWithDelegateObject:(id)arg1 delegateSilo:(id)arg2 uninitializedPeer:(id)arg3 ;
-(CLIntersiloProxy *)peer;
@end

