/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface _UIKBRTObject : NSObject {

	NSMutableArray* _owner;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
-(id)owner;
-(void)setOwner:(id)arg1 ;
-(id)previousEntry;
-(id)nextEntry;
@end

