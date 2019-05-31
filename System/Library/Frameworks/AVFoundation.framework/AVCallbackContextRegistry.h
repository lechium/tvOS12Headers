/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface AVCallbackContextRegistry : NSObject {

	NSMutableDictionary* _contextsForTokens;
	unsigned long long _currentToken;
	NSObject*<OS_dispatch_queue> _readWriteQueue;

}
+(id)sharedCallbackContextRegistry;
+(void)initialize;
-(void)finalize;
-(void*)registerCallbackContextObject:(id)arg1 ;
-(void)unregisterCallbackContextForToken:(void*)arg1 ;
-(id)callbackContextForToken:(void*)arg1 ;
-(id)init;
-(void)dealloc;
@end

