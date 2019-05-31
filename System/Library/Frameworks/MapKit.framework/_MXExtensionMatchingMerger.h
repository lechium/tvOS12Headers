/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface _MXExtensionMatchingMerger : NSObject {

	NSObject*<OS_dispatch_queue> _lock;
	NSArray* _mapExtensions;
	NSArray* _intentNonUIExtensions;
	NSArray* _intentUIExtensions;

}
-(id)receiveExtensions:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(void)clearExtensions;
-(id)init;
@end

