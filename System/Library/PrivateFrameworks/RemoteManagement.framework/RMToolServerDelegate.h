/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol RMToolXPCInterface;
@class NSString;

@interface RMToolServerDelegate : NSObject <NSXPCListenerDelegate> {

	id<RMToolXPCInterface> _target;

}

@property (nonatomic,retain) id<RMToolXPCInterface> target;              //@synthesize target=_target - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTarget:(id<RMToolXPCInterface>)arg1 ;
-(id<RMToolXPCInterface>)target;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

