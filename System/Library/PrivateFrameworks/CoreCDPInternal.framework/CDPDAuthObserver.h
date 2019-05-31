/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPDXPCEventListener.h>

@class NSMutableArray, NSString;

@interface CDPDAuthObserver : NSObject <CDPDXPCEventListener> {

	NSMutableArray* _authListeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)eventReceived:(const char*)arg1 eventInfo:(id)arg2 ;
-(void)registerListener:(id)arg1 ;
-(id)init;
@end

