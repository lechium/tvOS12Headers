/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface GEOMapRequestManager : NSObject {

	NSMutableSet* _requests;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)trackRequest:(id)arg1 ;
-(void)requestComplete:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

