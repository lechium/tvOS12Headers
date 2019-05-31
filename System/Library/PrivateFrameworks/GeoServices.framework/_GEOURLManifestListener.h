/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSMutableArray, NSLock, NSObject;

@interface _GEOURLManifestListener : NSObject {

	NSMutableArray* _handlers;
	NSLock* _lock;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}
+(id)sharedListener;
-(void)waitForManifestWithCallback:(id)arg1 ;
-(id)init;
-(void)_finish:(BOOL)arg1 ;
@end

